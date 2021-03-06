//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIAssertionControllerSubject-Protocol.h>
#import <UIKitCore/_UIKeyboardArbitrationClient-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardControllerDelegate-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardDistributedViewSource-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardsEventObserverDelegate-Protocol.h>

@class FBSScene, FBSSceneIdentityToken, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSXPCConnection, UIRemoteKeyboardWindow, UIScreen, UIView, UIWindowScene, _UIAssertionController, _UIKeyboardChangedInformation, _UIRemoteKeyboardsEventObserver;
@protocol _UIKeyboardArbitration;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate, _UIRemoteKeyboardsEventObserverDelegate, _UIAssertionControllerSubject>
{
    NSHashTable *_windowControllers;
    int _ignoreLayoutSubviews;
    FBSScene *_requiredScene;
    double _requiredLevel;
    NSMutableArray *_activePIDs;
    UIView *_keyboardSnapshot;
    _Bool _expectingInitialState;
    int _hostedCount;
    FBSSceneIdentityToken *_focusedSceneIdentity;
    _Bool _hadFocusBeforeOverlay;
    UIWindowScene *_suppressedScene;
    _Bool _expectedSuppression;
    int _externalSuppression;
    int _recursionCheck;
    NSMutableSet *_pendingKeyboardGrabs;
    _Bool _takingSnapshot;
    _Bool _windowEnabled;
    UIScreen *_lastScreen;
    _Bool _disablingKeyboard;
    double _iavHeight;
    NSMapTable *_minimumKeyboardHeights;
    _UIRemoteKeyboardsEventObserver *_eventObserver;
    long long _keyboardSource;
    _UIAssertionController *_assertionController;
    _Bool _enableMultiscreenHack;
    _Bool _currentKeyboard;
    _Bool _didSignalKeyboardChangedForCurrentKeyboard;
    _Bool _updatingKeyWindow;
    _Bool _updatingHeight;
    _Bool _handlingRemoteEvent;
    _Bool _shouldFence;
    long long _lastEventSource;
    NSXPCConnection *_connection;
    _UIKeyboardChangedInformation *_currentState;
    _UIKeyboardChangedInformation *_backupState;
}

