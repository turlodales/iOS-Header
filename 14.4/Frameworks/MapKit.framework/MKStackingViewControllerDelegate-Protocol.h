//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKStackingViewController, UIViewController;

@protocol MKStackingViewControllerDelegate <NSObject>

@optional
- (void)stackingViewControllerDidLayoutViewControllers:(MKStackingViewController *)arg1;
- (void)stackingViewControllerDidEndScroll:(MKStackingViewController *)arg1;
- (void)stackingViewControllerWillBeginScroll:(MKStackingViewController *)arg1;
- (void)stackingViewController:(MKStackingViewController *)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(UIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 heightForSeparatorBetweenUpperViewController:(UIViewController *)arg2 andLowerViewController:(UIViewController *)arg3;
- (double)stackingViewControllerHeightForTitleView:(MKStackingViewController *)arg1;
@end

