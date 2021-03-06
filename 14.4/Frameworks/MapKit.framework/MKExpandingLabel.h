//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>
#import <MapKit/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, UITapGestureRecognizer, UITextView, _MKUILabel;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate>
{
    unsigned long long _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    _MKUILabel *_showMoreLabel;
    NSString *_showLessText;
    UIFont *_showLessFont;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    _Bool _isPerformingLayout;
    _Bool _allowLessText;
    UITextView *_textView;
    UIColor *_showMoreTextColor;
    UIColor *_showLessTextColor;
    unsigned long long _numberOfLinesWhenCollapsed;
    CDUnknownBlockType _labelResizedBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowLessText; // @synthesize allowLessText=_allowLessText;
@property(copy, nonatomic) CDUnknownBlockType labelResizedBlock; // @synthesize labelResizedBlock=_labelResizedBlock;
@property(nonatomic) unsigned long long numberOfLinesWhenCollapsed; // @synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)_showLessTextSeparator;
- (_Bool)_canShowAllText;
- (_Bool)_canShowLess;
- (_Bool)_isShowingUserExpanded;
- (_Bool)isShowingExpanded;
- (void)_setExpansionMode:(unsigned long long)arg1;
@property(nonatomic, getter=isExpanded) _Bool expanded;
- (void)_expand;
- (void)_setTextExclusionPath;
- (void)layoutSubviews;
@property(retain, nonatomic) UIFont *showLessFont;
@property(copy, nonatomic) NSString *showLessText;
@property(retain, nonatomic) UIColor *showLessTextColor; // @synthesize showLessTextColor=_showLessTextColor;
@property(retain, nonatomic) UIColor *showMoreTextColor; // @synthesize showMoreTextColor=_showMoreTextColor;
@property(retain, nonatomic) UIFont *showMoreFont;
@property(copy, nonatomic) NSString *showMoreText;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
- (void)infoCardThemeChanged;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_mkExpandingLabelComonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

