//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotData, HMDCameraStreamSnapshotCapture;

@protocol HMDCameraStreamSnapshotCaptureDelegate <NSObject>
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetLastSnapshot:(HMDCameraSnapshotData *)arg2;
- (void)streamSnapshotCapture:(HMDCameraStreamSnapshotCapture *)arg1 didGetNewSnapshot:(HMDCameraSnapshotData *)arg2;
@end

