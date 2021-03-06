//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBProcessMonitorObserving-Protocol.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString, RBProcess, RBProcessMap, RBSProcessStateDescriptor;
@protocol OS_dispatch_queue, RBProcessMonitorObserverConnection, RBProcessMonitoring;

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving>
{
    id <RBProcessMonitoring> _monitor;
    RBProcess *_process;
    id <RBProcessMonitorObserverConnection> _connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s _lock;
    unsigned int _qos;
    RBProcessMap *_pendingProcessState;
    NSMutableArray *_pendingExitEvents;
    NSSet *_pendingPreventLaunchPredicates;
    NSMutableDictionary *_configurations;
    RBSProcessStateDescriptor *_stateDescriptor;
    NSHashTable *_matchedHandles;
    _Bool _extantStateUpdate;
    _Bool _extantEventUpdate;
    _Bool _didClearState;
    double _lastSend;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_lock_sendPendingStateUpdates;
- (void)_lock_clearPendingNonterminalStates;
- (void)_lock_checkForBadActorWithPendingStates:(id)arg1;
- (void)_lock_rebuildConfiguration;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)didResolvePreventLaunchPredicates:(id)arg1;
- (void)didObserveProcessExit:(id)arg1;
- (void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2;
- (void)removeConfigurationWithIdentifier:(unsigned long long)arg1;
- (void)_lock_addAllConfiguredStatesToPending;
- (void)addConfiguration:(id)arg1;
- (void)_lock_addConfigurationStatesToPending:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithMonitor:(id)arg1 forProcess:(id)arg2 connection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

