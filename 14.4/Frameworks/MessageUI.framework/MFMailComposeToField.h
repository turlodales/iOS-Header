//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFMailComposeRecipientTextView.h>

@class MFComposeSMIMELockButton;
@protocol MFMailComposeToFieldDelegate;

@interface MFMailComposeToField : MFMailComposeRecipientTextView
{
    MFComposeSMIMELockButton *_smimeButton;
    _Bool _wantsEncryption;
    _Bool _canEncrypt;
    _Bool _smimeButtonVisible;
    _Bool _smimeButtonEnabled;
    id <MFMailComposeToFieldDelegate> _toFieldDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool smimeButtonEnabled; // @synthesize smimeButtonEnabled=_smimeButtonEnabled;
@property(nonatomic) _Bool smimeButtonVisible; // @synthesize smimeButtonVisible=_smimeButtonVisible;
@property(nonatomic) __weak id <MFMailComposeToFieldDelegate> toFieldDelegate; // @synthesize toFieldDelegate=_toFieldDelegate;
- (id)_textContainerExclusionPathsWithAddButton:(_Bool)arg1;
- (void)_setSMIMEButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setWantsEncryption:(_Bool)arg1 canEncrypt:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setExpanded:(_Bool)arg1;
- (void)_tappedSMIMEButton:(id)arg1;
@property(readonly, nonatomic) MFComposeSMIMELockButton *SMIMEButton;
- (void)layoutSubviews;
- (void)dealloc;

@end

