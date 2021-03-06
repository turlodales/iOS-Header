//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIColor, UIView;

@interface FRShowMoreButtonFooterView : UICollectionReusableView
{
    UIButton *_showMoreButton;
    UIView *_separatorView;
}

+ (id)_seeAllPressed;
+ (id)_seeAllImage;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateButtonFontForPreferredContentSizeCategory:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *separatorColor;
- (id)_createShowMoreButton;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

