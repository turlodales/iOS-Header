//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureResponse.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMVideoCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>
{
    NSString *_persistenceUUID;
    NSURL *_localPersistenceURL;
    NSDate *_captureDate;
    long long _reason;
    double _videoZoomFactor;
    UIImage *_imageWellImage;
    UIImage *_previewImage;
    NSString *_stillPersistenceUUID;
    struct CGSize _finalExpectedPixelSize;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, copy, nonatomic) NSString *stillPersistenceUUID; // @synthesize stillPersistenceUUID=_stillPersistenceUUID;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) UIImage *imageWellImage; // @synthesize imageWellImage=_imageWellImage;
@property(readonly, nonatomic) double videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(readonly, copy, nonatomic) NSURL *localPersistenceURL; // @synthesize localPersistenceURL=_localPersistenceURL;
@property(readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
@property(readonly, nonatomic) struct CGSize finalExpectedPixelSize; // @synthesize finalExpectedPixelSize=_finalExpectedPixelSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) _Bool expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool stoppedUnexpectedly;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 captureDate:(id)arg4 duration:(CDStruct_1b6d18a9)arg5 stillPersistenceUUID:(id)arg6 stillDisplayTime:(CDStruct_1b6d18a9)arg7 reason:(long long)arg8 videoZoomFactor:(double)arg9 finalExpectedPixelSize:(struct CGSize)arg10 imageWellImage:(id)arg11 previewImage:(id)arg12 coordinationInfo:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned short sessionIdentifier;
@property(readonly) Class superclass;

@end

