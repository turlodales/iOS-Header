//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject
{
    NSMutableSet *_watcherWrappers;
    unsigned long long _availabilityState;
    unsigned long long _simulatedAvailablityState;
}

+ (id)sharedMonitor;
+ (void)initialize;
- (void).cxx_destruct;
@property unsigned long long simulatedAvailablityState; // @synthesize simulatedAvailablityState=_simulatedAvailablityState;
@property unsigned long long availabilityState; // @synthesize availabilityState=_availabilityState;
@property(retain, nonatomic) NSMutableSet *watcherWrappers; // @synthesize watcherWrappers=_watcherWrappers;
- (void)simulateFirstUnlockForUnitTests;
- (void)simulateBuddyCompletedForUnitTests;
- (void)resetToUnavailableForUnitTests;
- (_Bool)registerWatcher:(id)arg1;
- (void)_systemMayNowBeReady;
- (void)_clearVanishedWatchers;
- (void)_logAvailabilityDescription;
- (unsigned long long)currentAvailabilityState;
- (void)dealloc;
- (void)removeNotifications;
- (id)_init;

@end

