//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <MapKit/_MKPlaceActionControlledButton-Protocol.h>

@class CAGradientLayer, CALayer, NSAttributedString, NSString, _MKPlaceActionButtonController;

@interface MKCatalystButton : UIButton <_MKPlaceActionControlledButton>
{
    _Bool _isPrimaryButton;
    _MKPlaceActionButtonController *_buttonController;
    CALayer *_extraShadowLayer;
    CAGradientLayer *_gradientLayer;
    NSAttributedString *_title;
    NSAttributedString *_subTitle;
}

+ (struct CGColor *)extraShadowLayerBackgroundColorWithDarkMode:(_Bool)arg1 isbuttonEnabled:(_Bool)arg2;
+ (id)titleFont;
+ (id)catalystButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CALayer *extraShadowLayer; // @synthesize extraShadowLayer=_extraShadowLayer;
@property(nonatomic) _Bool isPrimaryButton; // @synthesize isPrimaryButton=_isPrimaryButton;
@property(nonatomic) __weak _MKPlaceActionButtonController *buttonController; // @synthesize buttonController=_buttonController;
- (void)_updateColors;
- (id)_attributedStringForSubTitle:(id)arg1 controlState:(unsigned long long)arg2;
- (id)_attributedStringForTitle:(id)arg1 controlState:(unsigned long long)arg2;
- (id)_attributedStringWithTitle:(id)arg1 subtitle:(id)arg2 controlState:(unsigned long long)arg3;
- (void)placeActionButtonControllerTextDidChange:(id)arg1;
- (void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2;
- (void)setPrimaryTitle:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)applyBorder:(_Bool)arg1;
- (void)buttonSelected:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

