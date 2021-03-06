//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray, NSMutableIndexSet, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession
{
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    _Bool _hasReceivedEndSync;
    CDUnknownBlockType _completion;
    struct os_unfair_lock_s _queueLock;
    NSMutableArray *_incomingBatchQueue;
    _Bool canRestart;
    _Bool canRollback;
}

- (void).cxx_destruct;
- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void)_handleEndSync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleBatchChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_continueProcessing;
- (void)_sendEndSessionResponse:(id)arg1;
- (id)initWithService:(id)arg1;

@end

