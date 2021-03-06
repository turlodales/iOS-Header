//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleConnectClient/ACMobileAuthenticationContext.h>

@class NSData, NSString;

@interface ACMobileRetailAuthenticationContext : ACMobileAuthenticationContext
{
    NSData *_applicationData;
    NSString *_failoverRetrieveSaltAPIAddress;
    NSString *_failoverAuthenticateAPIAddress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *failoverAuthenticateAPIAddress; // @synthesize failoverAuthenticateAPIAddress=_failoverAuthenticateAPIAddress;
@property(retain, nonatomic) NSString *failoverRetrieveSaltAPIAddress; // @synthesize failoverRetrieveSaltAPIAddress=_failoverRetrieveSaltAPIAddress;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
- (void)checkExtensibleSSOEligibilityWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareMessage:(id)arg1;
- (void)signOutWithEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signOutWithCompletion:(CDUnknownBlockType)arg1;

@end

