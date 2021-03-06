//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol OS_dispatch_queue;

@interface AVCTestMonitor : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    AVConferenceXPCClient *_connection;
}

- (void)setEmulatedNetworkConfigurationPath:(id)arg1;
- (void)setForcedCapBitrate:(int)arg1;
- (void)setForcedTargetBitrate:(int)arg1;
- (void)setCannedReplayPath:(id)arg1;
- (void)setEmulatedRxPLR:(double)arg1;
- (void)setEnableOneToOneMode:(_Bool)arg1;
- (void)setEnableLoopbackInterface:(_Bool)arg1;
- (void)forceNetworkCellular:(_Bool)arg1;
- (void)updateAudioInjectConfig:(id)arg1;
- (void)requestReport;
- (void)setupNotificationQueue:(id)arg1;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (id)delegateNotificationQueue;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

