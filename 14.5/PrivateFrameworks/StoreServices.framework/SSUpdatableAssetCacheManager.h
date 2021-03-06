//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject
{
    NSString *_clientIdentifier;
}

- (void).cxx_destruct;
- (id)validatePath:(id)arg1;
- (_Bool)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id *)arg2;
- (id)manifestFileURL:(id)arg1;
- (id)manifestFileName:(id)arg1;
- (id)manifestsDirectoryURL;
- (id)loadCurrentCachedManifest;
- (id)currentManifestFileURL;
- (id)cacheRoot;
- (id)assetFileURL:(id)arg1;
- (id)assetFileName:(id)arg1;
- (id)assetsDirectoryURL;
- (id)allCachedManifests;
- (id)initWithClientIdentifier:(id)arg1;

@end

