//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPApplicationWorkspaceObserver-Protocol.h>
#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepEventProvider-Protocol.h>
#import <SleepDaemon/HDSPSleepStorageObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>
#import <SleepDaemon/HDSPTimeChangeObserver-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, HKSPSleepEventRecord, HKSPSleepSchedule, HKSPSleepScheduleModel, HKSPSleepSettings, NSString;
@protocol HDSPSleepEventDelegate, HDSPSource;

@interface HDSPSleepScheduleModelManager : NSObject <HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver>
{
    struct os_unfair_lock_s _storeLock;
    HDSPEnvironment *_environment;
    HKSPSleepSchedule *_sleepSchedule;
    HKSPSleepSettings *_sleepSettings;
    HKSPSleepEventRecord *_sleepEventRecord;
    id <HDSPSleepEventDelegate> _sleepEventDelegate;
    HKSPObserverSet *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) struct os_unfair_lock_s storeLock; // @synthesize storeLock=_storeLock;
@property(nonatomic) __weak id <HDSPSleepEventDelegate> sleepEventDelegate; // @synthesize sleepEventDelegate=_sleepEventDelegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)diagnosticInfo;
- (id)diagnosticDescription;
- (void)sleepStorageDidChangeExternally:(id)arg1;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)_turnOffWatchSleepFeatures;
- (_Bool)_shouldTurnOffWatchSleepFeatures;
- (void)observedApplicationDidUninstall;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)_earliestDateToScheduleEventsForDate:(id)arg1;
- (id)upcomingEventsDueAfterDate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
@property(readonly, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // @synthesize sleepEventRecord=_sleepEventRecord;
- (void)_locked_notifyObserversForSleepEventRecordChangeFromSource:(id)arg1;
- (void)notifyObserversForSleepEventRecordChangeFromSource:(id)arg1;
- (id)_locked_applyNecessaryChangesBeforeSaving:(id)arg1;
- (_Bool)_locked_canApplyChangesFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (_Bool)_locked_updateModelWithBlock:(CDUnknownBlockType)arg1 persistBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_locked_resetSleepEventRecord;
- (id)_locked_setSleepEventRecord:(id)arg1;
- (id)_locked_updateSleepEventRecord:(id)arg1;
- (id)_locked_saveSleepEventRecord:(id)arg1;
- (_Bool)saveSleepEventRecord:(id)arg1 error:(id *)arg2 source:(id)arg3;
- (id)_locked_loadSleepEventRecord:(id *)arg1;
- (id)_loadSleepEventRecord:(id *)arg1;
@property(readonly, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
- (void)_locked_notifyObserversForSleepSettingsChangeFromSource:(id)arg1;
- (void)notifyObserversForSleepSettingsChangeFromSource:(id)arg1;
- (id)_locked_resetSleepSettings;
- (id)_locked_updateSleepSettings:(id)arg1;
- (id)_locked_setSleepSettings:(id)arg1;
- (id)_locked_saveSleepSettings:(id)arg1;
- (_Bool)saveSleepSettings:(id)arg1 error:(id *)arg2 source:(id)arg3;
- (id)_locked_loadSleepSettings:(id *)arg1;
- (id)_loadSleepSettings:(id *)arg1;
@property(readonly, nonatomic) HKSPSleepSchedule *sleepSchedule; // @synthesize sleepSchedule=_sleepSchedule;
- (_Bool)_shouldNotifyObserver:(id)arg1 forSource:(id)arg2;
- (void)_locked_notifyObserversForSleepScheduleChangeFromSource:(id)arg1;
- (void)notifyObserversForSleepScheduleChangeFromSource:(id)arg1;
- (id)_locked_removeSleepSchedule;
- (id)_locked_validateSleepSchedule:(id)arg1 generateValidSchedule:(_Bool)arg2;
- (id)_locked_updateSleepSchedule:(id)arg1;
- (id)_locked_setSleepSchedule:(id)arg1;
- (id)_locked_saveSleepSchedule:(id)arg1;
- (_Bool)saveSleepSchedule:(id)arg1 error:(id *)arg2 source:(id)arg3;
- (id)_locked_loadSleepSchedule:(id *)arg1;
- (id)_loadSleepSchedule:(id *)arg1;
- (id)_locked_sleepScheduleModel;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
- (void)_locked_notifyObserversForSleepScheduleModelChangeFromSource:(id)arg1;
- (_Bool)removeSleepScheduleModelWithError:(id *)arg1 source:(id)arg2;
- (_Bool)saveSleepScheduleModel:(id)arg1 error:(id *)arg2 source:(id)arg3;
- (id)_locked_loadSleepScheduleModel:(id *)arg1;
- (id)_loadSleepScheduleModel:(id *)arg1;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end

