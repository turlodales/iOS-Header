//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__DKInkViewAccessibility_super.h"

@interface DKInkViewAccessibility : __DKInkViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_axInvalidateTimerAndReschedule:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (void)_axSetDirectTouchTimer:(id)arg1;
- (id)_axDirectTouchTimer;
- (void)_axSetIsDirectTouchable:(_Bool)arg1;
- (_Bool)_axIsDirectTouchable;

@end

