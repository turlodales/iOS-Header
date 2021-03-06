//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantUI/FBApplicationUpdateScenesTransactionObserver-Protocol.h>
#import <AssistantUI/FBSceneObserver-Protocol.h>

@class AFUISceneConfiguration, BKSProcessAssertion, FBApplicationUpdateScenesTransaction, FBScene, NSString;
@protocol AFUISceneControllerDelegate;

@interface AFUISceneController : NSObject <FBSceneObserver, FBApplicationUpdateScenesTransactionObserver>
{
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_createTransaction;
    BKSProcessAssertion *_backgroundRunningAssertion;
    AFUISceneConfiguration *_pendingConfigurationToApply;
    _Bool _sceneForeground;
    unsigned long long _invalidationReason;
    id <AFUISceneControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AFUISceneControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transaction:(id)arg1 didLaunchProcess:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)_recordSceneCreateEnd;
- (void)_recordSceneCreateBegin;
- (id)_currentConfiguration;
- (void)invalidateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)cancelSceneLoadingTimeOut;
- (void)startSceneLoadingTimeOutTimerWithDuration:(double)arg1;
- (void)sceneLoadingTimeOutDidOccur;
- (void)updateSceneViewWithConfiguration:(id)arg1;
- (void)requestSceneViewWithConfiguration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

