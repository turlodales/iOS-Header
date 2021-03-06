//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/SASBulletinManagerDelegate-Protocol.h>
#import <SiriActivation/SASHeaterDelegate-Protocol.h>
#import <SiriActivation/SASLockStateMonitorDelegate-Protocol.h>
#import <SiriActivation/SASMyriadControllerDelegate-Protocol.h>
#import <SiriActivation/SASPresentationManagerDelegate-Protocol.h>
#import <SiriActivation/SASRequestOptionsBuilderDataSource-Protocol.h>
#import <SiriActivation/SASStateChangeListener-Protocol.h>

@class AFPreferences, AFSiriTether, NSMutableDictionary, NSString, NSTimer, SASBulletinManager, SASHeater, SASLockStateMonitor, SASMyriadController, SASPresentationManager, SASRemoteRequestManager, SASSystemState, SASTestingInputController;
@protocol OS_dispatch_queue;

@interface SiriActivationService : NSObject <SASRequestOptionsBuilderDataSource, SASHeaterDelegate, SASMyriadControllerDelegate, SASLockStateMonitorDelegate, SASBulletinManagerDelegate, SASStateChangeListener, SASPresentationManagerDelegate>
{
    CDUnknownBlockType _buttonTrigger;
    NSString *_preheatedPresentation;
    int _voiceTriggerNotifyToken;
    NSObject<OS_dispatch_queue> *_voiceTriggerDispatchQueue;
    NSTimer *_B188ActivationTimer;
    SASMyriadController *_myriadController;
    _Bool _xcTestingActive;
    _Bool _siriTetherIsAttached;
    _Bool _voiceTriggerNotifyTokenIsValid;
    _Bool _buttonDownHasOccurredSinceActivation;
    _Bool _canActivateFromDirectActionSource;
    _Bool _pocketStateFetchingInProgressForHeadsetActivation;
    SASSystemState *_systemState;
    AFPreferences *_afPreferences;
    SASLockStateMonitor *_lockStateMonitor;
    NSMutableDictionary *_sources;
    SASHeater *_heater;
    AFSiriTether *_siriTether;
    double _activationTimestamp;
    SASBulletinManager *_bulletinManager;
    SASRemoteRequestManager *_remoteRequestManager;
    SASTestingInputController *_testingInputController;
    NSMutableDictionary *_avExternalButtonEvents;
    SASPresentationManager *_presentationManager;
}

