//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/NSObject-Protocol.h>

@class AVCaptureConnection, AVCaptureVisionDataOutput;

@protocol AVCaptureVisionDataOutputDelegate <NSObject>

@optional
- (void)visionDataOutput:(AVCaptureVisionDataOutput *)arg1 didDropVisionDataPixelBufferForTimestamp:(CDStruct_1b6d18a9)arg2 connection:(AVCaptureConnection *)arg3 reason:(long long)arg4;
- (void)visionDataOutput:(AVCaptureVisionDataOutput *)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(AVCaptureConnection *)arg4;
@end

