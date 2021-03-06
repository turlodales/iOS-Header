//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Announce/ANAnnounceServiceDelegate-Protocol.h>
#import <Announce/ANAnnouncementManagerDelegte-Protocol.h>
#import <Announce/ANCompanionConnectionDelegate-Protocol.h>
#import <Announce/ANPlaybackManagerDataSource-Protocol.h>
#import <Announce/ANPlaybackManagerDelegate-Protocol.h>

@class ANAnnounceService, ANAnnouncementStatePublisher, ANCompanionConnection, ANParticipant, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol ANRemotePlaybackStatusProvider, OS_dispatch_queue;

@interface ANAnnouncementCoordinator : NSObject <ANAnnouncementManagerDelegte, ANPlaybackManagerDelegate, ANPlaybackManagerDataSource, ANAnnounceServiceDelegate, ANCompanionConnectionDelegate>
{
    id <ANRemotePlaybackStatusProvider> _remotePlaybackStatusProvider;
    ANAnnounceService *_announceService;
    NSMutableDictionary *_announcementManagers;
    NSMutableDictionary *_playbackManagers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_delegates;
    ANCompanionConnection *_companionConnection;
    ANAnnouncementStatePublisher *_playbackStatePublisher;
}

+ (id)localDeviceIdentifier;
+ (id)sharedCoordinator;
- (void).cxx_destruct;
@property(retain, nonatomic) ANAnnouncementStatePublisher *playbackStatePublisher; // @synthesize playbackStatePublisher=_playbackStatePublisher;
@property(retain, nonatomic) ANCompanionConnection *companionConnection; // @synthesize companionConnection=_companionConnection;
@property(readonly, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *playbackManagers; // @synthesize playbackManagers=_playbackManagers;
@property(readonly, nonatomic) NSMutableDictionary *announcementManagers; // @synthesize announcementManagers=_announcementManagers;
@property(readonly, nonatomic) ANAnnounceService *announceService; // @synthesize announceService=_announceService;
@property(nonatomic) __weak id <ANRemotePlaybackStatusProvider> remotePlaybackStatusProvider; // @synthesize remotePlaybackStatusProvider=_remotePlaybackStatusProvider;
- (id)playbackManager:(id)arg1 announcementsForIdentifiers:(id)arg2;
- (id)announcementsForPlaybackManager:(id)arg1;
- (void)cleanUpOldAnnouncementsForPlaybackManager:(id)arg1;
- (void)playbackManagerDidFinishPlayingAnnouncements:(id)arg1;
- (void)playbackManager:(id)arg1 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)arg2;
- (void)playbackManager:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2;
- (void)playbackManager:(id)arg1 didFinishPlayingAnnouncement:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)playbackManager:(id)arg1 didStartPlayingAnnouncement:(id)arg2;
- (void)companionDidPlayAnnouncement:(id)arg1;
- (void)failedToDeliverAnnouncement:(id)arg1 error:(id)arg2;
- (void)receivedAnnouncement:(id)arg1;
- (void)announcementManager:(id)arg1 announcements:(id)arg2 didChangeForGroupID:(id)arg3;
- (void)_notifyDidReceiveAnnouncement:(id)arg1 forEndpointID:(id)arg2;
- (void)_handleReceivedAnnouncement:(id)arg1;
- (id)_endpointIDForPlaybackManager:(id)arg1;
- (id)_endpointIDForAnnouncementManager:(id)arg1;
- (void)_removeManagersForIdentifier:(id)arg1;
- (_Bool)_removePlaybackManagerForIdentifier:(id)arg1;
- (id)_createPlaybackManagerForIdentifier:(id)arg1;
- (_Bool)_removeAnnouncementManagerForIdentifier:(id)arg1;
- (id)_createAnnouncementManagerForIdentifier:(id)arg1;
- (void)_initializeManagers;
- (void)dealloc;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)mockAnnouncement:(id)arg1 forHome:(id)arg2 playbackDeadline:(id)arg3 sentHandler:(CDUnknownBlockType)arg4;
- (void)broadcastReply:(id)arg1 fromSource:(id)arg2 forAnnouncement:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendReply:(id)arg1 fromSource:(id)arg2 forAnnouncement:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendAnnouncement:(id)arg1 fromSource:(id)arg2 toHome:(id)arg3 rooms:(id)arg4 zones:(id)arg5 sentHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) NSSet *scanningDeviceCandidates;
@property(readonly, nonatomic) ANParticipant *localParticipant;
- (void)cleanForExit;
- (void)removeOldAnnouncementsForEndpointID:(id)arg1;
- (void)updateAnnouncement:(id)arg1 statusFlags:(unsigned long long)arg2 endpointID:(id)arg3;
- (id)announcementsForIDs:(id)arg1 endpointID:(id)arg2;
- (id)allAnnouncementsSortedByReceiptForEndpointID:(id)arg1;
- (id)announcementForID:(id)arg1 endpointID:(id)arg2;
- (id)announcementsForGroupID:(id)arg1 endpointID:(id)arg2;
- (void)addAnnouncement:(id)arg1 forEndpointID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPlaybackStoppedForAnnouncement:(id)arg1 endpointID:(id)arg2;
- (void)setPlaybackStartedForAnnouncement:(id)arg1 endpointID:(id)arg2;
- (unsigned long long)playbackStateForEndpointID:(id)arg1;
- (id)lastPlayedAnnouncementInfoForEndpointID:(id)arg1;
- (void)performPlaybackCommand:(id)arg1 endpointID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetAllTimersForEndpointID:(id)arg1;
- (void)resumeAllTimersForEndpointID:(id)arg1;
- (void)pauseAllTimersForEndpointID:(id)arg1;
- (id)resolveIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

