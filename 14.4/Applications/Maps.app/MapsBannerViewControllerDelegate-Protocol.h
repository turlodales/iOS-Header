//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MapsBannerViewController, NSString;

@protocol MapsBannerViewControllerDelegate <NSObject>

@optional
- (void)presentableDidDisappearAsBanner:(MapsBannerViewController *)arg1 withReason:(NSString *)arg2;
- (void)presentableWillDisappearAsBanner:(MapsBannerViewController *)arg1 withReason:(NSString *)arg2;
- (void)presentableDidAppearAsBanner:(MapsBannerViewController *)arg1;
- (void)presentableWillAppearAsBanner:(MapsBannerViewController *)arg1;
@end

