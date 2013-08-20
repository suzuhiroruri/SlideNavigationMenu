//
//  HAAppDelegate.m
//  NavigationMenu
//
//  Created by Hiromasa Suzuki on 8/20/13.
//  Copyright (c) 2013 Hiromasa Suzuki. All rights reserved.
//

#import "HAAppDelegate.h"
#import "HAViewController.h"

@implementation HAAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.viewController = [[HAViewController alloc] initWithNibName:@"HAViewController" bundle:nil];
    self.window.rootViewController = [[UINavigationController alloc] initWithRootViewController:self.viewController];
    [self.window makeKeyAndVisible];
    return YES;
}

@end
