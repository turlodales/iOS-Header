//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUICardKitProviderSupport/CRKFeedbackDelegateProxying-Protocol.h>
#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate-Protocol.h>

@class NSString;
@protocol CRKFeedbackDelegate;

@interface SUICKPFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying>
{
    id <CRKFeedbackDelegate> _feedbackDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CRKFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
- (void)presentViewControllerForCard:(id)arg1 animate:(_Bool)arg2;
- (void)willDismissViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (_Bool)shouldHandleCardSectionEngagement:(id)arg1;
- (id)feedbackListener;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

