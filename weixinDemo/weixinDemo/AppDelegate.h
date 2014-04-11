//
//  AppDelegate.h
//  weixinDemo
//
//  Created by jins on 14-4-11.
//  Copyright (c) 2014年 BlackWater. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXApi.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate, WXApiDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
