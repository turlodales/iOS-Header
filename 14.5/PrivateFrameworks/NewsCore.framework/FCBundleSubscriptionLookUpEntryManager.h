//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore, NFUnfairLock;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject
{
    FCBundleSubscriptionLookUpEntry *__bundleSubscriptionLookUpEntry;
    FCKeyValueStore *_localStore;
    NFUnfairLock *_lock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry; // @synthesize _bundleSubscriptionLookUpEntry=__bundleSubscriptionLookUpEntry;
- (void)setBundleSubscriptionLookUpEntry:(id)arg1;
@property(readonly, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
- (void)cleanupStaleExpiredEntry;
- (void)updateEntry:(id)arg1;
- (void)addBundleChannelIDs:(id)arg1 bundleChannelIDsVersion:(id)arg2 purchaseID:(id)arg3 inTrialPeriod:(_Bool)arg4 isPurchaser:(_Bool)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(_Bool)arg7;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;

@end