+ (id)new;
+ (id)service;
- (void).cxx_destruct;
@property(retain, nonatomic) SASPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(nonatomic, getter=_pocketStateFetchingInProgressForHeadsetActivation, setter=_setPocketStateFetchingInProgressForHeadsetActivation:) _Bool pocketStateFetchingInProgressForHeadsetActivation; // @synthesize pocketStateFetchingInProgressForHeadsetActivation=_pocketStateFetchingInProgressForHeadsetActivation;
@property(nonatomic) _Bool canActivateFromDirectActionSource; // @synthesize canActivateFromDirectActionSource=_canActivateFromDirectActionSource;
@property(nonatomic) _Bool buttonDownHasOccurredSinceActivation; // @synthesize buttonDownHasOccurredSinceActivation=_buttonDownHasOccurredSinceActivation;
@property(retain, nonatomic) NSMutableDictionary *avExternalButtonEvents; // @synthesize avExternalButtonEvents=_avExternalButtonEvents;
@property(retain, nonatomic) SASTestingInputController *testingInputController; // @synthesize testingInputController=_testingInputController;
@property(retain, nonatomic) SASRemoteRequestManager *remoteRequestManager; // @synthesize remoteRequestManager=_remoteRequestManager;
@property(retain, nonatomic) SASBulletinManager *bulletinManager; // @synthesize bulletinManager=_bulletinManager;
@property(nonatomic) _Bool voiceTriggerNotifyTokenIsValid; // @synthesize voiceTriggerNotifyTokenIsValid=_voiceTriggerNotifyTokenIsValid;
@property(nonatomic) double activationTimestamp; // @synthesize activationTimestamp=_activationTimestamp;
@property(nonatomic) _Bool siriTetherIsAttached; // @synthesize siriTetherIsAttached=_siriTetherIsAttached;
@property(retain, nonatomic) AFSiriTether *siriTether; // @synthesize siriTether=_siriTether;
@property(retain, nonatomic) SASHeater *heater; // @synthesize heater=_heater;
@property(retain, nonatomic) NSMutableDictionary *sources; // @synthesize sources=_sources;
@property(nonatomic) _Bool xcTestingActive; // @synthesize xcTestingActive=_xcTestingActive;
@property(retain, nonatomic) SASLockStateMonitor *lockStateMonitor; // @synthesize lockStateMonitor=_lockStateMonitor;
@property(retain, nonatomic) AFPreferences *afPreferences; // @synthesize afPreferences=_afPreferences;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
- (id)_updateRequestOptionsWithTestingContextFromActivationRequest:(id)arg1 requestOptions:(id)arg2;
- (void)pongWithPresentationIdentifier:(long long)arg1;
- (void)presentationManager:(id)arg1 didEncounterError:(long long)arg2;
- (void)presentationManager:(id)arg1 didChangeShouldRejectNewActivationsTo:(_Bool)arg2;
- (void)callStateChangedToIsActive:(_Bool)arg1 isOutgoing:(_Bool)arg2;
- (void)bulletinManagerDidChangeBulletins:(id)arg1;
- (void)markBulletinWithIdentifier:(id)arg1 asRead:(_Bool)arg2;
- (id)bulletinForIdentifier:(id)arg1;
- (id)bulletinsOnLockScreen;
- (id)allBulletins;
- (void)didChangeLockState:(unsigned long long)arg1;
- (void)shouldContinue:(id)arg1;
- (void)shouldAbort:(id)arg1;
- (void)_unregisterForVoiceTrigger;
- (void)_registerForVoiceTrigger;
- (oneway void)activationRequestFromTestRunnerWithContext:(id)arg1;
- (void)heaterSuggestsPreheating:(id)arg1;
- (_Bool)_isInitialRequest;
- (void)updatePredicatedRecordRoute;
- (unsigned long long)requestOptionsBuilder:(id)arg1 currentLockStateForActivation:(id)arg2;
- (id)requestOptionsBuilder:(id)arg1 optionsForOverriding:(id)arg2 withActiviation:(id)arg3;
- (id)requestOptionsBuilder:(id)arg1 uiPresentationIdentifierWithActivation:(id)arg2 activationPresentation:(long long)arg3;
- (_Bool)requestOptionsBuilder:(id)arg1 isAcousticIdAllowedWithActiviation:(id)arg2;
- (_Bool)requestOptionsBuilder:(id)arg1 isPredictedRecordRouteIsZLLWithActiviation:(id)arg2;
- (_Bool)requestOptionsBuilder:(id)arg1 isRequestInitialWithActiviation:(id)arg2;
- (_Bool)requestOptionsBuilder:(id)arg1 shouldRequestUseAutomaticEndpointingWithActiviation:(id)arg2;
- (_Bool)_isVoiceActivationMaskNecessaryWithRequestOptions:(id)arg1;
- (_Bool)_siriIsEnabled;
- (void)_handleDesignModeRequest;
- (void)_cancelPendingActivationEventWithReason:(unsigned long long)arg1;
- (void)_cancelActivationPreparationForSetup;
- (void)_attachToTether;
- (void)_preheatPresentation;
- (void)_cancelTTS;
- (void)_dismissSiri:(id)arg1;
- (void)_handlePocketStateFetchForScreenWakeForPresentationIdentifier:(long long)arg1 requestOptions:(id)arg2 presentationOptions:(id)arg3;
- (_Bool)_shouldHandlePocketStateFetchForRequestOptions:(id)arg1;
- (void)_activatePresentationWithIdentifier:(long long)arg1 requestOptions:(id)arg2 analyticsContext:(id)arg3;
- (void)dismissSiriWithOptions:(id)arg1;
- (_Bool)handleActivationRequest:(id)arg1 systemState:(id)arg2;
- (_Bool)handleActivationRequest:(id)arg1;
- (void)speechRequestStateDidChange:(long long)arg1;
- (void)activationRequestFromTestingWithContext:(id)arg1;
- (void)activationRequestFromVoiceTrigger;
- (void)activationRequestFromSpotlightWithContext:(id)arg1;
- (void)activationRequestFromSimpleActivation:(long long)arg1;
- (void)activationRequestFromBluetoothKeyboardActivation:(long long)arg1;
- (void)activationRequestFromBreadcrumb;
- (void)activationRequestFromVoiceTriggerWithContext:(id)arg1;
- (void)activationRequestFromContinuityWithContext:(id)arg1;
- (void)activationRequestFromDirectActionEvent:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_buttonIsAVExternalButton:(long long)arg1;
- (void)_recordTimeIfNeededForButtonIdentifier:(long long)arg1 buttonDownTimestamp:(double)arg2;
- (void)_handleTapSynthesisIfNeededForButtonIdentifier:(long long)arg1 buttonUpTimestamp:(double)arg2;
- (_Bool)_buttonIsTVMicrophoneButton:(long long)arg1;
- (void)buttonLongPressFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)buttonTapFromButtonIdentifier:(long long)arg1;
- (void)buttonUpFromButtonIdentifier:(long long)arg1 deviceIdentifier:(id)arg2 timestamp:(double)arg3;
- (void)buttonDownFromButtonIdentifier:(long long)arg1 timestamp:(double)arg2;
- (void)cancelPrewarmFromButtonIdentifier:(long long)arg1;
- (void)_defrost;
- (void)prewarmFromButtonIdentifier:(long long)arg1 longPressInterval:(double)arg2;
- (void)deactivationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (void)activationRequestFromButtonIdentifier:(long long)arg1 context:(id)arg2;
- (void)_B188ActivationEvent:(long long)arg1 context:(id)arg2 options:(id)arg3;
- (_Bool)isConnectedTo188;
- (_Bool)presentationsAreIdleAndQuiet;
- (void)unregisterActivationSourceIdentifier:(id)arg1;
- (void)registerActivationSource:(id)arg1 withIdentifier:(id)arg2;
- (void)siriPresentationFailureWithIdentifier:(long long)arg1 error:(id)arg2;
- (void)siriPresentationDismissedWithIdentifier:(long long)arg1;
- (void)siriPresentationWillDismissWithIdentifier:(long long)arg1;
- (void)siriPresentationDisplayedWithIdentifier:(long long)arg1;
- (void)unregisterSiriPresentationIdentifier:(long long)arg1;
- (void)registerSiriPresentation:(id)arg1 withIdentifier:(long long)arg2;
- (void)_notifySourcesOfCanActivateFromDirectActionSourceChange:(_Bool)arg1;
- (void)_updateCanActivateFromDirectActionSource;
- (void)_notifySourcesOfActiveChange:(_Bool)arg1;
- (long long)_requestState;
- (_Bool)_shouldRejectNewActivations:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

