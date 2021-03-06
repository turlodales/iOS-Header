//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSAlbumSharingDaemonDelegate-Protocol.h"
#import "MSMediaStreamDaemonDelegate-Protocol.h"

@class MSIOSAlbumSharingDaemon, MSIOSMediaStreamDaemon, NSString, NSTimer;

@interface MediaStreamMonitor : NSObject <MSMediaStreamDaemonDelegate, MSAlbumSharingDaemonDelegate>
{
    NSTimer *_idleTimer;
    _Bool _lastNotifiedState;
    NSTimer *_idleStateNotificationTimer;
    MSIOSMediaStreamDaemon *_daemon;
    MSIOSAlbumSharingDaemon *_albumSharingDaemon;
    int _busyCount;
    NSTimer *_photoStreamDaemonPokeTimer;
    NSTimer *_albumSharingDaemonPokeTimer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MSIOSAlbumSharingDaemon *albumSharingDaemon; // @synthesize albumSharingDaemon=_albumSharingDaemon;
@property(nonatomic) __weak MSIOSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
- (void)doNothingTimer:(id)arg1;
- (void)idleStateNotificationTimerDidFire:(id)arg1;
- (void)mstreamdIdleTimerDidFire:(id)arg1;
- (void)albumSharingDaemonPokeTimerDidFire:(id)arg1;
- (void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1;
- (void)MSAlbumSharingDaemonDidUnidle:(id)arg1;
- (void)MSAlbumSharingDaemonDidIdle:(id)arg1;
- (void)photoStreamDaemonPokeTimerDidFire:(id)arg1;
- (void)mediaStreamDaemonDidUnidle:(id)arg1;
- (void)mediaStreamDaemonDidIdle:(id)arg1;
- (void)_didUnidle;
- (void)_resetIdleTimer;
- (void)_didIdle;
- (void)_stopIdleTimer;
- (void)_startIdleTimerWithInterval:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)_dormantTimerWithSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

