//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSLayoutConstraint, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface VehiclePickerButton : UIButton
{
    _Bool _active;
    _Bool _needsOutlineStroke;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    UIView *_highlightView;
    UIImageView *_colorView;
    struct UIEdgeInsets _colorViewInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needsOutlineStroke; // @synthesize needsOutlineStroke=_needsOutlineStroke;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) struct UIEdgeInsets colorViewInsets; // @synthesize colorViewInsets=_colorViewInsets;
@property(retain, nonatomic) UIImageView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(readonly, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

