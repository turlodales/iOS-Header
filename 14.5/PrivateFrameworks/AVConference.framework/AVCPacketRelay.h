//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCPacketRelayDriver, NSArray;
@protocol AVCPacketRelayConnectionProtocol, AVCPacketRelayDelegate, OS_dispatch_queue;

@interface AVCPacketRelay : NSObject
{
    AVCPacketRelayDriver *_packetDriver;
    id <AVCPacketRelayDelegate> _delegate;
    NSArray *_connections;
    id <AVCPacketRelayConnectionProtocol> _multiplexedConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) id <AVCPacketRelayConnectionProtocol> multiplexedConnection; // @synthesize multiplexedConnection=_multiplexedConnection;
@property(retain) NSArray *connections; // @synthesize connections=_connections;
- (id)findConnectionToForwardData:(const void *)arg1 size:(int)arg2;
- (_Bool)stopAllConnections;
- (int)startAllConnections;
- (_Bool)isAllConnectionTypeValid:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)start;
@property(nonatomic) id <AVCPacketRelayDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithConnections:(id)arg1 multiplexedConnection:(id)arg2 error:(id *)arg3;
- (id)initWithConnection:(id)arg1 connection:(id)arg2 error:(id *)arg3;

@end

