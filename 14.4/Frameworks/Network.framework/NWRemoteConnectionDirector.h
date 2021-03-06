//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NWRemoteConnectionDirectorDelegate;

@interface NWRemoteConnectionDirector : NSObject
{
    unsigned long long _maximumDataChunkSize;
    NSObject<NWRemoteConnectionDirectorDelegate> *_delegate;
    struct nw_protocol *_directorProtocol;
    struct nw_protocol *_defaultOutputHandler;
    struct nw_hash_table *_protocolHashTable;
    NSMutableArray *_writeRequests;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *writeRequests; // @synthesize writeRequests=_writeRequests;
@property struct nw_hash_table *protocolHashTable; // @synthesize protocolHashTable=_protocolHashTable;
@property struct nw_protocol *defaultOutputHandler; // @synthesize defaultOutputHandler=_defaultOutputHandler;
@property struct nw_protocol *directorProtocol; // @synthesize directorProtocol=_directorProtocol;
@property __weak NSObject<NWRemoteConnectionDirectorDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maximumDataChunkSize; // @synthesize maximumDataChunkSize=_maximumDataChunkSize;
- (void)receiveData:(id)arg1 forClient:(id)arg2;
- (void)setOutputProtocolHandler:(struct nw_protocol *)arg1 forFlowID:(id)arg2 dataMode:(unsigned long long)arg3;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol *)arg1;
- (struct nw_protocol *)outputHandlerForFlowID:(id)arg1;
- (unsigned long long)dataModeForFlowID:(id)arg1;
@property(readonly, nonatomic) struct nw_protocol *protocol;
- (_Bool)receiveRemoteReply:(id)arg1;
- (id)createSendDataMessageForClientID:(id)arg1 data:(id)arg2 receiveWindow:(unsigned int)arg3;
- (id)createStopBrowseMessageForClientID:(id)arg1;
- (id)createStartBrowseMessageForClientID:(id)arg1 descriptor:(id)arg2 parameters:(id)arg3;
- (id)createCloseConnectionMessageForClientID:(id)arg1;
- (id)createOpenConnectionMessageForClientID:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

