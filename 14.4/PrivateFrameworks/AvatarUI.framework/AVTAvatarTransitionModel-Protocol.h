//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTTransitionModel-Protocol.h>

@class AVTView;

@protocol AVTAvatarTransitionModel <AVTTransitionModel>
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (AVTView *)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
@end

