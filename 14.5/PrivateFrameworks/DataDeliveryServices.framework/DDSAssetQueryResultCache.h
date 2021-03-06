//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetQueryResultCaching-Protocol.h>
#import <DataDeliveryServices/DDSCacheDelegate-Protocol.h>

@class DDSCache, NSString;

@interface DDSAssetQueryResultCache : NSObject <DDSCacheDelegate, DDSAssetQueryResultCaching>
{
    DDSCache *_cache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DDSCache *cache; // @synthesize cache=_cache;
- (void)cache:(id)arg1 willEvictObjects:(id)arg2;
- (void)clearCache;
- (void)cacheAssets:(id)arg1 forQuery:(id)arg2;
- (id)cachedAssetsForQuery:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

