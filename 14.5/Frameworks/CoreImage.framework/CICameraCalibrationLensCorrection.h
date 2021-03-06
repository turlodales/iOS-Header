//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class AVCameraCalibrationData, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICameraCalibrationLensCorrection : CIFilter
{
    CIImage *inputImage;
    AVCameraCalibrationData *inputAVCameraCalibrationData;
    NSNumber *inputUseInverseLookUpTable;
}

+ (id)customAttributes;
- (id)outputImage;
- (struct CGRect)regionOf:(int)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (struct CGPoint)ReferenceensDistortionPointForPoint:(struct CGPoint)arg1 lookupTable:(id)arg2 distortionOpticalCenter:(struct CGPoint)arg3 imageSize:(struct CGSize)arg4;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

