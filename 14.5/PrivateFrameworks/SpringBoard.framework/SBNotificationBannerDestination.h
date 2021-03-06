//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>
#import <SpringBoard/NCNotificationAlertDestination-Protocol.h>
#import <SpringBoard/NCNotificationManagementContentProviderDelegate-Protocol.h>
#import <SpringBoard/NCNotificationManagementViewPresenterDelegate-Protocol.h>
#import <SpringBoard/NCNotificationPresentableViewControllerDelegate-Protocol.h>
#import <SpringBoard/NCNotificationViewControllerDelegate-Protocol.h>
#import <SpringBoard/NCNotificationViewControllerDelegatePrivate-Protocol.h>
#import <SpringBoard/NCNotificationViewControllerObserving-Protocol.h>
#import <SpringBoard/SBAssistantObserver-Protocol.h>
#import <SpringBoard/SBBacklightControllerObserver-Protocol.h>
#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>
#import <SpringBoard/SBFMotionGestureObserver-Protocol.h>
#import <SpringBoard/SBFNotificationExtensionVisibilityProviding-Protocol.h>
#import <SpringBoard/SBNotificationDestinationHomeButtonPressHandler-Protocol.h>
#import <SpringBoard/SBUICoronaAnimationControllerParticipant-Protocol.h>

@class BSServiceConnectionEndpoint, DNDEventBehaviorResolutionService, NCNotificationManagementViewPresenter, NCNotificationViewController, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBAssistantController, SBDashBoardLegibilityProvider, SBInAppStatusBarHiddenAssertion, SBLockScreenManager, SBNotificationPresentableViewController, SBSetupManager, UIApplicationSceneDeactivationAssertion;
@protocol BNPresentable, BSInvalidatable, NCNotificationAlertDestinationDelegate, OS_dispatch_source;

@interface SBNotificationBannerDestination : NSObject <NCNotificationViewControllerDelegatePrivate, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, SBFMotionGestureObserver, SBAssistantObserver, NCNotificationManagementContentProviderDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationPresentableViewControllerDelegate, SBUICoronaAnimationControllerParticipant, SBBacklightControllerObserver, NCNotificationAlertDestination, SBNotificationDestinationHomeButtonPressHandler, SBFNotificationExtensionVisibilityProviding, NCNotificationViewControllerDelegate, NCNotificationViewControllerObserving>
{
    _Bool _userInteractionInProgress;
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBAssistantController *_assistantController;
    SBLockScreenManager *_lockScreenManager;
    SBSetupManager *_setupManager;
    SBNotificationPresentableViewController *_presentedPresentableVC;
    NCNotificationViewController *_notificationViewControllerForActiveDragSession;
    NSObject<OS_dispatch_source> *_presentTimer;
    NSObject<OS_dispatch_source> *_replaceTimer;
    NSObject<OS_dispatch_source> *_dismissTimer;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBAppStatusBarSettingsAssertion *_systemStatusBarAssertion;
    SBInAppStatusBarHiddenAssertion *_appsStatusBarAssertion;
    NSMutableSet *_destinationObservers;
    id <BSInvalidatable> _idleTimerDisableAssertion;
    id <BSInvalidatable> _starModeDisableAssertion;
    id <BSInvalidatable> _bannerGestureRecognizerPriorityAssertion;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    NCNotificationManagementViewPresenter *_notificationManagementPresenter;
    SBDashBoardLegibilityProvider *_dashBoardLegibilityProvider;
    id <BNPresentable> _presentablePendingSnapshot;
}

