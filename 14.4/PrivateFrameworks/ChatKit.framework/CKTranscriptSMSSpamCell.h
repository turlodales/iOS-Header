//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell
{
    NSAttributedString *_attributedButtonText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedButtonText; // @synthesize attributedButtonText=_attributedButtonText;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;

@end

