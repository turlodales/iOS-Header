//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBUIBannerHomeGestureContext;

@protocol SBUIBannerHomeGestureParticipant <NSObject>
@property(nonatomic) __weak id <SBUIBannerHomeGestureContext> bannerHomeGestureContext;

@optional
- (_Bool)homeAffordanceDidCrossThreshold;
- (void)homeGestureOwnershipDidChange:(_Bool)arg1;
@end

