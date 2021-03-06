//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface SCNAssetCatalog : NSObject
{
    NSURL *_catalogURL;
    NSDictionary *_db;
    NSMutableDictionary *_cache;
}

+ (id)objectWithName:(id)arg1 class:(Class)arg2;
+ (void)clearCache;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)assetCatalogForResourceURL:(id)arg1;
+ (id)assetCatalogWithURL:(id)arg1;
+ (id)assetCatalogNamed:(id)arg1;
@property(readonly, nonatomic) NSURL *catalogURL; // @synthesize catalogURL=_catalogURL;
- (id)pathByMakingURLRelativeToCatalog:(id)arg1;
- (id)particleSystemNamed:(id)arg1;
- (id)actionNamed:(id)arg1;
- (id)animationNamed:(id)arg1;
- (id)sceneNamed:(id)arg1;
- (id)sceneWithURL:(id)arg1;
- (void)cacheObject:(id)arg1 withTimestamp:(double)arg2 forKey:(id)arg3;
- (id)URLOfResourceNamed:(id)arg1;
- (void)dealloc;

@end

