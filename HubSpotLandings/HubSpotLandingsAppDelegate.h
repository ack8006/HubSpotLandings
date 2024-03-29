//
//  HubSpotLandingsAppDelegate.h
//  HubSpotLandings
//
//  Created by Alex Takata on 1/16/12.
//  Copyright 2012 Bowdoin College. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HubSpotLandingsViewController;

@interface HubSpotLandingsAppDelegate : NSObject <UIApplicationDelegate>{
    UIWindow *window;
    HubSpotLandingsViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HubSpotLandingsViewController *viewController;

@end
