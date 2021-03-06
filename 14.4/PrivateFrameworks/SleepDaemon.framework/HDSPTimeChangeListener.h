//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPTimeChangeListener : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource>
{
    HDSPEnvironment *environment;
    HKSPObserverSet *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)handleTimeZoneChange;
- (void)handleSignificantTimeChange;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
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

