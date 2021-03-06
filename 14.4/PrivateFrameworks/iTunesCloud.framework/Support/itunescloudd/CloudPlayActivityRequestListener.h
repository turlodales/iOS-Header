//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class ICPlayActivityController, NSOperationQueue, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudPlayActivityRequestListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_flushOperationQueue;
    long long _flushOperationCount;
    double _nextFlushPlayActivityFireSyncInterval;
    double _testNextFlushPlayActivityFireSyncInterval;
    ICPlayActivityController *_playActivityController;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_scheduleNextPlayActivityFlushOperationWithCriteria:(id)arg1;
- (_Bool)_isValidTimeInterval:(double)arg1;
- (id)_criteriaDictionaryForEndPointIdentifier:(id)arg1 withPostFrequency:(double)arg2;
- (void)_timeIntervalForNextFlushOperationWithReplyBlock:(CDUnknownBlockType)arg1;
- (void)_playActivityControllerDidRecordEventsNotification:(id)arg1;
- (void)_playActivityControllerEndpointRevisionInformationDidChangeNotification:(id)arg1;
- (void)_flushPlayActivityEventsForEndPointIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 result:(unsigned long long)arg3 withReplyBlock:(CDUnknownBlockType)arg4;
- (void)insertPlayActivityEvents:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;
- (void)removePlayActivityEventsUptoRevision:(unsigned long long)arg1 withReplyBlock:(CDUnknownBlockType)arg2;
- (void)setRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withReplyBlock:(CDUnknownBlockType)arg4;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 storeAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(_Bool)arg3 withReplyBlock:(CDUnknownBlockType)arg4;
- (void)flushPlayActivityEventsForEndPointIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

