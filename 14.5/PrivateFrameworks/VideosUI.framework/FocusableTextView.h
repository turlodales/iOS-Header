//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/VUILabelBaselineProtocol-Protocol.h>
#import <VideosUI/_UIFloatingContentViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, VUILabel, VUITextLayout, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface FocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, VUILabelBaselineProtocol>
{
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
    _Bool _textTruncating;
    _Bool _moreLabelOnNewLine;
    _Bool _trackHorizontal;
    _Bool _alwaysShowBackground;
    _Bool _alwaysFocusable;
    _Bool _disableFocus;
    _Bool _needsTextSizeComputation;
    VUILabel *_computationLabel;
    UIColor *_descriptionTextColor;
    UIColor *_descriptionTextHighlightColor;
    long long _descriptionTextAlignment;
    UIColor *_highlightBackgroundColor;
    double _moreHighlightPadding;
    UIColor *_moreLabelTextColor;
    double _focusSizeIncrease;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _playHandler;
    UITextView *_descriptionTextView;
    _UIFloatingContentView *_floatingView;
    UIVisualEffectView *_backgroundView;
    UITapGestureRecognizer *_selectRecognizer;
    UITapGestureRecognizer *_playRecognizer;
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;
    VUITextLayout *_textLayout;
    UILabel *_moreLabel;
    struct UIEdgeInsets _padding;
}

+ (double)cornerRadius;
+ (id)textViewWithAttributedString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) _Bool disableFocus; // @synthesize disableFocus=_disableFocus;
@property(nonatomic, getter=isAlwaysFocusable) _Bool alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property(nonatomic) double focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) _Bool alwaysShowBackground; // @synthesize alwaysShowBackground=_alwaysShowBackground;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(retain, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(nonatomic) long long descriptionTextAlignment; // @synthesize descriptionTextAlignment=_descriptionTextAlignment;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateTextColor;
- (void)tintColorDidChange;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)boundingRectForAttributedString:(id)arg1 withWidth:(double)arg2 lines:(unsigned long long)arg3;
- (struct CGRect)_moreLabelFrame;
- (struct CGRect)_moreLabelExclusionPathFrame;
- (void)_recomputeTextSizeIfNeeded;
- (void)_setNeedsTextSizeComputation;
- (void)traitCollectionDidChange:(id)arg1;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)baselineOffsetFromBottom;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)layoutSubviews;
- (void)_updateTextColorsForFocusState:(_Bool)arg1;
- (void)_updateTextColorsIfNeeded;
- (void)_updateBackgroundColors;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

