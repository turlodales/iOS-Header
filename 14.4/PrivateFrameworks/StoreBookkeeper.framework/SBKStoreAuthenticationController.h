//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject
{
    _Bool _shouldAuthenticate;
    SSAccount *_storeAccount;
}

+ (id)lastFailedSyncAccountName;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastSyncedAccountName;
+ (id)lastSyncedAccountIdentifier;
+ (void)clearLastSyncnedAccount;
- (void).cxx_destruct;
@property _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly) SSAccount *storeAccount; // @synthesize storeAccount=_storeAccount;
- (void)saveAccountToLastFailedSyncDefaults;
- (void)saveAccountToLastSyncedDefaults;
- (id)authenticationErrorsForTransaction:(id)arg1;
- (_Bool)shouldForceAuthenticationForTransaction:(id)arg1;
- (_Bool)isAuthenticationValidForTransaction:(id)arg1 error:(id *)arg2;
- (id)initWithStoreAccount:(id)arg1;

@end

