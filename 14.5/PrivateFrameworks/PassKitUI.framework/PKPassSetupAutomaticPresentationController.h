//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKPaymentVerificationControllerDelegate-Protocol.h>

@class NSString, PKPass, PKPassView, PKPaymentProvisioningController, PKPaymentVerificationController, PKPaymentWebService, PKTableHeaderView, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPassSetupAutomaticPresentationController : PKPaymentSetupTableViewController <PKPaymentVerificationControllerDelegate>
{
    PKPaymentWebService *_webService;
    unsigned long long _selectedIndex;
    PKTableHeaderView *_headerView;
    PKPassView *_passView;
    UIImage *_passSnapshot;
    PKPaymentVerificationController *_verificationController;
    PKPaymentProvisioningController *_provisioningController;
    PKPass *_pass;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

+ (_Bool)passNeedsAutomaticPresentationSetup:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)logAggDContextSpecificCheckpointForKey:(id)arg1;
- (id)_contextSpecificStringForAggDKey:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_presentMakeDefaultViewControllerForPass:(id)arg1;
- (_Bool)_shouldShowMakeDefaultViewControllerForPass:(id)arg1;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_showVerificationForPass:(id)arg1;
- (long long)_paymentPassState;
- (id)_buttonTitleForPaymentPassState:(long long)arg1;
- (void)_terminateSetupFlow;
- (void)_presentNextCredentialWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissView;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_saveSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4;
- (id)initWithPass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

