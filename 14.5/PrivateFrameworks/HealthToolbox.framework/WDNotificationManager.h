//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthToolbox/UNUserNotificationCenterDelegate-Protocol.h>

@class HKHealthStore, HKNotificationStore, NSMutableDictionary, NSString;

@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate>
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_domainsToPolicies;
    HKNotificationStore *_notificationStore;
    HKHealthStore *_healthStore;
}

+ (void)initialize;
+ (void)setSuppressBadgeNotifications:(_Bool)arg1;
+ (_Bool)suppressBadgeNotifications;
- (void).cxx_destruct;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (id)_lock_policyForNotification:(id)arg1;
- (void)setPolicy:(id)arg1 forDomain:(long long)arg2;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1;
- (void)resetHealthRecordsDataBadge;
- (void)resetEmergencySOSBadge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

