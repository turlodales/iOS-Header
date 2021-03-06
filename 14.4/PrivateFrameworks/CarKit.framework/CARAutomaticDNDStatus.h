//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CARAutomaticDNDStatus : NSObject
{
    unsigned long long _cachedAutomaticDNDActiveState;
    CDUnknownBlockType _statusChangeObserver;
    CDUnknownBlockType _exitConfirmationChangeObserver;
    NSXPCConnection *_connection;
}

+ (_Bool)isAutomaticDNDAvailable;
+ (id)_DNDServiceInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType exitConfirmationChangeObserver; // @synthesize exitConfirmationChangeObserver=_exitConfirmationChangeObserver;
@property(copy, nonatomic) CDUnknownBlockType statusChangeObserver; // @synthesize statusChangeObserver=_statusChangeObserver;
@property(readonly, nonatomic) unsigned long long cachedAutomaticDNDActiveState; // @synthesize cachedAutomaticDNDActiveState=_cachedAutomaticDNDActiveState;
- (void)_detachObservers;
- (void)_notifyExitConfirmationActive:(_Bool)arg1;
- (void)_fetchStatusForObserver;
- (void)_performCARPreferencesBlock:(CDUnknownBlockType)arg1 forReading:(_Bool)arg2;
- (id)disableTimerTimestamp;
- (void)setDisableTimerTimestamp:(id)arg1;
- (id)firstBuddyPresentationFirstMoment;
- (void)setFirstBuddyPresentationFirstMoment:(id)arg1;
- (void)setMostRecentTriggerMethodChange:(double)arg1;
- (double)mostRecentTriggerMethodChange;
- (_Bool)shouldActivateWithCarPlay;
- (void)setActivateWithCarPlay:(_Bool)arg1;
- (_Bool)hasAdjustedTriggerMethod;
- (void)setHasAdjustedTriggerMethod:(_Bool)arg1;
- (_Bool)hasOptedOutOfAutomaticDND;
- (void)setOptedOutOfAutomaticDND:(_Bool)arg1;
- (_Bool)isAutomaticDNDInternalDNDBuddyPreference;
- (void)setAutomaticDNDInternalDNDBuddyEnabledPreference:(_Bool)arg1;
- (_Bool)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(_Bool)arg1;
- (_Bool)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(_Bool)arg1;
- (unsigned long long)automaticDNDTriggeringMethod;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)arg1;
- (_Bool)hasStartedFirstRidePreference;
- (void)setStartedFirstRidePreference:(_Bool)arg1;
- (_Bool)hasCompletedFirstRidePreference;
- (void)setCompletedFirstRidePreference:(_Bool)arg1;
- (_Bool)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(_Bool)arg1;
- (_Bool)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(_Bool)arg1;
- (void)disableDNDUntilEndOfDriveWithReply:(CDUnknownBlockType)arg1;
- (void)disableDNDUntilEndOfDriveWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(CDUnknownBlockType)arg1;
- (_Bool)shouldEnforceInternalWhitelist;
- (_Bool)platformSupportsUrgentMessages;
- (_Bool)platformSupportsSendingAutoReplies;
- (void)outputOfDiagnosticUtilityWithReply:(CDUnknownBlockType)arg1;
- (void)setAutoReplyMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)autoReplyMessageWithReply:(CDUnknownBlockType)arg1;
- (void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)allowedAutoReplyAudience:(CDUnknownBlockType)arg1;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(CDUnknownBlockType)arg1;
- (void)setAutomaticDNDActive:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_resetUserDNDSettingsWithReply:(CDUnknownBlockType)arg1;
- (void)_completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_xpcFetchWithServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)fetchAutomaticDNDAssertionWithReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)_setupConnection;
- (id)init;

@end

