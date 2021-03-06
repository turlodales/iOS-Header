//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBProximitySensorControlling-Protocol.h>

@class NSMutableArray, NSString, SBHIDUILockAssertion;
@protocol BSInvalidatable;

@interface SBHIDInterface : NSObject <SBProximitySensorControlling>
{
    unsigned long long _lockState;
    NSMutableArray *_assertions;
    id <BSInvalidatable> _dispatchingAssertion;
    id <BSInvalidatable> _dispatchingAssertionForVoiceCommand;
    SBHIDUILockAssertion *_pocketTouchesAssertion;
    _Bool _proximityDetectionEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resetProximityCalibration;
@property(nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
- (id)suspendMultitouchForSource:(long long)arg1 reason:(id)arg2;
- (id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(_Bool)arg2 reason:(id)arg3;
- (id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;
- (void)reevaluateHIDLockAssertionsForSource:(long long)arg1;
- (void)removeHIDLockAssertion:(id)arg1 source:(long long)arg2;
- (id)addStartupHIDLockAssertion;
@property(nonatomic) _Bool pocketTouchesExpected;
- (id)_suspendProximity:(_Bool)arg1 suspendMultitouch:(_Bool)arg2 disableTapToWake:(_Bool)arg3 source:(long long)arg4 reason:(id)arg5;
- (void)_reevaluateLockStateForSource:(long long)arg1;
- (void)_setLockState:(unsigned long long)arg1 source:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

