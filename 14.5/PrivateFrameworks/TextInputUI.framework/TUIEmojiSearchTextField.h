//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextField.h>

#import <TextInputUI/UITextFieldDelegate-Protocol.h>

@class NSDate, NSString, TUIEmojiSearchTextFieldBackgroundView, TUIEmojiSearchTextFieldPortalView, UIImageView;
@protocol TUIEmojiSearchTextFieldDelegate;

@interface TUIEmojiSearchTextField : UITextField <UITextFieldDelegate>
{
    NSDate *_highlightBeginTime;
    UIImageView *_magnifyingGlassView;
    TUIEmojiSearchTextFieldPortalView *_portalView;
    TUIEmojiSearchTextFieldBackgroundView *_backgroundView;
    _Bool _active;
    _Bool _pretendsToBecomeFirstResponder;
    id <TUIEmojiSearchTextFieldDelegate> _searchDelegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool pretendsToBecomeFirstResponder; // @synthesize pretendsToBecomeFirstResponder=_pretendsToBecomeFirstResponder;
@property(nonatomic) __weak id <TUIEmojiSearchTextFieldDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)fieldEditorDidChange:(id)arg1;
- (id)selectionContainerView;
- (struct CGRect)visibleRect;
- (_Bool)_isInteractiveDespiteResponderStatus;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_windowBecameKeyNotificationPosted:(id)arg1;
- (_Bool)isEditing;
@property(nonatomic, getter=isActive) _Bool active;
- (void)setHighlighted:(_Bool)arg1;
- (void)_matchPortalViewFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)insertionPointColor;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)portalView;
- (void)didMoveToWindow;
- (id)_clearButton;
- (void)_setRenderConfig:(id)arg1;
- (id)_textAndGlyphCompositingFilterForRenderConfig:(id)arg1;
- (id)_textAndGlyphColorForRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pretendsToBecomeFirstResponder:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

