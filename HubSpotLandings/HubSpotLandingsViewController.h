

#import <UIKit/UIKit.h>
#import "CSVBrain.h"

@class ImageScrollView;

@interface HubSpotLandingsViewController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *pagingScrollView;
    
    NSMutableSet *recycledPages;
    NSMutableSet *visiblePages;
    
    NSMutableArray *pictures;
    CSVBrain *csv;
    
    // these values are stored off before we start rotation so we adjust our content offset appropriately during rotation
    int           firstVisiblePageIndexBeforeRotation;
    CGFloat       percentScrolledIntoFirstVisiblePage;
}

- (void)configurePage:(ImageScrollView *)page forIndex:(NSUInteger)index;
- (BOOL)isDisplayingPageForIndex:(NSUInteger)index;

- (CGRect)frameForPagingScrollView;
- (CGRect)frameForPageAtIndex:(NSUInteger)index;
- (CGSize)contentSizeForPagingScrollView;

- (void)tilePages;
- (ImageScrollView *)dequeueRecycledPage;

- (NSUInteger)imageCount;
- (NSString *)imageNameAtIndex:(NSUInteger)index;
- (CGSize)imageSizeAtIndex:(NSUInteger)index;
- (UIImage *)imageAtIndex:(NSUInteger)index;

@property (nonatomic, retain) NSMutableArray *pictures;
@property (nonatomic,retain) CSVBrain *csv;


@end

