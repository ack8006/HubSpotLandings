//
//  CSVBrain.h
//  HubSpotLandingPages
//
//  Created by Alex Takata on 1/14/12.
//  Copyright 2012 Bowdoin College. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSVBrain : NSObject
{
    NSMutableArray *pictures;
}

- (NSMutableArray*)parseCSVFile;
- (NSMutableArray*)getPictures:(NSArray *) urls;

@property (nonatomic, retain) NSMutableArray *pictures;

@end
