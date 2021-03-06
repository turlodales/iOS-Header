//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordID, NSString, VCCKApplicationStateObserver, VCCKShortcutSyncService;
@protocol OS_dispatch_queue, OS_nw_path_monitor, VCDatabaseProvider;

@interface VCCKShortcutSyncCoordinator : NSObject
{
    _Bool _started;
    _Bool _syncEnabled;
    VCCKShortcutSyncService *_currentSyncService;
    long long _accountStatus;
    id <VCDatabaseProvider> _databaseProvider;
    CKContainer *_container;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    struct __CTServerConnection *_telephonyConnection;
    VCCKApplicationStateObserver *_applicationObserver;
    CKRecordID *_userRecordID;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSyncEnabled) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(retain, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver; // @synthesize applicationObserver=_applicationObserver;
@property(readonly, nonatomic) struct __CTServerConnection *telephonyConnection; // @synthesize telephonyConnection=_telephonyConnection;
@property(readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // @synthesize pathMonitor=_pathMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) id <VCDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(retain, nonatomic) VCCKShortcutSyncService *currentSyncService; // @synthesize currentSyncService=_currentSyncService;
- (void)handleAccountChangedNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)updateCurrentSyncServiceIfNeeded;
- (void)updateAccountStatusAndUserRecordID;
@property(readonly, nonatomic) NSString *accountForSyncToken;
- (void)stopObservingDataUsagePermission;
- (void)startObservingDataUsagePermission;
- (void)stopObservingReachability;
- (void)startObservingReachability;
- (void)stopObservingAccountChanges;
- (void)startObservingAccountChanges;
- (void)stopObservingApplicationVisibility;
- (void)startObservingApplicationVisibility;
- (void)stopObservingUserDefaults;
- (void)startObservingUserDefaults;
- (void)setupPathMonitor;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)handleCloudKitSyncEnabledChange;
- (void)start;
- (void)dealloc;
- (id)initWithDatabaseProvider:(id)arg1;

@end

