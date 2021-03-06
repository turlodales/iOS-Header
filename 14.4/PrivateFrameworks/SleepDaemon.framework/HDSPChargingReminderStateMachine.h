//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sleep/HKSPPersistentStateMachine.h>

#import <SleepDaemon/HDSPChargingReminderStateMachineDelegate-Protocol.h>
#import <SleepDaemon/HDSPChargingReminderStateMachineEventHandler-Protocol.h>
#import <SleepDaemon/HDSPChargingReminderStateMachineInfoProvider-Protocol.h>

@class HDSPChargingReminderDisabledState, HDSPChargingReminderMonitoringState, HDSPChargingReminderNotifiedState, HDSPChargingReminderWaitingState, HKSPSleepScheduleModel, NSDate, NSString;
@protocol HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, NAScheduler;

@interface HDSPChargingReminderStateMachine : HKSPPersistentStateMachine <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPChargingReminderStateMachineEventHandler>
{
    HDSPChargingReminderDisabledState *_disabledState;
    HDSPChargingReminderWaitingState *_waitingState;
    HDSPChargingReminderMonitoringState *_monitoringState;
    HDSPChargingReminderNotifiedState *_notifiedState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDSPChargingReminderNotifiedState *notifiedState; // @synthesize notifiedState=_notifiedState;
@property(readonly, nonatomic) HDSPChargingReminderMonitoringState *monitoringState; // @synthesize monitoringState=_monitoringState;
@property(readonly, nonatomic) HDSPChargingReminderWaitingState *waitingState; // @synthesize waitingState=_waitingState;
@property(readonly, nonatomic) HDSPChargingReminderDisabledState *disabledState; // @synthesize disabledState=_disabledState;
@property(readonly, nonatomic) _Bool isCharging;
@property(readonly, nonatomic) unsigned long long sleepScheduleState;
@property(readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
- (id)monitoringWindowAfterDate:(id)arg1;
@property(readonly, nonatomic) _Bool sleepFeaturesEnabled;
@property(readonly, nonatomic) NSDate *currentDate;
- (void)stopBatteryMonitoring;
- (void)startBatteryMonitoring;
- (void)unscheduleBatteryMonitoring;
- (void)scheduleBatteryMonitoring;
- (void)postChargingReminderNotification;
- (void)batteryLevelChanged:(float)arg1;
- (void)batteryMonitoringEventDue;
- (id)stateMachineLog;
- (id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) __weak id <HDSPChargingReminderStateMachineDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <HDSPChargingReminderStateMachineInfoProvider> infoProvider; // @dynamic infoProvider;
@property(readonly) Class superclass;

@end

