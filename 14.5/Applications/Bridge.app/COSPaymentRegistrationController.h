//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKPaymentSetupViewControllerDelegate-Protocol.h"
#import "PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate-Protocol.h"

@class NSString;
@protocol PKPaymentSetupViewControllerDelegate, PKSetupAssistantStep;

@interface COSPaymentRegistrationController : NSObject <PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate, PKPaymentSetupViewControllerDelegate>
{
    id <PKSetupAssistantStep> _registrationController;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <PKSetupAssistantStep> registrationController; // @synthesize registrationController=_registrationController;
- (id)_passLibraryDataProvider;
- (void)peerPaymentAddAssociatedAccountViewControllerDidSkipSetup:(id)arg1;
- (void)peerPaymentAddAssociatedAccountViewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 updatedPeerPaymentAccount:(id)arg3;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(_Bool)arg3 error:(id)arg4;
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)prewarmPaymentInfrastructure;
- (void)endRegistrationTransaction;
- (void)startRegistrationTransactionIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

