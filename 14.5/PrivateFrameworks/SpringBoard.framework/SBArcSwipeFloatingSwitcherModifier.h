//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
    long long _floatingConfiguration;
    unsigned long long _direction;
    _Bool _hasReshuffledZOrder;
}

- (void).cxx_destruct;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)visibleAppLayouts;
- (id)topMostLayoutElements;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionWillUpdate;
- (id)transitionWillBegin;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 floatingConfiguration:(long long)arg4 direction:(unsigned long long)arg5 needsOvershoot:(_Bool)arg6;

@end

