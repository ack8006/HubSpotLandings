//
//  HubSpotLandingsAppDelegate.m
//  HubSpotLandings
//
//  Created by Alex Takata on 1/16/12.
//  Copyright 2012 Bowdoin College. All rights reserved.
//

#import "HubSpotLandingsAppDelegate.h"

#import "HubSpotLandingsViewController.h"

@implementation HubSpotLandingsAppDelegate

@synthesize window;
@synthesize viewController;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
     
    [window addSubview:viewController.view];

    [self.window makeKeyAndVisible];
    
    return YES;
}

- (void)dealloc
{
    [window release];
    [viewController release];
    [super dealloc];
}

@end
