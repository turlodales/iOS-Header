//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HKSPSleepLockScreenServer-Protocol.h>
#import <SleepDaemon/NSXPCListenerDelegate-Protocol.h>

@class HDSPEnvironment, NSString, NSXPCConnection, NSXPCListener, SBSLockScreenRemoteContentAssertion;
@protocol HDSPSleepLockScreenAssertionManagerDelegate;

__attribute__((visibility("hidden")))
@interface HDSPSleepLockScreenAssertionManager : NSObject <HKSPSleepLockScreenServer, NSXPCListenerDelegate, HDSPEnvironmentAware>
{
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    HDSPEnvironment *_environment;
    id <HDSPSleepLockScreenAssertionManagerDelegate> _delegate;
    SBSLockScreenRemoteContentAssertion *_lockScreenAssertion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBSLockScreenRemoteContentAssertion *lockScreenAssertion; // @synthesize lockScreenAssertion=_lockScreenAssertion;
@property(nonatomic) __weak id <HDSPSleepLockScreenAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)didDismissWithReason:(long long)arg1;
- (void)connect;
- (void)invalidateAssertion;
- (void)sendLockScreenState:(long long)arg1 userInfo:(id)arg2;
- (void)takeAssertionIfNeeded;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

