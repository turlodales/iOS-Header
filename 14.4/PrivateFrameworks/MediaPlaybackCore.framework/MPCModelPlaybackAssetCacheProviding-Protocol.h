//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPModelFileAsset, MPModelGenericObject, NSString;

@protocol MPCModelPlaybackAssetCacheProviding <NSObject>
- (void)setPlaybackAssetCacheFileAsset:(MPModelFileAsset *)arg1 forGenericObject:(MPModelGenericObject *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)getPlaybackAssetCacheDestinationURL:(id *)arg1 purchaseBundleDestinationURL:(id *)arg2 forGenericObject:(MPModelGenericObject *)arg3 assetQualityType:(long long)arg4 pathExtension:(NSString *)arg5;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(MPModelGenericObject *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
@end

