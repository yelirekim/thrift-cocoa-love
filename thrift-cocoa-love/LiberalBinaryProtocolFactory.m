//
//  LiberalBinaryProtocolFactory.m
//  thrift-cocoa-love
//
//  Created by NoWait on 3/15/15.
//  Copyright (c) 2015 NoWait. All rights reserved.
//

#import "LiberalBinaryProtocolFactory.h"
#import "TBinaryProtocol.h"

@implementation LiberalBinaryProtocolFactory

- (id <TProtocol>) newProtocolOnTransport: (id <TTransport>) transport
{
    TBinaryProtocol * protocol = [[TBinaryProtocol alloc] initWithTransport:transport strictRead:NO strictWrite:NO];
    return protocol;
}

@end
