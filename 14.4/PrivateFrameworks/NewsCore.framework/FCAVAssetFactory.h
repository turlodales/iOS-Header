//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAVAssetFactoryType-Protocol.h>

@class NFUnfairLock, NSMapTable, NSString;
@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType, FCAVAssetKeyManagerType, FCAVAssetResourceLoaderType;

@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType>
{
    id <FCAVAssetCacheType> _assetCache;
    id <FCAVAssetKeyCacheType> _assetKeyCache;
    id <FCAVAssetKeyManagerType> _assetKeyManager;
    id <FCAVAssetResourceLoaderType> _assetResourceLoader;
    NSMapTable *_assets;
    NFUnfairLock *_assetsLock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NFUnfairLock *assetsLock; // @synthesize assetsLock=_assetsLock;
@property(readonly, nonatomic) NSMapTable *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) id <FCAVAssetResourceLoaderType> assetResourceLoader; // @synthesize assetResourceLoader=_assetResourceLoader;
@property(readonly, nonatomic) id <FCAVAssetKeyManagerType> assetKeyManager; // @synthesize assetKeyManager=_assetKeyManager;
@property(readonly, nonatomic) id <FCAVAssetKeyCacheType> assetKeyCache; // @synthesize assetKeyCache=_assetKeyCache;
@property(readonly, nonatomic) id <FCAVAssetCacheType> assetCache; // @synthesize assetCache=_assetCache;
- (id)assetWithIdentifier:(id)arg1 remoteURL:(id)arg2 overrideMIMEType:(id)arg3;
- (id)initWithAssetCache:(id)arg1 assetKeyCache:(id)arg2 assetKeyManager:(id)arg3 assetResourceLoader:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

