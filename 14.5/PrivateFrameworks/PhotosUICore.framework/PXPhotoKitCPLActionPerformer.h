//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCPLActionPerformer.h>

@class PHPhotoLibrary;

@interface PXPhotoKitCPLActionPerformer : PXCPLActionPerformer
{
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)initWithActionType:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithActionType:(id)arg1;

@end

