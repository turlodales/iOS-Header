//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureResolvedPhotoSettingsInternal;

@interface AVCaptureResolvedPhotoSettings : NSObject
{
    AVCaptureResolvedPhotoSettingsInternal *_internal;
}

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 glassesSegmentationMatteDimensions:(CDStruct_79c71658)arg13 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg14 turboModeEnabled:(_Bool)arg15 flashEnabled:(_Bool)arg16 redEyeReductionEnabled:(_Bool)arg17 HDREnabled:(_Bool)arg18 adjustedPhotoFiltersEnabled:(_Bool)arg19 EV0PhotoDeliveryEnabled:(_Bool)arg20 stillImageStabilizationEnabled:(_Bool)arg21 virtualDeviceFusionEnabled:(_Bool)arg22 squareCropEnabled:(_Bool)arg23 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg24 photoProcessingTimeRange:(CDStruct_e83c9415)arg25 contentAwareDistortionCorrectionEnabled:(_Bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(_Bool)arg30;
+ (void)initialize;
- (id)digitalFlashRGBEstimate;
- (id)digitalFlashUserInterfaceRGBEstimate;
- (unsigned long long)digitalFlashUserInterfaceHints;
- (_Bool)isCaptureBeforeResolvingSettingsEnabled;
@property(readonly, getter=isContentAwareDistortionCorrectionEnabled) _Bool contentAwareDistortionCorrectionEnabled;
@property(readonly) CDStruct_e83c9415 photoProcessingTimeRange;
- (CDStruct_79c71658)deferredPhotoProxyDimensions;
- (id)photoManifest;
@property(readonly) unsigned long long expectedPhotoCount;
@property(readonly, getter=isDualCameraFusionEnabled) _Bool dualCameraFusionEnabled;
@property(readonly, getter=isVirtualDeviceFusionEnabled) _Bool virtualDeviceFusionEnabled;
- (_Bool)livePhotoMovieEnabled;
- (_Bool)isSquareCropEnabled;
@property(readonly, getter=isStillImageStabilizationEnabled) _Bool stillImageStabilizationEnabled;
- (_Bool)isEV0PhotoDeliveryEnabled;
- (_Bool)isAdjustedPhotoFilterRenderingEnabled;
- (_Bool)isHDREnabled;
@property(readonly, getter=isRedEyeReductionEnabled) _Bool redEyeReductionEnabled;
@property(readonly, getter=isFlashEnabled) _Bool flashEnabled;
- (_Bool)isTurboModeEnabled;
- (CDStruct_79c71658)spatialOverCapturePhotoDimensions;
- (CDStruct_79c71658)dimensionsForSemanticSegmentationMatteOfType:(id)arg1;
@property(readonly) CDStruct_79c71658 portraitEffectsMatteDimensions;
@property(readonly) CDStruct_79c71658 livePhotoMovieDimensions;
@property(readonly) CDStruct_79c71658 rawPhotoDimensions;
@property(readonly) CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 embeddedThumbnailDimensions;
@property(readonly) CDStruct_79c71658 previewDimensions;
@property(readonly) CDStruct_79c71658 photoDimensions;
@property(readonly) long long uniqueID;
- (id)description;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(CDStruct_79c71658)arg2 rawPhotoDimensions:(CDStruct_79c71658)arg3 previewDimensions:(CDStruct_79c71658)arg4 embeddedThumbnailDimensions:(CDStruct_79c71658)arg5 rawEmbeddedThumbnailDimensions:(CDStruct_79c71658)arg6 livePhotoMovieEnabled:(_Bool)arg7 livePhotoMovieDimensions:(CDStruct_79c71658)arg8 portraitEffectsMatteDimensions:(CDStruct_79c71658)arg9 hairSegmentationMatteDimensions:(CDStruct_79c71658)arg10 skinSegmentationMatteDimensions:(CDStruct_79c71658)arg11 teethSegmentationMatteDimensions:(CDStruct_79c71658)arg12 glassesSegmentationMatteDimensions:(CDStruct_79c71658)arg13 spatialOverCapturePhotoDimensions:(CDStruct_79c71658)arg14 turboModeEnabled:(_Bool)arg15 flashEnabled:(_Bool)arg16 redEyeReductionEnabled:(_Bool)arg17 HDREnabled:(_Bool)arg18 adjustedPhotoFiltersEnabled:(_Bool)arg19 EV0PhotoDeliveryEnabled:(_Bool)arg20 stillImageStabilizationEnabled:(_Bool)arg21 virtualDeviceFusionEnabled:(_Bool)arg22 squareCropEnabled:(_Bool)arg23 deferredPhotoProxyDimensions:(CDStruct_79c71658)arg24 photoProcessingTimeRange:(CDStruct_e83c9415)arg25 contentAwareDistortionCorrectionEnabled:(_Bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(_Bool)arg30;

@end

