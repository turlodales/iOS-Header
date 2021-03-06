//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NWRemotePacketProxyDelegate;

@interface NWRemotePacketProxy : NSObject
{
    unsigned int _receiveWindowPacketCount;
    NSObject<NWRemotePacketProxyDelegate> *_delegate;
    NSMutableArray *_writeRequests;
    struct nw_protocol *_packetProtocol;
    struct nw_protocol *_defaultOutputHandler;
    struct nw_hash_table *_packetHashTable;
}

- (void).cxx_destruct;
@property struct nw_hash_table *packetHashTable; // @synthesize packetHashTable=_packetHashTable;
@property struct nw_protocol *defaultOutputHandler; // @synthesize defaultOutputHandler=_defaultOutputHandler;
@property struct nw_protocol *packetProtocol; // @synthesize packetProtocol=_packetProtocol;
@property(retain) NSMutableArray *writeRequests; // @synthesize writeRequests=_writeRequests;
@property __weak NSObject<NWRemotePacketProxyDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int receiveWindowPacketCount; // @synthesize receiveWindowPacketCount=_receiveWindowPacketCount;
- (_Bool)receiveRemotePacket:(id)arg1;
- (void)setOutputProtocolHandler:(struct nw_protocol *)arg1 local:(id)arg2 remote:(id)arg3 ipProtocol:(unsigned char)arg4;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol *)arg1;
- (struct nw_protocol *)outputHandlerForPacket:(id)arg1 inbound:(_Bool)arg2;
@property(readonly, nonatomic) struct nw_protocol *protocol;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

