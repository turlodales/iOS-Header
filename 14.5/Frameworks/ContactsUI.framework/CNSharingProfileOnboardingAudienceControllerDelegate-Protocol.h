//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact;
@protocol CNSharingProfileOnboardingAudienceController;

@protocol CNSharingProfileOnboardingAudienceControllerDelegate <NSObject>
- (void)audienceController:(id <CNSharingProfileOnboardingAudienceController>)arg1 didFinishWithContact:(CNContact *)arg2 sharingAudience:(unsigned long long)arg3;

@optional
- (void)audienceControllerDidTapSetupLater:(id <CNSharingProfileOnboardingAudienceController>)arg1;
@end

