//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotIDSRelayReceiver, NSData, NSError;

@protocol HMDCameraSnapshotIDSRelayReceiverDelegate <NSObject>
- (void)relayReceiver:(HMDCameraSnapshotIDSRelayReceiver *)arg1 didReceiveData:(NSData *)arg2 error:(NSError *)arg3;
- (void)relayReceiverIDSSessionDidStart:(HMDCameraSnapshotIDSRelayReceiver *)arg1;
- (void)relayReceiverDidAcceptIDSInvitation:(HMDCameraSnapshotIDSRelayReceiver *)arg1;
@end

