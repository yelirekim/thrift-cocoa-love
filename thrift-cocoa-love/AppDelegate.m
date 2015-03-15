//
//  AppDelegate.m
//  thrift-cocoa-love
//
//  Created by NoWait on 3/15/15.
//  Copyright (c) 2015 NoWait. All rights reserved.
//

#import "AppDelegate.h"
#import "LiberalBinaryProtocolFactory.h"
#import "AFNetworkingThriftTransport.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    LiberalBinaryProtocolFactory * factory = [[LiberalBinaryProtocolFactory alloc] init];
    AFNetworkingThriftTransport * transport = [[AFNetworkingThriftTransport alloc]
                                               initWithURL:[NSURL URLWithString:@"http://asdf.yelirekim.nowaitapp.net"]];
    _asdf = [[asdfAuthenticatedServiceClientAsync alloc] initWithProtocolFactory:factory transport:transport];
    return YES;
}

@end
