//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (void).cxx_destruct;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end

