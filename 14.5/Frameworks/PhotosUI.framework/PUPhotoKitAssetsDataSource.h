//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetsDataSource.h>

@class NSCache, NSString, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource
{
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
    NSString *_changeFromDataSourceIdentifier;
    NSCache *__assetReferenceByIndexPathCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // @synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache;
@property(readonly, nonatomic) NSString *changeFromDataSourceIdentifier; // @synthesize changeFromDataSourceIdentifier=_changeFromDataSourceIdentifier;
@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (id)assetAtIndexPath:(id)arg1;
- (_Bool)couldAssetReferenceAppear:(id)arg1;
- (long long)numberOfAssetsWithMaximum:(long long)arg1;
- (_Bool)isEmpty;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)startingAssetReference;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;

@end

