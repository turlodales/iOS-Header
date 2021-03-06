//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILanczosScaleTransform : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputAspectRatio;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;
- (_Bool)_isIdentity;

@end

