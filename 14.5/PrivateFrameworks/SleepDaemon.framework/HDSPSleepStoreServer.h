//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPDiagnosticsProvider-Protocol.h>
#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepEventHandler-Protocol.h>
#import <SleepDaemon/HDSPSleepModeObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleModelObserver-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleStateObserver-Protocol.h>
#import <SleepDaemon/HKSPSleepServer-Protocol.h>

@class HDSPEnvironment, HDSPSleepMessageStore, HKSPXPCConnectionListener, NAFuture, NSString;

@interface HDSPSleepStoreServer : NSObject <HKSPSleepServer, HDSPSleepScheduleStateObserver, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepModeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware>
{
    HDSPEnvironment *_environment;
    NAFuture *_environmentIsReady;
    HKSPXPCConnectionListener *_connectionListener;
    HDSPSleepMessageStore *_messageStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDSPSleepMessageStore *messageStore; // @synthesize messageStore=_messageStore;
@property(readonly, nonatomic) HKSPXPCConnectionListener *connectionListener; // @synthesize connectionListener=_connectionListener;
@property(readonly, nonatomic) NAFuture *environmentIsReady; // @synthesize environmentIsReady=_environmentIsReady;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (id)diagnosticInfo;
- (id)diagnosticDescription;
- (void)_notifyClient:(id)arg1 forMissedSleepEvent:(id)arg2 syncAnchor:(id)arg3;
- (void)_notifyClientForMissedScheduleStateChange:(id)arg1 syncAnchor:(id)arg2;
- (void)_notifyClientForMissedSleepModeChange:(id)arg1 syncAnchor:(id)arg2;
- (void)_notifyClientForMissedRecordChange:(id)arg1 syncAnchor:(id)arg2;
- (void)_notifyClientForMissedSettingsChange:(id)arg1 syncAnchor:(id)arg2;
- (void)_notifyClientForMissedScheduleChange:(id)arg1 syncAnchor:(id)arg2;
- (void)_notifyClient:(id)arg1 forMissedMessagesWithSyncAnchor:(id)arg2;
- (void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3;
- (id)eventIdentifiers;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepEventRecord:(id)arg3;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSettings:(id)arg3;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepSchedule:(id)arg3;
- (void)environmentWillInvalidate:(id)arg1;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)_performWhenEnvironmentIsReady:(CDUnknownBlockType)arg1;
- (void)sleepAlarmWasModifiedWithCompletion:(CDUnknownBlockType)arg1;
- (void)sleepAlarmWasSnoozedUntilDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sleepAlarmWasDismissedOnDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSleepLockWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissGoodMorningWithCompletion:(CDUnknownBlockType)arg1;
- (void)confirmAwakeWithCompletion:(CDUnknownBlockType)arg1;
- (void)skipWindDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)skipBedtimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)delayBedtimeForTimeInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLockScreenOverrideState:(long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)publishWakeUpResultsNotificationWithCompletion:(CDUnknownBlockType)arg1;
- (void)publishNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getSleepScheduleStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSleepMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSleepModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveSleepEventRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSleepEventRecordWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveSleepSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSleepSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveSleepSchedule:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSleepScheduleWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkInWithSyncAnchor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)startListening;
- (id)initWithEnvironment:(id)arg1 connectionListenerProvider:(CDUnknownBlockType)arg2;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

