//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTSyncManager-Protocol.h>
#import <MobileTimer/MTSyncServiceDelegate-Protocol.h>
#import <MobileTimer/MTSyncStatusProviderDelegate-Protocol.h>

@class MTMetrics, MTSyncChangeQueue, NSString;
@protocol MTSyncDataModel, MTSyncService, MTSyncStatusProvider, NAScheduler;

@interface MTSyncServiceManager : NSObject <MTSyncStatusProviderDelegate, MTSyncServiceDelegate, MTSyncManager, MTAgentDiagnosticDelegate>
{
    _Bool _started;
    id <MTSyncService> _syncService;
    id <MTSyncStatusProvider> _syncStatusProvider;
    id <MTSyncDataModel> _syncDataModel;
    MTSyncChangeQueue *_syncChangeQueue;
    MTMetrics *_syncMetrics;
    id <NAScheduler> _serializer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;
@property(retain, nonatomic) MTSyncChangeQueue *syncChangeQueue; // @synthesize syncChangeQueue=_syncChangeQueue;
@property(nonatomic) __weak id <MTSyncDataModel> syncDataModel; // @synthesize syncDataModel=_syncDataModel;
@property(retain, nonatomic) id <MTSyncStatusProvider> syncStatusProvider; // @synthesize syncStatusProvider=_syncStatusProvider;
@property(retain, nonatomic) id <MTSyncService> syncService; // @synthesize syncService=_syncService;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (void)syncStatusProvider:(id)arg1 didChangeSyncStatus:(unsigned long long)arg2;
- (id)requestSync:(unsigned long long)arg1;
- (void)pendingChangesSent:(id)arg1;
- (void)resetDataStore;
- (void)applyChange:(id)arg1;
- (id)pendingChanges;
- (void)syncChange:(id)arg1;
- (void)checkForPendingChanges;
- (void)stopSyncService;
- (void)startSyncService;
- (id)initWithSyncService:(id)arg1 syncStatusProvider:(id)arg2 syncDataModel:(id)arg3 syncMetrics:(id)arg4 syncChangeStore:(id)arg5;
- (id)initWithSyncService:(id)arg1 syncStatusProvider:(id)arg2 syncDataModel:(id)arg3 syncMetrics:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

