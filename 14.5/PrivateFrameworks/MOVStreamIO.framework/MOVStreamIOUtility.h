//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MOVStreamIOUtility : NSObject
{
}

+ (id)monochrome10bitHEVCEncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)monochrome10bitHEVCEncoderConfig;
+ (id)customEncoderConfigWithEmbeddedConfiguration:(id)arg1;
+ (id)customEncoderConfig;
+ (id)audioNoneEncoderConfig;
+ (id)sampleBufferConfigWithPixelFormat:(unsigned int)arg1;
+ (id)noneEncoderConfig;
+ (id)slimXEncoderConfig;
+ (id)slimEncoderConfig;
+ (id)colorH264EncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)colorHEVCEncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)colorH264EncoderConfig;
+ (id)colorWithAlphaLossless8bitHEVCEncoderConfig;
+ (id)colorHEVCEncoderConfig;
+ (id)colorHEVCLosslessEncoderConfig;
+ (id)color8bitHEVCWithAlphaEncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)color8bitHEVCWithAlphaEncoderConfig;
+ (id)monochrome8bitHEVCEncoderConfigWithBitrate:(unsigned long long)arg1;
+ (id)monochrome8bitHEVCEncoderConfig;
+ (id)monochrome8bitHEVCLosslessEncoderConfig;
+ (id)monochrome10bitHEVCLosslessEncoderConfig;
+ (id)addTrackTypeInfo:(unsigned long long)arg1 toConfiguration:(id)arg2;
+ (id)addTransform:(struct CGAffineTransform)arg1 toConfiguration:(id)arg2;
+ (struct CGAffineTransform)CGAffineTransformValueFromNSValue:(id)arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (unsigned long long)getDefaultBitrateForVideoDimension:(CDStruct_1ef3fb1f)arg1 atExpectedFramerate:(double)arg2 forEncoderType:(int)arg3;
+ (_Bool)isEncoderAvailableWithEncoderName:(id)arg1;
+ (_Bool)isEncoderAvailableForEncoderType:(int)arg1;
+ (unsigned long long)getPreferredBytesPerRowAlignmentSize;
+ (unsigned long long)getPreferredPlaneAlignmentSize;
+ (struct opaqueCMFormatDescription *)formatForPixelBuffer:(struct __CVBuffer *)arg1;
+ (double)transformAngleFromVideoOrientation:(int)arg1;
+ (_Bool)verifyExactBytesPerRow:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4;
+ (id)getPlistFriendlyCopyOf:(id)arg1;
+ (_Bool)isValidJSONObject:(id)arg1 path:(id)arg2;
+ (id)getJsonFriendlyCopy:(id)arg1;
+ (struct opaqueCMFormatDescription *)createL008FormatDescriptionFromCompandedRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (struct opaqueCMFormatDescription *)createxf20FormatDescriptionFromRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (struct opaqueCMFormatDescription *)createL010FormatDescriptionFromRawBayerFormatDescription:(struct opaqueCMFormatDescription *)arg1;
+ (struct opaqueCMFormatDescription *)createL010FormatDescriptionFromL016FormatDescription:(struct opaqueCMFormatDescription *)arg1;

@end

