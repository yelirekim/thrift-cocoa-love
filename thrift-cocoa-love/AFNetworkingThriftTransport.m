//
//  AFNetworkingThriftTransport.m
//  thrift-cocoa-love
//
//  Created by NoWait on 3/15/15.
//  Copyright (c) 2015 NoWait. All rights reserved.
//

#import "AFNetworkingThriftTransport.h"
#import <AFHTTPRequestOperationManager.h>
#import "TTransportException.h"

@interface AFNetworkingThriftTransport () {
    AFHTTPRequestOperationManager * requestManager;
}

@end

@implementation AFNetworkingThriftTransport

- (id) initWithURL: (NSURL *) aURL
         userAgent: (NSString *) userAgent
           timeout: (int) timeout
{
    self = [super initWithURL:aURL userAgent:userAgent timeout:timeout];
    if (!self) {
        return nil;
    }
    
    requestManager = [[AFHTTPRequestOperationManager alloc] initWithBaseURL:aURL];
    requestManager.responseSerializer = [AFHTTPResponseSerializer serializer];
    
    return self;
}

- (void) flush:(dispatch_block_t)flushed failure:(TAsyncFailureBlock)failure
{
    mRequest.HTTPBody = [mRequestData copy];
    AFHTTPRequestOperation * operation = [requestManager HTTPRequestOperationWithRequest:mRequest success:
                                          ^(AFHTTPRequestOperation * operation, NSData * data) {
                                              mResponseData = data;
                                              mResponseDataOffset = 0;
                                              flushed();
                                          } failure:^(AFHTTPRequestOperation * operation, NSError * error) {
                                              failure([TTransportException
                                                       exceptionWithReason:@"HTTP Request Operation Failure"
                                                       error:error]);
                                          }];
    [requestManager.operationQueue addOperation:operation];
    [mRequestData setLength:0];
}

- (void) flush
{
    [self flush:^{} failure:^(TException * exception) {
        @throw exception;
    }];
}

@end
