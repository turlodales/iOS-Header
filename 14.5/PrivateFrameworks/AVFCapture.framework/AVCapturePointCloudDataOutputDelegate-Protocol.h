//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/NSObject-Protocol.h>

@class AVCaptureConnection, AVCapturePointCloudDataOutput, AVPointCloudData;

@protocol AVCapturePointCloudDataOutputDelegate <NSObject>

@optional
- (void)pointCloudDataOutput:(AVCapturePointCloudDataOutput *)arg1 didDropPointCloudData:(AVPointCloudData *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(AVCaptureConnection *)arg4 reason:(long long)arg5;
- (void)pointCloudDataOutput:(AVCapturePointCloudDataOutput *)arg1 didOutputPointCloudData:(AVPointCloudData *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(AVCaptureConnection *)arg4;
@end

