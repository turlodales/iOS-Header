//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UICalloutBarAccessibility_super.h>

@interface UICalloutBarAccessibility : __UICalloutBarAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)updateAvailableButtons;
- (void)buttonPressed:(id)arg1;
- (_Bool)_updateVisibleItemsAnimated:(_Bool)arg1;
- (void)hide;
- (void)fade;
- (void)show;
- (void)appear;
- (void)_axCalloutBarDidAppearWithAnimation:(_Bool)arg1;
- (void)_axMoveToLastAccessibleSubviewAfterAnimation:(_Bool)arg1;
- (void)_axMoveToElement:(id)arg1;
- (_Bool)shouldGroupAccessibilityChildren;

@end

