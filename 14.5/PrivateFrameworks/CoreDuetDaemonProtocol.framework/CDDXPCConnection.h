//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDDebug, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CDDXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    _Bool _hasValidConnection;
    _Atomic long long _sequenceNumber;
    NSString *_serviceName;
    CDDebug *_debug;
}

- (void).cxx_destruct;
@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)establishConnection;
- (void)invalidateConnection;
- (void)cancelConnection;
- (id)connection;
- (void)dealloc;
- (id)makeStashWithId:(unsigned long long)arg1;
- (unsigned long long)sequenceNumber;
- (void)sendBarrier:(CDUnknownBlockType)arg1;
- (_Bool)sendMessageAsync:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2;

@end

