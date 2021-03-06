//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureDevice.h>

@class AVCaptureDeviceFormat;

@interface AVCaptureDevice (CAMDebugging)
- (void)cam_debugFocusAndExposureState;
- (void)cam_debugExposureState;
- (void)cam_debugFocusState;
@property(readonly, nonatomic) AVCaptureDeviceFormat *cam_formatForPortraitFrontFacingZoomed;
- (id)cameraPanoramaFormatForConfiguration:(id)arg1;
- (id)cam_highestQualityFormatForConfiguration:(long long)arg1 colorSpace:(long long)arg2 enableHDR10BitVideo:(_Bool)arg3;
- (void)cameraVideoFormat:(id *)arg1 orPreset:(id *)arg2 forVideoConfiguration:(long long)arg3 videoEncodingBehavior:(long long)arg4 enableHDR10BitVideoIfSupported:(_Bool)arg5;
@end

