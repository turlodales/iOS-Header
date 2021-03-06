//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface PLAccountStore : ACAccountStore
{
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

+ (id)pl_sharedAccountStore;
- (void).cxx_destruct;
- (void)clearCachedProperties;
@property(readonly) __weak ACAccount *cachedPrimaryAppleAccount;
- (void)accountDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

