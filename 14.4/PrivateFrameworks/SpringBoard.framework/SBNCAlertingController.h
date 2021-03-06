//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCAlertingController-Protocol.h>

@class NCNotificationRequest, NSMutableSet, NSString, SBCommunicationPolicyManager, SBLockScreenManager, SBNCScreenController, SBNCSoundController;

@interface SBNCAlertingController : NSObject <NCAlertingController>
{
    SBNCSoundController *_soundController;
    SBNCScreenController *_screenController;
    SBLockScreenManager *_lockScreenManager;
    SBCommunicationPolicyManager *_communicationPolicyManager;
    NCNotificationRequest *_activeRequestWithRealerts;
    NSMutableSet *_realertTimers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *realertTimers; // @synthesize realertTimers=_realertTimers;
@property(retain, nonatomic) NCNotificationRequest *activeRequestWithRealerts; // @synthesize activeRequestWithRealerts=_activeRequestWithRealerts;
@property(retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager; // @synthesize communicationPolicyManager=_communicationPolicyManager;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) SBNCScreenController *screenController; // @synthesize screenController=_screenController;
@property(retain, nonatomic) SBNCSoundController *soundController; // @synthesize soundController=_soundController;
- (void)_scheduleRealertsForNotificationRequest:(id)arg1;
- (void)_realertTimerFired:(id)arg1;
- (void)_killRealertsForNotificationRequest:(id)arg1;
- (_Bool)_shouldRealert;
- (_Bool)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg1;
- (_Bool)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg1;
- (_Bool)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;
- (_Bool)_shouldScreenTimeSuppressNotificationRequest:(id)arg1;
- (_Bool)_activeAlertDestinationsInRequestDestinations:(id)arg1;
- (void)_notificationCenterDidPresent;
- (void)_lockStateChanged;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)_alertNowForNotificationRequest:(id)arg1;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (void)killRealerts;
- (void)killAlertsForNotificationRequest:(id)arg1;
- (void)alertOnPresentationForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2;
- (id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3 communicationPolicyManager:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

