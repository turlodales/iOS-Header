//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PHVideoRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedVideoRequest : _PXPhotoKitAdjustedUIMediaRequest
{
    PLPhotoEditRenderer *_renderer;
    PHVideoRequestOptions *_options;
    CDUnknownBlockType _resultHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) PHVideoRequestOptions *options; // @synthesize options=_options;
- (void)_handlePlayerItem:(id)arg1 error:(id)arg2;
- (void)_renderIfNeeded;
- (void)progressDidChange;
- (void)editSourceDidChange;
- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end

