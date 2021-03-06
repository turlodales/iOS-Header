//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

#import <Preferences/UITextContentViewDelegate-Protocol.h>

@class NSString, PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate>
{
    PSTextView *_textView;
}

- (void).cxx_destruct;
- (void)drawTitleInRect:(struct CGRect)arg1 selected:(_Bool)arg2;
@property(retain, nonatomic) PSTextView *textView;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)textContentViewDidEndEditing:(id)arg1;
- (void)_adjustTextView:(id)arg1 updateTable:(_Bool)arg2 withSpecifier:(id)arg3;
- (void)layoutSubviews;
- (void)cellRemovedFromView;
- (void)textContentViewDidChange:(id)arg1;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

