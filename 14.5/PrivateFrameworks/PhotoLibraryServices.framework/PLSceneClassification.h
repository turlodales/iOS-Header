//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLAdditionalAssetAttributes;

@interface PLSceneClassification : PLManagedObject
{
}

+ (id)PLJunkSceneClassificationIDForLabel:(id)arg1;
+ (void)batchFetchScenesByAssetObjectIDWithAssetObjectIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 asset:(id)arg2 sceneIdentifier:(int)arg3 confidence:(double)arg4 packedBoundingBoxRect:(long long)arg5;
- (id)debugLogDescription;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(nonatomic) double confidence; // @dynamic confidence;
@property(nonatomic) long long packedBoundingBoxRect; // @dynamic packedBoundingBoxRect;
@property(nonatomic) unsigned int sceneIdentifier; // @dynamic sceneIdentifier;

@end

