//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import <Preferences/KeychainSyncPhoneSettingsFragmentDelegate-Protocol.h>
#import <Preferences/KeychainSyncViewController-Protocol.h>
#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class KeychainSyncPhoneSettingsFragment, NSString, UILabel;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController>
{
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UILabel *_footerLabel;
}

- (void).cxx_destruct;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)nextPressed;
- (void)controllerDone;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

