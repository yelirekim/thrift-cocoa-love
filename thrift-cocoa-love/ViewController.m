//
//  ViewController.m
//  thrift-cocoa-love
//
//  Created by NoWait on 3/15/15.
//  Copyright (c) 2015 NoWait. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"

@interface ViewController ()

@property (nonatomic) IBOutlet UILabel * label;

- (IBAction)ping:(UIButton *)sender;

@end

@implementation ViewController

- (IBAction)ping:(UIButton *)sender
{
    sender.enabled = NO;
    [app.asdf ping:[[asdfAuthenticationEnvelope alloc] initWithToken:@"faketoken"] response:^(int32_t stamp) {
        self.label.text = [NSString stringWithFormat:@"You pinged at %d", stamp];
        sender.enabled = YES;
    } failure:^(TException * exception) {
        self.label.text = [NSString stringWithFormat:@"Got an error.. %@", exception.name];
        sender.enabled = YES;
    }];
}

@end
