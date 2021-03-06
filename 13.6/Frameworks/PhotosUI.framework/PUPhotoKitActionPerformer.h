//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetActionPerformer.h>

@class NSArray, PUPhotoKitDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPhotoKitActionPerformer : PUAssetActionPerformer
{
    PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PUPhotoKitDataSourceManager *photoKitDataSourceManager; // @synthesize photoKitDataSourceManager=_photoKitDataSourceManager;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)stopExcludingAssetsFromDataSource;
- (void)instantlyExcludeAssetsFromDataSource;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *assets; // @dynamic assets;

@end

