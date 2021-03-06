//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ANAudioSessionManager, AVAudioSession, AVQueuePlayer, NSMutableArray, NSString, NSURL, NSUUID;
@protocol ANTrackPlayerDelegate, OS_dispatch_group, OS_dispatch_queue, OS_os_log;

@interface ANTrackPlayer : NSObject
{
    _Bool _readyToPlay;
    id <ANTrackPlayerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _playbackState;
    AVQueuePlayer *_queuePlayer;
    NSObject<OS_dispatch_group> *_playerStartGroup;
    double _silenceBetweenEachTrack;
    NSURL *_audioFileAtStart;
    double _trimStartTone;
    NSURL *_audioFileTransition;
    double _trimTransitionTone;
    double _previousSkipGoesToPreviousTrackDelta;
    AVAudioSession *_audioSession;
    NSMutableArray *_playerItems;
    NSUUID *_endpointUUID;
    NSObject<OS_os_log> *_log;
    double _interruptionStart;
    unsigned long long _options;
    ANAudioSessionManager *_audioSessionManager;
}

+ (unsigned long long)secondsToMachTime:(double)arg1;
+ (double)machTimeToSeconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool readyToPlay; // @synthesize readyToPlay=_readyToPlay;
@property(readonly, nonatomic) ANAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property double interruptionStart; // @synthesize interruptionStart=_interruptionStart;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) NSUUID *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
@property(readonly, nonatomic) NSMutableArray *playerItems; // @synthesize playerItems=_playerItems;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property double previousSkipGoesToPreviousTrackDelta; // @synthesize previousSkipGoesToPreviousTrackDelta=_previousSkipGoesToPreviousTrackDelta;
@property double trimTransitionTone; // @synthesize trimTransitionTone=_trimTransitionTone;
@property(retain, nonatomic) NSURL *audioFileTransition; // @synthesize audioFileTransition=_audioFileTransition;
@property double trimStartTone; // @synthesize trimStartTone=_trimStartTone;
@property(retain, nonatomic) NSURL *audioFileAtStart; // @synthesize audioFileAtStart=_audioFileAtStart;
@property double silenceBetweenEachTrack; // @synthesize silenceBetweenEachTrack=_silenceBetweenEachTrack;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *playerStartGroup; // @synthesize playerStartGroup=_playerStartGroup;
@property(retain, nonatomic) AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property unsigned long long playbackState; // @synthesize playbackState=_playbackState;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <ANTrackPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playerItemPlayedToEndHandler:(id)arg1;
- (void)audioSessionInterruptionHandler:(id)arg1;
- (void)audioSessionMediaServicesResetHandler:(id)arg1;
- (void)audioSessionMediaServicesLostHandler:(id)arg1;
- (void)_resumePlaybackAfterInterruptionAtTimeInterval:(double)arg1;
- (void)handleInterruptionDelay:(double)arg1;
- (void)previousInternalSync;
- (void)nextInternalSync;
- (void)stopInternalSync;
- (_Bool)playInternalSync;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_configureAudioSession;
- (void)_deregisterForNotificationsWithAudioSession:(id)arg1;
- (void)_registerForNotificationsWithAudioSession:(id)arg1;
@property(readonly, nonatomic) int numberActiveTracks;
- (void)previous;
- (void)next;
- (void)end;
- (void)_stopSync;
- (void)stop;
@property(readonly, nonatomic) NSString *whatIsPlaying;
- (_Bool)_playSync;
- (void)playWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)prepareToPlay;
- (_Bool)_insertAudioBetween;
- (_Bool)_addURL:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3;
- (_Bool)_add:(id)arg1 announcementID:(id)arg2 trackType:(long long)arg3;
- (_Bool)add:(id)arg1 announcementID:(id)arg2;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1 endpointUUID:(id)arg2;
- (id)initWithOptions:(unsigned long long)arg1;

@end

