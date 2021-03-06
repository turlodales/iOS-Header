//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <TSReading/UITextViewDelegate-Protocol.h>

@class NSString, TSKPlaceholderTextView, UIView;
@protocol UITextViewDelegate;

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate>
{
    TSKPlaceholderTextView *mTextView;
    UIView *mInputView;
    _Bool mNumberHasDecimal;
    id <UITextViewDelegate> mSavedDelegate;
}

- (void)toggleNegative;
- (void)deleteBackward;
- (void)insertDecimalSeparator;
- (void)insertNumber:(long long)arg1;
- (_Bool)isNegative;
- (void)parseText;
- (void)p_insertString:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)setTextDelegate:(id)arg1;
- (void)setTextTag:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setInputView:(id)arg1;
@property(retain, nonatomic) NSString *string;
- (void)p_parseText:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

