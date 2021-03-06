//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRStarkConfirmationSnippetController.h"

@class NSTimer, SRStarkConfirmationSnippetView, SRStarkEmergencyCallConfirmationSnippetView;

@interface SRStarkEmergencyCallConfirmationSnippetController : SRStarkConfirmationSnippetController
{
    long long _seconds;
    NSTimer *_countdownTimer;
    SRStarkConfirmationSnippetView *_snippetView;
}

- (void).cxx_destruct;
- (void)setSnippetView:(id)arg1;
- (void)_updateCountdown:(id)arg1;
- (unsigned long long)autoDismissalReason;
- (long long)autoDismissalStrategy;
@property(readonly) SRStarkEmergencyCallConfirmationSnippetView *emergencySnippetView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)snippetView;
- (id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2;

@end

