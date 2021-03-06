//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AASigningSession, ACAccount, NSDate, NSOperationQueue, NSString;

@interface AASetupAssistantService : NSObject
{
    NSOperationQueue *_requesterQueue;
    NSString *_appleID;
    NSString *_password;
    NSString *_emailChoice;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

+ (void)resetURLConfiguration;
+ (id)urlConfiguration;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *emailChoice; // @synthesize emailChoice=_emailChoice;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)_doHSADeviceReprovisioningWithDSID:(id)arg1;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)arg1 data:(id)arg2;
- (void)_doHSADeviceProvisioningWithDSID:(id)arg1 data:(id)arg2;
- (id)_signingSession;
- (void)shouldPresentUpgradeFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)loginDelegatesWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupDelegateAccountsWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handlerWithResponse:(CDUnknownBlockType)arg2;
- (void)createAppleIDWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
- (void)downloadURLConfiguration:(CDUnknownBlockType)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (id)init;

@end

