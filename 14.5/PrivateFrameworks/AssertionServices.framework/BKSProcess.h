//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSLaunchdJobSpecification, BKSProcessAssertion, BKSProcessExitContext, BSProcessHandle, RBSAssertion, RBSProcessHandle, RBSProcessIdentity, RBSProcessMonitor;
@protocol BKSProcessDelegate;

@interface BKSProcess : NSObject
{
    struct os_unfair_lock_s _lock;
    _Bool _bootstrapped;
    RBSProcessIdentity *_identity;
    RBSProcessHandle *_processHandle;
    BKSLaunchdJobSpecification *_jobSpec;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    BKSProcessExitContext *_lastExitContext;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
    BKSProcessAssertion *_accessoryAssertion;
    RBSAssertion *_visibilityAssertion;
    _Bool _workspaceLocked;
    _Bool _connectedToExternalAccessories;
    _Bool _nowPlayingWithAudio;
    _Bool _recordingAudio;
    id <BKSProcessDelegate> _delegate;
    long long _visibility;
    long long _taskState;
    long long _terminationReason;
    BSProcessHandle *_handle;
}

+ (id)busyExtensionInstances:(id)arg1;
+ (double)backgroundTimeRemaining;
+ (id)currentProcess;
- (void).cxx_destruct;
@property(nonatomic) _Bool recordingAudio; // @synthesize recordingAudio=_recordingAudio;
@property(nonatomic) _Bool nowPlayingWithAudio; // @synthesize nowPlayingWithAudio=_nowPlayingWithAudio;
@property(nonatomic) _Bool connectedToExternalAccessories; // @synthesize connectedToExternalAccessories=_connectedToExternalAccessories;
@property(nonatomic) _Bool workspaceLocked; // @synthesize workspaceLocked=_workspaceLocked;
@property(readonly, nonatomic) BSProcessHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) long long terminationReason; // @synthesize terminationReason=_terminationReason;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
- (id)description;
- (_Bool)_bootstrapWithError:(out id *)arg1;
- (void)_lock_configureMonitor;
- (void)_lock_updateVisibility;
@property(readonly, nonatomic) BKSProcessExitContext *lastExitContext;
@property(readonly, nonatomic) double backgroundTimeRemaining;
@property(nonatomic) __weak id <BKSProcessDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long taskState; // @synthesize taskState=_taskState;
- (void)invalidate;
- (_Bool)bootstrapWithSpecification:(id)arg1 error:(out id *)arg2;
- (_Bool)bootstrapWithProcessHandle:(id)arg1 error:(out id *)arg2;
- (id)initWithPID:(int)arg1 bundlePath:(id)arg2 visibility:(long long)arg3 workspaceLocked:(_Bool)arg4 queue:(id)arg5;
- (id)initWithProcessIdentity:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;
- (void)bootstrapCurrentProcess;

@end

