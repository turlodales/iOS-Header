//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurator.h>

@class PHPhotoLibrary;

@interface PGCurator_PHAsset : PGCurator
{
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (void)addMoviesToAssets:(id)arg1 fromFeeder:(id)arg2 maximumNumberOfAssets:(unsigned long long)arg3 debugInfo:(id)arg4;
- (void)lastPassToCompleteItems:(id)arg1 fromFeeder:(id)arg2 options:(id)arg3 maximumNumberOfItems:(unsigned long long)arg4 debugInfo:(id)arg5;
- (id)newMovieDeduperWithOptions:(id)arg1;
- (id)newSemanticalDeduperWithOptions:(id)arg1;
- (id)bestAssetsForFeeder:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)initWithPhotoLibrary:(id)arg1;

@end

