//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISwipeAnimationFactory : NSObject
{
}

+ (id)_animatorForDuration:(double)arg1 initialVelocity:(struct CGVector)arg2 shouldLayoutSubviews:(_Bool)arg3;
+ (id)_animatorForStiffnessFactor:(double)arg1 initialVelocity:(struct CGVector)arg2;
+ (id)animatorForGenericUpdates;
+ (id)animatorForScanlineCollapse;
+ (id)animatorForCollapseWithAdditivelyAnimatedViews:(id)arg1;
+ (id)animatorForCollapse;
+ (id)animatorForTentativeWithOccurrence:(id)arg1 additivelyAnimatedViews:(id)arg2;
+ (id)animatorForTentativeWithOccurrence:(id)arg1;
+ (id)animatorForMoveWithOccurrence:(id)arg1;

@end

