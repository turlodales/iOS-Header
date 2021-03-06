//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SCNNode;

@interface AVTComponentInstance : NSObject
{
    SCNNode *_assetNode;
    NSString *_assetImage;
    NSArray *_assets;
    NSDictionary *_layers;
}

- (void).cxx_destruct;
@property(readonly) NSString *assetImage; // @synthesize assetImage=_assetImage;
@property(readonly) SCNNode *assetNode; // @synthesize assetNode=_assetNode;
- (id)assetImageForAsset:(id)arg1;
- (_Bool)has3DAsset;
- (_Bool)has2DAsset;
- (void)updateMaterialsWithComponent:(id)arg1;
- (id)initWithComponent:(id)arg1 forCaching:(_Bool)arg2;
- (id)initWithComponent:(id)arg1;
- (void)_commonInitForCaching:(_Bool)arg1 component:(id)arg2;
@property(readonly) struct CGSize imageOffset;
@property(readonly) _Bool imageMirror;
@property(readonly) double imageScale;
// Error parsing type for property uvRemappingInfo:
// Property attributes: T{?=B{?=[3]}},R

- (id)assetImageWithLayerNamed:(id)arg1;
- (void)dealloc;

@end

