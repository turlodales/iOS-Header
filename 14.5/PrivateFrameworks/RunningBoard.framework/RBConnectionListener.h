//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSXPCListenerDelegate-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_os_transaction, OS_xpc_object, RBDaemonContextProviding;

__attribute__((visibility("hidden")))
@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing>
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_lock_connectionToClientMap;
    NSMapTable *_lock_identifierToClientMap;
    NSMutableArray *_lock_readyClients;
    id <RBDaemonContextProviding> _context;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property(readonly, copy) NSString *debugDescription;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

