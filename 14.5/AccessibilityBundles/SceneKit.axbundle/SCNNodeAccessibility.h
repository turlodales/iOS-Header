//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SCNNodeAccessibility_super.h"

@interface SCNNodeAccessibility : __SCNNodeAccessibility_super
{
}

+ (_Bool)_isSerializableAccessibilityElement;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityConvertSCNVector3Points:(id)arg1 toNode:(id)arg2;
- (id)_accessibilitySCNVector3BoundingBoxPoints;
- (id)accessibilityIdentifier;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (id)accessibilityPath;
- (struct CGRect)_accessibilityConvertRect:(struct CGRect)arg1 toNode:(id)arg2;
- (id)accessibilityContainer;
- (id)accessibilityElements;
- (void)dealloc;

@end

