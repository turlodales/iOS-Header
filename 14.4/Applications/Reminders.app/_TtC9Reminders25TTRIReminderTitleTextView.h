//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s15RemindersUICore21TTRIExpandingTextViewCN.h"

@class MISSING_TYPE, NSAttributedString;
@protocol UITextInputDelegate;

@interface _TtC9Reminders25TTRIReminderTitleTextView : _$s15RemindersUICore21TTRIExpandingTextViewCN
{
    MISSING_TYPE *suggestions;
    MISSING_TYPE *cachedFont;
    MISSING_TYPE *firstCharNeedsCapitalization;
}

- (void).cxx_destruct;
- (void)paste:(id)arg1;
- (void)insertTextSuggestion:(id)arg1;
@property(nonatomic, retain) id <UITextInputDelegate> inputDelegate;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, retain) NSAttributedString *attributedText;

@end

