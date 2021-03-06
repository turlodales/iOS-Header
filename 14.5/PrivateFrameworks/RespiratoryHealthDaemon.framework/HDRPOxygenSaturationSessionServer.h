//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <RespiratoryHealthDaemon/HKRPOxygenSaturationSessionServerInterface-Protocol.h>
#import <RespiratoryHealthDaemon/HLOxygenSaturationSessionDelegate-Protocol.h>

@class HLOxygenSaturationSession, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDRPOxygenSaturationSessionServer : HDStandardTaskServer <HKRPOxygenSaturationSessionServerInterface, HLOxygenSaturationSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    long long _sessionState;
    HLOxygenSaturationSession *_sensorSession;
    double _startTime;
    double _expectedDuration;
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void).cxx_destruct;
@property(nonatomic) double expectedDuration; // @synthesize expectedDuration=_expectedDuration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) HLOxygenSaturationSession *sensorSession; // @synthesize sensorSession=_sensorSession;
@property(nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)oxygenSaturationSession:(id)arg1 didEndForReason:(unsigned long long)arg2 measurement:(id)arg3;
- (void)oxygenSaturationSession:(id)arg1 feedbackDidChange:(unsigned long long)arg2;
- (void)oxygenSaturationSession:(id)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3;
- (void)_queue_notifyClientDidEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6;
- (void)_queue_notifyClientDidStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;
- (void)_queue_notifyClientDidSendFeedback:(unsigned long long)arg1;
- (void)_queue_abortSensorSession;
- (void)_queue_abortWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_abortWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_startWithCompletion:(CDUnknownBlockType)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

