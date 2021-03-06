//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityIsInCollectionCell;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (_Bool)_axContentViewHasSingleFocusableSubview;
- (_Bool)canBecomeFocused;
- (_Bool)_isEligibleForFocusInteraction;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (_Bool)_accessibilityIsOutsideParentBounds;
- (_Bool)accessibilityScrollToVisible;
- (_Bool)_accessibilityImplementsDefaultRowRange;
- (struct _NSRange)accessibilityRowRange;
- (id)_accessibilityIndexPath;
- (id)axData;
- (void)accessibilityClearInternalData;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)_accessibilityClearInternalCaches;
- (id)_axCustomActionsForActions:(id)arg1;
- (id)_privateAccessibilityCustomActions;
- (_Bool)_accessibilityRespondsToUserInteractionForElement:(id)arg1;
- (id)_accessibilityCachedChildren;
- (id)_accessibilityChildren;
- (id)_accessibilityUserTestingChildren;
- (_Bool)shouldGroupAccessibilityChildren;
- (void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityParentScrollView;
- (id)_accessibilityParentCollectionView;
- (unsigned long long)_accessibilityAutomationType;

@end

