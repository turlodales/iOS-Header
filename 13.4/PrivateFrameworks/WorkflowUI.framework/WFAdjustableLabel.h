//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@protocol WFAdjustableLabelDelegate;

@interface WFAdjustableLabel : UILabel
{
    id <WFAdjustableLabelDelegate> _adjustableDelegate;
}

@property(nonatomic) id <WFAdjustableLabelDelegate> adjustableDelegate; // @synthesize adjustableDelegate=_adjustableDelegate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;

@end

