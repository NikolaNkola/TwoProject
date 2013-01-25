//
//  AppDelegate_Shared.h
//  TwoProject
//
//  Created by Administrator on 26.01.13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RootViewController.h"

@interface AppDelegate_Shared : UIResponder{
    RootViewController* _rootViewController;
}

@property (retain, nonatomic) IBOutlet UIWindow* window;
@property (retain, nonatomic) RootViewController* rootViewcontroller;

@end
