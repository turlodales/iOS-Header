//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPaperWash : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputGreyscale;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputGreyscale; // @synthesize inputGreyscale;
@property(copy, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation;
- (id)outputImage;

@end

