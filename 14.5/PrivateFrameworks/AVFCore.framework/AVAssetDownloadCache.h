//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetCache.h>

@class AVAssetDownloadCacheInternal;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadCache : AVAssetCache
{
    AVAssetDownloadCacheInternal *_internal;
}

- (void)dealloc;
- (_Bool)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (id)URL;
- (id)_asset;
- (id)initWithAsset:(id)arg1;

@end

