//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSLinkQueryChopperDelegate-Protocol.h>
#import <BusinessChatService/BCSXPCDaemonProtocol-Protocol.h>

@class NSString;
@protocol BCSCacheClearing, BCSChatSuggestControllerProtocol, BCSConfigCacheSkipping, BCSConfigCaching, BCSConfigResolving, BCSEntitlementVerifying, BCSIconControllerProtocol, BCSIdentityServiceProtocol, BCSItemResolving, BCSMetricFactoryProtocol, BCSPrefetchTrigger, BCSQueryChopperProtocol, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSShardResolving, BCSURLPatternControllerProtocol, OS_dispatch_queue;

@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol>
{
    id <BCSIdentityServiceProtocol> _identityService;
    id <BCSIconControllerProtocol> _iconController;
    id <BCSCacheClearing> _cacheClearer;
    id <BCSChatSuggestControllerProtocol> _chatSuggestController;
    id <BCSItemResolving> _chatSuggestItemResolver;
    id <BCSConfigResolving> _chatSuggestConfigResolver;
    id <BCSShardResolving> _chatSuggestShardResolver;
    id <BCSItemResolving> _linkItemResolver;
    id <BCSConfigResolving> _linkConfigResolver;
    id <BCSShardResolving> _linkShardResolver;
    id <BCSPrefetchTrigger> _prefetchBloomFilterAndConfigTrigger;
    id <BCSPrefetchTrigger> _prefetchConfigTrigger;
    id <BCSEntitlementVerifying> _entitlementVerifier;
    id <BCSQueryChopperProtocol> _queryChopper;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id <BCSMetricFactoryProtocol> _metricFactory;
    id <BCSShardCacheQueryable> _shardCache;
    id <BCSConfigCaching> _configCache;
    id <BCSConfigCacheSkipping> _configCacheSkip;
    id <BCSShardCacheSkipping> _shardCacheSkip;
    id <BCSURLPatternControllerProtocol> _patternController;
}

- (void).cxx_destruct;
- (void)_deleteInMemoryCache;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prefetchConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)prefetchBloomFilterAndConfigsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_itemWithIdentifier:(id)arg1 forClientBundleID:(id)arg2 skipFilterCheck:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLinkItemModelWithHash:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(_Bool)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchLinkItemModelWithURL:(id)arg1 chopURL:(_Bool)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;
- (id)initWithPrefetchBloomFilterAndConfigTrigger:(id)arg1 prefetchConfigTrigger:(id)arg2 entitlementVerifier:(id)arg3 identityService:(id)arg4 chatSuggestController:(id)arg5 iconController:(id)arg6 cacheClearer:(id)arg7 shardCache:(id)arg8 configCache:(id)arg9 configCacheSkip:(id)arg10 shardCacheSkip:(id)arg11 chatSuggestConfigResolver:(id)arg12 linkConfigResolver:(id)arg13 chatSuggestShardResolver:(id)arg14 linkShardResolver:(id)arg15 chatSuggestItemResolver:(id)arg16 linkItemResolver:(id)arg17 queryChopper:(id)arg18 patternController:(id)arg19 metricFactory:(id)arg20;
- (id)initWithBloomFilterAndConfigPrefetcher:(id)arg1 configPrefetcher:(id)arg2 shardCache:(id)arg3 cacheManager:(id)arg4 chatSuggestRemoteFetcher:(id)arg5 businessLinkRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