+ (id)_test_notificationRequestForBannerWithIcon;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BNPresentable> presentablePendingSnapshot; // @synthesize presentablePendingSnapshot=_presentablePendingSnapshot;
@property(retain, nonatomic) SBDashBoardLegibilityProvider *dashBoardLegibilityProvider; // @synthesize dashBoardLegibilityProvider=_dashBoardLegibilityProvider;
@property(retain, nonatomic) NCNotificationManagementViewPresenter *notificationManagementPresenter; // @synthesize notificationManagementPresenter=_notificationManagementPresenter;
@property(retain, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService; // @synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService;
@property(retain, nonatomic) id <BSInvalidatable> bannerGestureRecognizerPriorityAssertion; // @synthesize bannerGestureRecognizerPriorityAssertion=_bannerGestureRecognizerPriorityAssertion;
@property(retain, nonatomic) id <BSInvalidatable> starModeDisableAssertion; // @synthesize starModeDisableAssertion=_starModeDisableAssertion;
@property(retain, nonatomic) id <BSInvalidatable> idleTimerDisableAssertion; // @synthesize idleTimerDisableAssertion=_idleTimerDisableAssertion;
@property(retain, nonatomic) NSMutableSet *destinationObservers; // @synthesize destinationObservers=_destinationObservers;
@property(retain, nonatomic) SBInAppStatusBarHiddenAssertion *appsStatusBarAssertion; // @synthesize appsStatusBarAssertion=_appsStatusBarAssertion;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *systemStatusBarAssertion; // @synthesize systemStatusBarAssertion=_systemStatusBarAssertion;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion; // @synthesize resignActiveAssertion=_resignActiveAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *replaceTimer; // @synthesize replaceTimer=_replaceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *presentTimer; // @synthesize presentTimer=_presentTimer;
@property(nonatomic, getter=isUserInteractionInProgress) _Bool userInteractionInProgress; // @synthesize userInteractionInProgress=_userInteractionInProgress;
@property(retain, nonatomic, getter=_notificationViewControllerForActiveDragSession, setter=_setNotificationViewControllerForActiveDragSession:) NCNotificationViewController *notificationViewControllerForActiveDragSession; // @synthesize notificationViewControllerForActiveDragSession=_notificationViewControllerForActiveDragSession;
@property(retain, nonatomic, setter=_setPresentedPresentableVC:) SBNotificationPresentableViewController *presentedPresentableVC; // @synthesize presentedPresentableVC=_presentedPresentableVC;
@property(retain, nonatomic) SBSetupManager *setupManager; // @synthesize setupManager=_setupManager;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBAssistantController *assistantController; // @synthesize assistantController=_assistantController;
@property(nonatomic) __weak id <NCNotificationAlertDestinationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
- (void)conformsToCSExternalBehaviorProviding;
- (void)conformsToCSBehaviorProviding;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)assistantDidDisappear:(id)arg1;
- (void)_dismissBannerCompleted:(id)arg1;
- (void)_dismissPresentedBannerOnly:(_Bool)arg1 reason:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)_shouldDismissPresentedBannerPerformingPreludeForcingIfSticky:(_Bool)arg1;
- (void)_dismissPresentedBannerOnly:(_Bool)arg1 reason:(id)arg2 animated:(_Bool)arg3 forceIfSticky:(_Bool)arg4;
- (void)_dismissPresentedBannerAnimated:(_Bool)arg1 reason:(id)arg2 forceIfSticky:(_Bool)arg3;
- (void)_performCancelAction;
- (void)_performSilenceAction;
- (void)_setupSystemStateChangeNotifications;
- (void)_setupTimers;
- (void)_cancelReplaceAndDismissTimers;
- (void)_cancelDismissTimer;
- (void)_cancelReplaceTimer;
- (void)_startReplaceAndDismissTimersForRequest:(id)arg1;
- (void)_startDismissTimer;
- (void)_startReplaceTimer;
- (id)_startTimerWithDelay:(unsigned long long)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (void)_resetPresentTimer;
- (void)_presentNotificationViewController:(id)arg1 modal:(_Bool)arg2 forRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_dashBoardLegibilitySettings;
- (id)_notificationViewControllerForRequest:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (_Bool)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (_Bool)_shouldScreenTimeSuppressNotificationRequest:(id)arg1;
- (_Bool)_isInSetupMode;
- (_Bool)_isPresentingBannerPreventingAutomaticLock;
- (_Bool)_isPresentingBannerWithHiddenPreview;
- (_Bool)_isPresentingBannerRequestingRaiseGesture;
- (_Bool)_isPresentedBannerBeingDragged;
- (_Bool)_isDismissingLongLookForBanner;
- (_Bool)_isPresentingBannerInLongLook;
- (_Bool)_isShowingShortLookAtRest;
- (_Bool)_isPresentingStickyBanner;
- (_Bool)_isPresentingBanner;
- (void)_publishDidPresentBannerForNotificationRequest:(id)arg1;
- (_Bool)_shouldAllowDragInteraction;
- (id)_notificationSectionSettingsForSectionIdentifier:(id)arg1;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (_Bool)_canReceiveNotificationRequestIfLocked:(id)arg1;
- (void)_setStatusBarsHidden:(_Bool)arg1 withDuration:(double)arg2;
- (_Bool)_shouldHideStatusBar;
- (_Bool)_presentedBannerMatchesNotificationRequest:(id)arg1;
- (void)_postNotificationRequest:(id)arg1 modal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setReadyForNotificationRequestsCoalescingWith:(id)arg1;
- (void)_setReadyForNotificationRequests;
- (void)_setupModeChanged;
- (_Bool)_isDeviceAuthenticated;
- (_Bool)_isUILocked;
- (void)_lockStateChanged;
- (void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (void)_updateMotionGestureObservation;
- (void)didReceiveRaiseGesture;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (id)notificationViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(_Bool)arg3;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (_Bool)notificationViewControllerShouldAllowDragInteraction:(id)arg1;
- (_Bool)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1;
- (_Bool)notificationViewControllerShouldSupportClickPresentationInteraction:(id)arg1;
- (_Bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (_Bool)notificationViewControllerShouldPan:(id)arg1;
- (void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 session:(id)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 session:(id)arg3 willEndWithOperation:(unsigned long long)arg4;
- (void)notificationViewController:(id)arg1 dragInteraction:(id)arg2 sessionWillBegin:(id)arg3;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewControllerWillDismissForCancelAction:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationPresentableViewController:(id)arg1 presentationSize:(out struct CGSize *)arg2 containerSize:(out struct CGSize *)arg3;
- (_Bool)notificationPresentableViewControllerShouldPresentLongLook:(id)arg1;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)destinationDidBecomeDisabled;
- (void)prepareDestinationToReceiveCriticalNotificationRequest:(id)arg1;
- (_Bool)handleHomeButtonPress;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isAlertDestination) _Bool alertDestination;
- (void)unregisterNotificationBannerDestinationObserver:(id)arg1;
- (void)registerNotificationBannerDestinationObserver:(id)arg1;
- (void)presentModalBannerAndExpandForNotificationRequest:(id)arg1;
@property(readonly, nonatomic, getter=isPreventingAutomaticLock) _Bool preventingAutomaticLock;
- (struct CGRect)presentedBannerScreenFrame;
@property(readonly, nonatomic, getter=isPresentingEmergencyNotification) _Bool presentingEmergencyNotification;
@property(readonly, nonatomic, getter=isPresentingBannerInLongLook) _Bool presentingBannerInLongLook;
@property(readonly, nonatomic, getter=isPresentingStickyBanner) _Bool presentingStickyBanner;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
- (_Bool)shouldDismissForReason:(id)arg1;
- (_Bool)_shouldForceDismisssIfSticyForReason:(id)arg1;
- (_Bool)shouldAcquireWindowLevelAssertion;
- (void)dealloc;
- (id)init;
- (void)_test_dismissNotificationRequest:(id)arg1;
- (void)_test_postNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, retain, nonatomic) NCNotificationViewController *presentedBanner;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

