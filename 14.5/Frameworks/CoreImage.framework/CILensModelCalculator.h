//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CILensModelCalculator : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMinMaxImage;
    CIVector *inputOriginalSize;
    CIVector *inputFocusRect;
    NSNumber *inputSimulatedAperture;
    NSNumber *inputIntrinsicMatrixFocalLength;
    NSDictionary *inputTuningParameters;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(copy, nonatomic) NSNumber *inputIntrinsicMatrixFocalLength; // @synthesize inputIntrinsicMatrixFocalLength;
@property(copy, nonatomic) NSNumber *inputSimulatedAperture; // @synthesize inputSimulatedAperture;
@property(copy, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(copy, nonatomic) CIVector *inputOriginalSize; // @synthesize inputOriginalSize;
@property(retain) CIImage *inputMinMaxImage; // @synthesize inputMinMaxImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)cpuParams;
- (id)kernel;
- (id)mtlKernel;

@end

