//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AKAppleIDAuthenticationDelegate-Protocol.h>

@class ACAccount, AMSAuthenticateOptions, NSString;
@protocol AMSAuthKitUpdateTaskDelegate;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate>
{
    ACAccount *_account;
    AMSAuthenticateOptions *_options;
    id <AMSAuthKitUpdateTaskDelegate> _delegate;
}

+ (void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AMSAuthKitUpdateTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AMSAuthenticateOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_logPromptSummaryForResults:(id)arg1 context:(id)arg2;
- (id)_createAuthKitController;
- (id)_createAuthKitContext;
- (void)_configureStringsForContext:(id)arg1;
- (void)_configureProxyIdentifiersForContext:(id)arg1;
- (void)_configureIdentifiersForContext:(id)arg1;
- (void)_configureCompanionDeviceForContext:(id)arg1;
- (void)_configureClientInfoForContext:(id)arg1;
- (void)_configureAuthKitContext:(id)arg1;
- (unsigned long long)_authenticationType;
- (_Bool)_canPresentBackgroundPrompt;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)performAuthKitUpdate;
- (id)initWithAccount:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

