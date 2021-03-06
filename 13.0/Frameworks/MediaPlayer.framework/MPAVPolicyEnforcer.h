//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController;

@interface MPAVPolicyEnforcer : NSObject
{
    int _screenRecordingNotifyToken;
    _Bool _lastKnownScreenRecordingState;
    MPAVController *_controller;
}

@property(readonly, nonatomic) __weak MPAVController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_unregisterForScreenRecordingNotifications;
- (void)_updateScreenRecordingState;
- (void)_registerForScreenRecordingNotifications;
- (void)_isScreenRecordingDidChange:(_Bool)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)initWithAVController:(id)arg1;

@end

