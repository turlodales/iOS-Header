//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSError, SKUIBannerViewController;

@protocol SKUIBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(SKUIBannerViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)bannerViewDidClose:(SKUIBannerViewController *)arg1;
@end

