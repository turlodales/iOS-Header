//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@protocol MOVStreamPreProcessor <NSObject>
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (const struct opaqueCMFormatDescription *)formatDescriptionForPixelBuffer:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2;
- (const struct opaqueCMFormatDescription *)trackFormatDescriptionFromStreamData:(struct StreamRecordingData *)arg1;
- (struct __CVBuffer *)processedPixelBufferCopyOf:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2 error:(id *)arg3;
@end

