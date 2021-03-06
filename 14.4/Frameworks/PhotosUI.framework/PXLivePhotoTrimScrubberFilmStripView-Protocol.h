//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class AVAsset, AVVideoComposition, UIImage;

@protocol PXLivePhotoTrimScrubberFilmStripView <NSObject>
@property(readonly, nonatomic) AVVideoComposition *videoComposition;
@property(readonly, nonatomic) AVAsset *asset;
@property(nonatomic) struct CGRect visibleRect;
- (void)setLivePhotoTrimScrubberThumbnail:(UIImage *)arg1;
- (void)setAsset:(AVAsset *)arg1 videoComposition:(AVVideoComposition *)arg2;

@optional
@property(nonatomic) __weak id thumbnailUpdatingDelegate;
@property(nonatomic) _Bool useContentAspectRatio;
@end

