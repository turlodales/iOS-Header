//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings
{
    float _exposureTargetBias;
}

+ (id)autoExposureSettingsWithExposureTargetBias:(float)arg1;
@property(readonly) float exposureTargetBias; // @synthesize exposureTargetBias=_exposureTargetBias;
- (id)description;
- (id)debugDescription;
- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1;

@end

