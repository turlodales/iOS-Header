//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/_TtC7NewsUI225LocalDraftsDeviceListener.h>

#import <NewsUI2/MCNearbyServiceBrowserDelegate-Protocol.h>
#import <NewsUI2/MCSessionDelegate-Protocol.h>

@interface _TtC7NewsUI225LocalDraftsDeviceListener (NewsUI2) <MCNearbyServiceBrowserDelegate, MCSessionDelegate>
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(CDUnknownBlockType)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
@end

