//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKPeerPaymentSetupFlowControllerDelegate-Protocol.h>

@class NSObject, NSString, PKAppleCashSharingRecipientCapabilities, PKFamilyMember, PKPeerPaymentAccount, PKPeerPaymentIconEducationView, PKPeerPaymentSetupFlowController;
@protocol OS_dispatch_source, PKPeerPaymentAssociatedAccountSetupDelegate;

@interface PKPeerPaymentAssociatedAccountActivationViewController : PKExplanationViewController <PKPeerPaymentSetupFlowControllerDelegate>
{
    PKPeerPaymentSetupFlowController *_controller;
    PKFamilyMember *_familyMember;
    id <PKPeerPaymentAssociatedAccountSetupDelegate> _delegate;
    unsigned long long _state;
    PKPeerPaymentIconEducationView *_iconEducationView;
    PKPeerPaymentAccount *_account;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _timerHasFired;
    PKAppleCashSharingRecipientCapabilities *_childAppleCashCapabilities;
}

- (void).cxx_destruct;
- (void)_showSpinner:(_Bool)arg1;
- (void)_terminateAddAssociatedAccountFlowWithSucces:(_Bool)arg1 updatedAccount:(id)arg2;
- (void)_presentDisplayableError:(id)arg1;
- (void)_sendMoneyInMessages;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (void)familyMemberAppleCashCapabilitiesUpdated:(id)arg1 forHandle:(id)arg2;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (unsigned long long)_nextStateAfterCheckingFamilyMemberAppleCashCapabilities:(_Bool *)arg1;
- (void)_checkFamilyMemberAppleCashCapabilities;
- (void)_startTimerIfNeccessary;
- (void)_cancelTimer;
- (_Bool)_isAssociatedAccountPending;
- (void)_setState:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPeerPaymentSetupFlowController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

