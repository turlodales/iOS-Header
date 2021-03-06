//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AVTAsset : NSObject
{
    NSString *_uid;
    NSString *_resourcePath;
    long long _componentType;
    unsigned char _resourceType;
    NSDictionary *_morphVariantDependencies;
    NSDictionary *_imageVariantDependencies;
    NSDictionary *_materialVariantDependencies;
    NSString *_ambientOcclusion;
    NSDictionary *_highlights;
    unsigned long long _refCount;
    id _cachedResource;
    _Bool _forceHighTessellation;
    NSDictionary *_specializationSettings;
    NSDictionary *_layers;
    NSDictionary *_perAssetMain;
    CDStruct_10883d13 _uvRemappingInfo;
}

- (void).cxx_destruct;
@property(readonly) NSString *ambientOcclusion; // @synthesize ambientOcclusion=_ambientOcclusion;
@property(readonly) CDStruct_10883d13 uvRemappingInfo; // @synthesize uvRemappingInfo=_uvRemappingInfo;
@property(readonly) NSDictionary *layers; // @synthesize layers=_layers;
@property(readonly) NSDictionary *specializationSettings; // @synthesize specializationSettings=_specializationSettings;
@property(readonly) NSString *uid; // @synthesize uid=_uid;
@property(readonly) long long componentType; // @synthesize componentType=_componentType;
- (id)assetImageForAsset:(id)arg1;
- (id)resourceByCachingIfNeeded:(_Bool)arg1;
- (id)instantiateResource;
@property(readonly) _Bool is3DAsset;
@property(readonly) _Bool is2DAsset;
- (void)decrUseCount;
- (void)freeCache;
- (void)incrUseCount;
- (id)description;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithType:(long long)arg1 path:(id)arg2 packID:(id)arg3;

@end

