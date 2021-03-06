//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepActionObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>
#import <SleepDaemon/IDSServiceDelegate-Protocol.h>

@class HDSPEnvironment, NSString;
@protocol HDSPIDSService, HDSPSource, HKSPQueueBackedScheduler;

__attribute__((visibility("hidden")))
@interface HDSPIDSServiceManager : NSObject <IDSServiceDelegate, HDSPSource, HDSPEnvironmentAware, HDSPSleepActionObserver>
{
    HDSPEnvironment *_environment;
    id <HDSPIDSService> _service;
    id <HKSPQueueBackedScheduler> _scheduler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HKSPQueueBackedScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) id <HDSPIDSService> service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)_handleNotifiedForEarlyWakeUpMessage:(id)arg1;
- (void)_handleDismissGoodMorningMessage:(id)arg1;
- (void)_handleConfirmWakeUpMessage:(id)arg1;
- (void)_handleSkipBedtimeMessage:(id)arg1;
- (void)_handleDelayBedtimeMessage:(id)arg1;
- (void)_handleSkipWindDownMessage:(id)arg1;
- (void)_handleSetSleepModeMessage:(id)arg1;
- (void)_handleReceivedMessage:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_sendSerializedMessage:(id)arg1 originalMessage:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)goodMorningWasDismissed:(id)arg1;
- (void)wakeNotificationWasConfirmed:(id)arg1;
- (void)bedtimeWasSkipped:(id)arg1;
- (void)bedtimeWasDelayed:(id)arg1;
- (void)windDownWasSkipped:(id)arg1;
- (void)sleepModeSet:(long long)arg1 source:(id)arg2;
- (void)sendNotifiedForEarlyWakeUpMessage;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1 idsService:(id)arg2 scheduler:(id)arg3;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end

