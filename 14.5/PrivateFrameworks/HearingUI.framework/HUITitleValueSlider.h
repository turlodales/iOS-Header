//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUIStepSlider, UILabel, UIVisualEffectView;

@interface HUITitleValueSlider : UIView
{
    HUIStepSlider *_slider;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIVisualEffectView *_effectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HUIStepSlider *slider; // @synthesize slider=_slider;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)isAccessibilityElement;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)initWithEffect:(id)arg1;

@end

