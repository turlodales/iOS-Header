//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVVolumeController-Protocol.h>

@class AVSystemController, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AVSystemVolumeController : NSObject <AVVolumeController>
{
    _Bool _changingVolume;
    _Bool _currentRouteHasVolumeControl;
    _Bool _EUVolumeLimitEnabled;
    _Bool _EUVolumeLimitOverridden;
    _Bool _volumeChangesThrottled;
    _Bool _canOverrideEUVolumeLimit;
    _Bool _fullyInitialized;
    float _EUVolumeLimit;
    float _volume;
    NSNumber *_targetVolumeInternal;
    NSNumber *_maximumTargetVolumeSinceChangingVolumeBegan;
    NSString *_volumeCategory;
    AVSystemController *_sharedSystemController;
}

+ (id)windowSceneVolumeHUDAssertions;
+ (id)volumeController;
- (void).cxx_destruct;
@property(nonatomic, getter=isFullyInitialized) _Bool fullyInitialized; // @synthesize fullyInitialized=_fullyInitialized;
@property(retain, nonatomic) AVSystemController *sharedSystemController; // @synthesize sharedSystemController=_sharedSystemController;
@property(readonly, nonatomic) NSString *volumeCategory; // @synthesize volumeCategory=_volumeCategory;
@property(retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan; // @synthesize maximumTargetVolumeSinceChangingVolumeBegan=_maximumTargetVolumeSinceChangingVolumeBegan;
@property(retain, nonatomic) NSNumber *targetVolumeInternal; // @synthesize targetVolumeInternal=_targetVolumeInternal;
@property(nonatomic) _Bool canOverrideEUVolumeLimit; // @synthesize canOverrideEUVolumeLimit=_canOverrideEUVolumeLimit;
@property(nonatomic) _Bool volumeChangesThrottled; // @synthesize volumeChangesThrottled=_volumeChangesThrottled;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isEUVolumeLimitOverridden) _Bool EUVolumeLimitOverridden; // @synthesize EUVolumeLimitOverridden=_EUVolumeLimitOverridden;
@property(nonatomic, getter=isEUVolumeLimitEnabled) _Bool EUVolumeLimitEnabled; // @synthesize EUVolumeLimitEnabled=_EUVolumeLimitEnabled;
@property(nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property(nonatomic) _Bool currentRouteHasVolumeControl; // @synthesize currentRouteHasVolumeControl=_currentRouteHasVolumeControl;
@property(nonatomic, getter=isChangingVolume) _Bool changingVolume; // @synthesize changingVolume=_changingVolume;
- (void)_performOnMainThread:(CDUnknownBlockType)arg1;
- (void)_applyProposedVolumeImmediately;
- (void)_applyProposedVolumeIfNeeded;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1;
- (void)_handleSystemVolumeDidChangeNotification:(id)arg1;
- (void)_handleEUVolumeLimitDidChangeNotification:(id)arg1;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_unobserveSystemController;
- (void)_observeSystemController;
- (void)_postNotificationForNameIfFullyInitialized:(id)arg1 userInfo:(id)arg2;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forWindowSceneSessionIdentifier:(id)arg2;
- (void)setSystemVolumeHUDEnabled:(_Bool)arg1 forSceneVolumeHudAssertion:(id)arg2;
- (void)_removeVolumeHUDAssertionsForClientID:(id)arg1;
- (void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(_Bool)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
- (void)endChangingVolume;
- (void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
@property(readonly, nonatomic) float effectiveVolumeLimit;
- (void)setTargetVolume:(float)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

