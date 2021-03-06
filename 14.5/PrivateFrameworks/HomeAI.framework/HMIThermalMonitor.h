//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMIThermalMonitor : HMFObject
{
    struct __IOHIDEventSystemClient *_client;
    int _thermalLevelNotificationToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    unsigned long long _thermalLevel;
    NSMutableDictionary *_services;
    HMFUnfairLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly) NSMutableDictionary *services; // @synthesize services=_services;
@property(readonly) unsigned long long thermalLevel; // @synthesize thermalLevel=_thermalLevel;
- (void)dealloc;
- (void)_updateThermalLevel;
- (_Bool)readMaxValue:(double *)arg1;
- (_Bool)readValueFromSensor:(int)arg1 value:(double *)arg2;
- (id)init;

@end

