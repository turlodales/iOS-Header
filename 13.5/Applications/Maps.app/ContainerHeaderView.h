//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

@class CardCloseButton, HairlineView, NSLayoutConstraint, NSString, UIFont, UILabel, UILayoutGuide, UIView;
@protocol HeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface ContainerHeaderView : MapsThemeView
{
    _Bool _respectSafeArea;
    HairlineView *_hairLineView;
    double _hairlineMargin;
    UILabel *_defaultTitleLabel;
    CardCloseButton *_closeButtonView;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_buttonTrailingConstraint;
    NSLayoutConstraint *_layoutGuideLeadingConstraint;
    NSLayoutConstraint *_layoutGuideTrailingConstraint;
    NSLayoutConstraint *_layoutGuideTopConstraint;
    NSLayoutConstraint *_layoutGuideBottomConstraint;
    NSLayoutConstraint *_defaultTitleLabelCenterYConstraint;
    NSLayoutConstraint *_buttonAlignToTopConstraint;
    NSLayoutConstraint *_buttonCenterVerticallyConstraint;
    NSLayoutConstraint *_vibrantViewHeightConstraint;
    NSLayoutConstraint *_vibrantViewWidthConstraint;
    id <HeaderViewDelegate> _delegate;
    unsigned long long _headerSize;
    unsigned long long _buttonAction;
    UIView *_titleView;
    double _verticalAlignmentOffset;
    NSLayoutConstraint *_heightConstraint;
    UILayoutGuide *_titleViewLayoutGuide;
    double _buttonSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double buttonSize; // @synthesize buttonSize=_buttonSize;
@property(retain, nonatomic) UILayoutGuide *titleViewLayoutGuide; // @synthesize titleViewLayoutGuide=_titleViewLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) double verticalAlignmentOffset; // @synthesize verticalAlignmentOffset=_verticalAlignmentOffset;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) unsigned long long buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) unsigned long long headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) __weak id <HeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateForHeaderSize;
- (void)_createLayoutGuideIfNeeded;
- (id)_defaultTitleViewConstraints;
- (void)_attachDefaultTitleView;
- (void)updateBaseMargins;
- (void)layoutMarginsDidChange;
- (id)_initialConstraints;
- (void)_customInit;
- (void)_setMask:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)tapAction:(id)arg1;
@property(readonly, nonatomic) UIFont *titleFont;
@property(nonatomic) struct UIEdgeInsets titleViewInsets;
@property(copy, nonatomic) NSString *title;
@property(nonatomic, getter=isButtonHidden) _Bool buttonHidden;
@property(nonatomic) _Bool shouldCenterButtonVertically;
@property(nonatomic) double hairLineAlpha;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithRespectSafeArea:(_Bool)arg1;
- (id)initWithMargin:(double)arg1;
- (void)updateTheme;

@end

