//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSString, UIAccessibilityElement, UIBezierPath;

@protocol UIAccessibilityElementDelegate <NSObject>

@optional
- (float)_accessibilityActivationDelay:(UIAccessibilityElement *)arg1;
- (void)accessibilityDecrement:(UIAccessibilityElement *)arg1;
- (void)accessibilityIncrement:(UIAccessibilityElement *)arg1;
- (struct CGPoint)accessibilityActivationPoint:(UIAccessibilityElement *)arg1;
- (NSString *)accessibilityLanguage:(UIAccessibilityElement *)arg1;
- (NSString *)accessibilityValue:(UIAccessibilityElement *)arg1;
- (UIBezierPath *)accessibilityPath:(UIAccessibilityElement *)arg1;
- (struct CGRect)accessibilityFrame:(UIAccessibilityElement *)arg1;
- (unsigned long long)accessibilityTraits:(UIAccessibilityElement *)arg1;
- (NSString *)accessibilityHint:(UIAccessibilityElement *)arg1;
- (_Bool)isAccessibilityElement:(UIAccessibilityElement *)arg1;
- (NSString *)accessibilityLabel:(UIAccessibilityElement *)arg1;
@end

