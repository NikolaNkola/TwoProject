//
//  AppDelegate_Shared.m
//  TwoProject
//
//  Created by Administrator on 26.01.13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "AppDelegate_Shared.h"

@implementation AppDelegate_Shared

@synthesize window;
@synthesize rootViewcontroller = _rootViewController;


- (void)dealloc {
    [window release];
    [_rootViewController release];
    [super dealloc];
}

@end
