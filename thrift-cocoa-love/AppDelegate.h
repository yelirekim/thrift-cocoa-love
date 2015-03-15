//
//  AppDelegate.h
//  thrift-cocoa-love
//
//  Created by NoWait on 3/15/15.
//  Copyright (c) 2015 NoWait. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "asdf.h"

#define app ((AppDelegate *)[UIApplication sharedApplication].delegate)

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, readonly) asdfAuthenticatedServiceClientAsync * asdf;

@end