+ (id)createArbiterConnection;
+ (id)serviceName;
+ (_Bool)useSystemService;
+ (id)sharedRemoteKeyboards;
+ (_Bool)enabled;
@property(nonatomic) _Bool shouldFence; // @synthesize shouldFence=_shouldFence;
@property(readonly) _Bool handlingRemoteEvent; // @synthesize handlingRemoteEvent=_handlingRemoteEvent;
@property(readonly) _Bool updatingHeight; // @synthesize updatingHeight=_updatingHeight;
@property(getter=isUpdatingKeyWindow) _Bool updatingKeyWindow; // @synthesize updatingKeyWindow=_updatingKeyWindow;
@property _Bool didSignalKeyboardChangedForCurrentKeyboard; // @synthesize didSignalKeyboardChangedForCurrentKeyboard=_didSignalKeyboardChangedForCurrentKeyboard;
@property _Bool currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property(retain) _UIKeyboardChangedInformation *backupState; // @synthesize backupState=_backupState;
@property(retain) _UIKeyboardChangedInformation *currentState; // @synthesize currentState=_currentState;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool enableMultiscreenHack; // @synthesize enableMultiscreenHack=_enableMultiscreenHack;
@property(readonly, nonatomic) long long lastEventSource; // @synthesize lastEventSource=_lastEventSource;
@property(copy, nonatomic) FBSSceneIdentityToken *focusedSceneIdentity; // @synthesize focusedSceneIdentity=_focusedSceneIdentity;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)willAddDeactivationReason:(id)arg1;
- (_Bool)shouldAllowInputViewsRestoredForId:(id)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)peekApplicationEvent:(id)arg1;
- (_Bool)_sceneFocusUpdatePermittedForWindow:(id)arg1;
- (void)queue_setLastEventSource:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (void)_updateEventSource:(long long)arg1 options:(unsigned long long)arg2;
- (void)_postInputSourceDidChangeNotification;
- (void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)forceKeyboardAway;
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)assertionActivationStateChangedToState:(_Bool)arg1 forType:(unsigned long long)arg2;
- (_Bool)assertionActivationStateForType:(unsigned long long)arg1;
- (id)vendKeyboardSuppressionAssertionForReason:(id)arg1;
@property _Bool disableBecomeFirstResponder;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSuppressingKeyboard:(_Bool)arg1 forScene:(id)arg2;
- (_Bool)hasAnyHostedViews;
@property(readonly, retain) NSArray *currentHostedPIDs;
- (void)updateFocusedIdentityIfPermittedForHostWindow:(id)arg1 servicePID:(int)arg2;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2 forScene:(id)arg3;
@property(readonly) UIRemoteKeyboardWindow *keyboardWindow;
@property(readonly) _Bool remoteKeyboardUndocked;
@property(readonly) _Bool keyboardActive;
@property(readonly, nonatomic) struct CGRect keyboardFrameIncludingRemoteIAV;
@property(readonly) double iavHeight;
- (double)intersectionHeightForWindowScene:(id)arg1;
- (_Bool)hasLocalMinimumKeyboardHeightForScene:(id)arg1;
- (_Bool)refreshWithLocalMinimumKeyboardHeight:(double)arg1 forScene:(id)arg2;
@property(readonly) _Bool keyboardVisible;
- (void)finishWithHostedWindow;
- (id)prepareForHostedWindowWithScene:(id)arg1;
- (id)_activeScreen;
- (void)performOnDistributedControllers:(CDUnknownBlockType)arg1;
- (void)_performOnDistributedControllersExceptSelf:(CDUnknownBlockType)arg1;
- (void)performOnControllers:(CDUnknownBlockType)arg1;
- (void)unregisterController:(id)arg1;
- (void)registerController:(id)arg1;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (id)viewHostForWindow:(id)arg1;
- (void)prepareToMoveKeyboard:(struct CGRect)arg1 withIAV:(struct CGRect)arg2 isIAVRelevant:(_Bool)arg3 showing:(_Bool)arg4 notifyRemote:(_Bool)arg5 forScene:(id)arg6;
- (void)updateLastScreen:(id)arg1;
- (_Bool)wantsToShowKeyboardForViewServiceHostWindow:(id)arg1;
- (_Bool)wantsToShowKeyboardForWindow:(id)arg1;
- (_Bool)isOnScreenRotating;
- (_Bool)allowedToShowKeyboard;
- (_Bool)needsToShowKeyboardForViewServiceHostWindow:(id)arg1;
- (_Bool)needsToShowKeyboardForWindow:(id)arg1;
- (void)_updateProxySceneIdentity;
- (void)_updateFocusedSceneIdentityIfPermittedForWindow:(id)arg1 force:(_Bool)arg2;
- (void)keyWindowDidChange:(id)arg1;
- (void)keyWindowWillChange:(id)arg1;
- (void)applicationResume:(id)arg1;
- (void)willLock:(id)arg1;
- (void)willResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)_lostWindow:(id)arg1;
- (void)setWindowEnabled:(_Bool)arg1 force:(_Bool)arg2;
- (void)setWindowEnabled:(_Bool)arg1;
@property(readonly, retain) FBSScene *requiredScene;
@property(readonly) _Bool oldPathForSnapshot;
@property(nonatomic) _Bool isSnapshotting;
- (void)checkState;
- (void)sceneUpdated;
- (void)reloadForSnapshotting;
- (Class)keyboardWindowClass;
- (void)checkConnection;
- (void)cleanSuppression;
- (void)stopConnection;
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_sceneBecameFocused:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)keyboardChangedCompleted;
- (_Bool)didHandleKeyboardChange:(id)arg1 shouldConsiderSnapshottingKeyboard:(_Bool)arg2 isLocalEvent:(_Bool)arg3;
- (void)resetSnapshotWithWindowCheck:(_Bool)arg1;
- (void)startConnection;
- (void)queue_failedConnection:(id)arg1;
- (void)queue_activeProcessResignWithCompletion:(CDUnknownBlockType)arg1;
- (void)signalToProxyKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)updateCurrentState:(id)arg1;
- (_Bool)currentStateHasEqualRect:(struct CGRect)arg1 andIAVPosition:(struct CGRect)arg2;
@property(readonly) id <_UIKeyboardArbitration> proxy;
- (void)dealloc;
- (id)init;
- (void)setPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3 generateSplitNotification:(_Bool)arg4;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

