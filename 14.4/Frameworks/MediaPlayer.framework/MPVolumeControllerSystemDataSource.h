//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPVolumeControllerDataSource-Protocol.h>

@class AVSystemController, NSString;
@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource>
{
    _Bool _debugVolumeWarning;
    _Bool _volumeInitialized;
    _Bool _volumeControlCapabilitiesInitialized;
    AVSystemController *_avSystemController;
    _Bool _volumeControlAvailable;
    _Bool _muted;
    _Bool _volumeWarningEnabled;
    float _volume;
    float _EUVolumeLimit;
    NSString *_volumeAudioCategory;
    id <MPVolumeControllerDataSourceDelegate> _delegate;
    NSString *_volumeControlLabel;
    long long _volumeWarningState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long volumeWarningState; // @synthesize volumeWarningState=_volumeWarningState;
@property(readonly, nonatomic) _Bool volumeWarningEnabled; // @synthesize volumeWarningEnabled=_volumeWarningEnabled;
@property(readonly, nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_EUVolumeLimit;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, copy, nonatomic) NSString *volumeControlLabel; // @synthesize volumeControlLabel=_volumeControlLabel;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property(nonatomic) __weak id <MPVolumeControllerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *volumeAudioCategory; // @synthesize volumeAudioCategory=_volumeAudioCategory;
- (float)_volumeApplyingEUVolumePolicyToVolume:(float)arg1;
- (void)_tearDown;
- (void)_setup;
- (void)_reloadEUVolumeLimits;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_updateRouteLabelForRoute:(id)arg1;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (void)adjustVolumeValue:(float)arg1;
- (void)reloadWarning;
- (void)reload;
- (id)_reloadQueue;
- (id)_mediaPlaybackVolumeAudioCategory;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1;
- (void)updateVolume:(float)arg1;
@property(readonly, nonatomic) _Bool applicationShouldOverrideHardwareVolumeBehavior;
@property(readonly, copy) NSString *description;
- (void)initializeVolume;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

