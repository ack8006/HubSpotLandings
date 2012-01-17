//
//  CSVBrain.m
//  HubSpotLandingPages
//
//  Created by Alex Takata on 1/14/12.
//  Copyright 2012 Bowdoin College. All rights reserved.
//

#import "CSVBrain.h"

@implementation CSVBrain

@synthesize pictures;

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (NSMutableArray*)parseCSVFile
{
    NSString *path = [[NSBundle mainBundle] pathForResource:@"Urls" ofType:@"csv"];
    NSString* content = [NSString stringWithContentsOfFile:path
                                                  encoding:NSUTF8StringEncoding
                                                     error:NULL];
    if (!content) {
        NSLog(@"Error reading file.");
    }
    NSArray *listOfUrls = [content componentsSeparatedByString:@","];

    return [self getPictures:listOfUrls];
}

- (NSMutableArray*)getPictures:(NSArray *) urls
{
    
    int count = [urls count];
    pictures = [[[NSMutableArray alloc] initWithCapacity:count]autorelease];

    for (NSString *url in urls) {
        NSData * imageData = [[NSData alloc] initWithContentsOfURL: [NSURL URLWithString: url]];
        [pictures addObject:[UIImage imageWithData: imageData]];
        [imageData release];
    }
    
    return pictures;
}
@end
