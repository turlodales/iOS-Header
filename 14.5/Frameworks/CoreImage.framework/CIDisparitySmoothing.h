//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothing : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputNumIterations;
}

+ (id)customAttributes;
@property(copy) NSNumber *inputNumIterations; // @synthesize inputNumIterations;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)outputImageMetal;
- (id)_customBoxBlur5Kernel;

@end

