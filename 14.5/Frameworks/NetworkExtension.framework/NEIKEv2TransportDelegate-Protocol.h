//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEIKEv2Packet;

@protocol NEIKEv2TransportDelegate <NSObject>
- (void)receivePacket:(NEIKEv2Packet *)arg1;
- (void)reportError:(int)arg1;
@end

