//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Announce/ANTrackPlayerDelegate-Protocol.h>

@class ANTrackPlayer, ANVolumeController, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSUUID;
@protocol ANPlaybackManagerDataSource, ANPlaybackManagerDelegate, OS_dispatch_queue, OS_os_log;

@interface ANPlaybackManager : NSObject <ANTrackPlayerDelegate>
{
    NSUUID *_endpointID;
    id <ANPlaybackManagerDelegate> _delegate;
    id <ANPlaybackManagerDataSource> _dataSource;
    ANVolumeController *_volumeController;
    ANTrackPlayer *_audioPlayer;
    NSMutableDictionary *_playbackInfo;
    NSMutableOrderedSet *_announcementsToPlay;
    long long _lastAnnoucementIndex;
    unsigned long long _playbackOptions;
    NSObject<OS_dispatch_queue> *_playbackQueue;
    CDUnknownBlockType _playbackCompletionHandler;
    NSObject<OS_os_log> *_log;
}

+ (id)managerWithEndpointID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(copy, nonatomic) CDUnknownBlockType playbackCompletionHandler; // @synthesize playbackCompletionHandler=_playbackCompletionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(readonly, nonatomic) unsigned long long playbackOptions; // @synthesize playbackOptions=_playbackOptions;
@property(nonatomic) long long lastAnnoucementIndex; // @synthesize lastAnnoucementIndex=_lastAnnoucementIndex;
@property(retain, nonatomic) NSMutableOrderedSet *announcementsToPlay; // @synthesize announcementsToPlay=_announcementsToPlay;
@property(readonly, nonatomic) NSMutableDictionary *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) ANTrackPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) ANVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(nonatomic) __weak id <ANPlaybackManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ANPlaybackManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSUUID *endpointID; // @synthesize endpointID=_endpointID;
- (void)trackPlayer:(id)arg1 audioSessionInterruptionActive:(_Bool)arg2;
- (void)trackPlayer:(id)arg1 didFinishPlayingTrackType:(long long)arg2 withError:(id)arg3;
- (void)_notifyDelegatePlayerStateDidChange;
- (void)_handlePlaybackEndedForPlayer:(id)arg1 withError:(id)arg2;
- (void)_stopAudioPlayer;
- (_Bool)_startPlayingAnnouncements;
- (void)_setVolume:(unsigned long long)arg1;
- (id)_createTrackPlayerWithPlaybackDeadline:(id)arg1 options:(unsigned long long)arg2 adjustedAnchorPoint:(double *)arg3;
- (id)_nextAnnouncementToPlay;
- (id)_announcementsForPlaybackOptions:(unsigned long long)arg1 fromAnnouncements:(id)arg2;
- (_Bool)_playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_previousAnnouncementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_nextAnnouncementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stopPlayingAnnouncementsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updatePlaybackInfoForAnnouncementID:(id)arg1 options:(unsigned long long)arg2 player:(id)arg3;
@property(readonly) unsigned long long playbackItemCount;
@property(readonly) unsigned long long playbackState;
@property(readonly) NSDictionary *lastPlayedAnnouncementInfo;
- (void)updatePlaybackForAnnouncementID:(id)arg1 options:(unsigned long long)arg2;
- (void)performPlaybackCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEndpointID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

