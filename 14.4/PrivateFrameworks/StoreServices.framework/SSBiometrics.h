//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSBiometrics : NSObject
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    SSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)isIdentityMapValidForAccountIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getIdentityMapCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)tokenUpdateStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)tokenUpdateShouldStartWithLogKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tokenUpdateDidFinishWithLogKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAllowed:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEnabled:(_Bool)arg1 withAuthToken:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setEnabled:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)resetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetAccount:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getCurrentACLVersionWithCompletion:(CDUnknownBlockType)arg1;
- (void)getConstraintsDictionaryForPurpose:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getCachedBiometricAuthenticationContextWithToken:(id)arg1 evict:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getAllCachedBiometricHTTPHeadersWithToken:(id)arg1 accountID:(id)arg2 evict:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

