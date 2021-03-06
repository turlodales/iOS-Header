//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NULivePhotoRenderResult-Protocol.h>

@class AVAsset, AVVideoComposition, NSString, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult>
{
    AVAsset *_video;
    AVVideoComposition *_videoComposition;
    struct CGImage *_photo;
    NUImageGeometry *_videoGeometry;
    CDStruct_1b6d18a9 _photoTime;
}

- (void).cxx_destruct;
@property(retain) NUImageGeometry *videoGeometry; // @synthesize videoGeometry=_videoGeometry;
@property CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(retain) struct CGImage *photo; // @synthesize photo=_photo;
@property(retain) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain) AVAsset *video; // @synthesize video=_video;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

