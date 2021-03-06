//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDBackgroundTaskScheduler, HDPluginManager, HDPrimaryProfile, NSArray, NSObject, NSString, Protocol, _HKBehavior;
@protocol HDHealthDaemonActivatedObserver, HDHealthDaemonReadyObserver, HDNanoAlertSuppressionService, OS_dispatch_queue;

@protocol HDHealthDaemon <NSObject>
@property(readonly, nonatomic) _HKBehavior *behavior;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
- (NSArray *)daemonExtensionsConformingToProtocol:(Protocol *)arg1;
- (id)daemonExtensionWithIdentifier:(NSString *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)registerDaemonActivatedObserver:(id <HDHealthDaemonActivatedObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)registerDaemonReadyObserver:(id <HDHealthDaemonReadyObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
@end

