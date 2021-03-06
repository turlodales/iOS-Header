//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthMenstrualCyclesDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HealthMenstrualCyclesDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDMCAnalysisManager, HDPeriodicActivity, HDProfile, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMCAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>
{
    HDMCAnalysisManager *_analysisManager;
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_queue_submitAnalyticsWithActivityCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;
- (void)daemonReady:(id)arg1;
- (double)_retryInterval;
- (double)_submissionInterval;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

