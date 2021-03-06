//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MapsTheming-Protocol.h"

@class CardCustomBorderView, MKViewWithHairline, NSLayoutConstraint, NSString, UIHoverGestureRecognizer, UIVisualEffectView, _UIGrabber;

__attribute__((visibility("hidden")))
@interface CardView : UIView <MapsTheming>
{
    CardCustomBorderView *_customBorderView;
    unsigned long long _style;
    _UIGrabber *_grabber;
    _UIGrabber *_grabberFooter;
    UIView *_shadowView;
    UIView *_contentView;
    UIVisualEffectView *_blurView;
    _Bool _canAddSubviews;
    _Bool _grabberHasPreviousState;
    _Bool _grabberPreviousState;
    _Bool _buttonCard;
    MKViewWithHairline *_grabberFooterView;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIHoverGestureRecognizer *_hoverRecognizer;
    _Bool _hideGrabber;
    _Bool _showFooterGrabber;
    NSString *_blurGroupName;
    double _height;
    double _overriddenIntrinsicHeight;
    double _grabberHeight;
    double _grabberTopMargin;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(readonly, nonatomic) double grabberTopMargin; // @synthesize grabberTopMargin=_grabberTopMargin;
@property(readonly, nonatomic) double grabberHeight; // @synthesize grabberHeight=_grabberHeight;
@property(nonatomic) double overriddenIntrinsicHeight; // @synthesize overriddenIntrinsicHeight=_overriddenIntrinsicHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool showFooterGrabber; // @synthesize showFooterGrabber=_showFooterGrabber;
@property(nonatomic) _Bool hideGrabber; // @synthesize hideGrabber=_hideGrabber;
@property(copy, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
- (void)hoverGestureRecognizerChanged:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_showGrabberFooter:(_Bool)arg1;
- (void)showShadow:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDimmingAlpha:(double)arg1;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (void)_setCornerRadiusWithMaskedCorners:(unsigned long long)arg1 cornerRadius:(double)arg2;
- (void)updateTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setCaptureView:(id)arg1;
- (void)layoutSubviews;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didAddSubview:(id)arg1;
- (void)_commonInitWithBlurType:(long long)arg1;
- (id)initWithThickBlur;
- (id)initAllowingBlurredForButton:(_Bool)arg1;
- (id)initAllowingBlurred:(_Bool)arg1;
@property(readonly, nonatomic) UIView *contentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

