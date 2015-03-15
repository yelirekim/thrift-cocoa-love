//
//  AFNetworkingThriftTransport.h
//  thrift-cocoa-love
//
//  Created by NoWait on 3/15/15.
//  Copyright (c) 2015 NoWait. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TAsyncTransport.h"
#import "THTTPClient.h"

@interface AFNetworkingThriftTransport : THTTPClient <TAsyncTransport>

@end
