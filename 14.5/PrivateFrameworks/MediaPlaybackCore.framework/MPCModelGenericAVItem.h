//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

#import <MediaPlaybackCore/AVAssetResourceLoaderDelegate-Protocol.h>
#import <MediaPlaybackCore/AVPlayerItemMetadataOutputPushDelegate-Protocol.h>
#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>
#import <MediaPlaybackCore/MPRTCReportingItemSessionCreating-Protocol.h>

@class ICAVAssetDownloadURLSession, ICEnhancedAudioContentKeySession, ICMusicSubscriptionLeaseSession, ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, ICURLRequest, MPCModelGenericAVItemTimedMetadataRequest, MPCModelGenericAVItemTimedMetadataResponse, MPCModelGenericAVItemUserIdentityPropertySet, MPCPlaybackEngineEventStream, MPCPlaybackRequestEnvironment, MPCPlayerAudioFormat, MPCPlayerAudioRoute, MPCSuzeLeaseSession, MPMediaLibrary, MPModelGenericObject, MPPropertySet, MPSubscriptionStatusPlaybackInformation, NSArray, NSData, NSDictionary, NSNumber, NSObject, NSOperationQueue, NSString, NSURL;
@protocol MPCModelPlaybackAssetCacheProviding, MPCReportingIdentityPropertiesLoading, OS_dispatch_queue;

@interface MPCModelGenericAVItem : MPAVItem <AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver, MPRTCReportingItemSessionCreating>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _allowsAirPlayFromCloud;
    NSNumber *_bookmarkTime;
    _Bool _hasLoadedSubscriptionLeaseSession;
    NSObject<OS_dispatch_queue> *_subscriptionLeaseSessionLoadQueue;
    ICMusicSubscriptionLeaseSession *_subscriptionLeaseSession;
    _Bool _hasLoadedSubscriptionPlaybackInformation;
    MPSubscriptionStatusPlaybackInformation *_subscriptionPlaybackInformation;
    NSObject<OS_dispatch_queue> *_subscriptionPlaybackInformationLoadQueue;
    _Bool _shouldAutomaticallyRefreshSubscriptionLease;
    _Bool _isAssetSubscriptionProtectionType;
    _Bool _isSubscriptionPolicyContent;
    _Bool _lastPreparedForNonZeroRate;
    long long _subscriptionLeaseRequestCount;
    _Bool _didDeferPreventionStatusUpdate;
    MPCSuzeLeaseSession *_suzeLeaseSession;
    _Bool _isAutomaticallyRefreshingSuzeLeaseSession;
    CDUnknownBlockType _firstBecomeActivePlayerItemBlock;
    NSArray *_currentGlobalTimedMetadataGroups;
    MPModelGenericObject *_flattenedGenericObject;
    MPModelGenericObject *_flattenedMetadataGenericObject;
    MPModelGenericObject *_metadataGenericObject;
    MPPropertySet *_itemProperties;
    id <MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
    MPCModelGenericAVItemTimedMetadataRequest *_timedMetadataRequest;
    MPCModelGenericAVItemTimedMetadataResponse *_timedMetadataResponse;
    NSOperationQueue *_timedMetadataOperationQueue;
    _Bool _isMusicCellularStreamingAllowed;
    _Bool _didReceiveHLSTimedMetadata;
    NSString *_hlsStreamIdentifier;
    _Bool _isiTunesStoreStream;
    ICStoreRequestContext *_storeRequestContext;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_streamingKeyServerURL;
    NSString *_rtcReportingServiceIdentifier;
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;
    ICEnhancedAudioContentKeySession *_contentKeySession;
    ICAVAssetDownloadURLSession *_hlsDownloadURLSession;
    ICURLRequest *_hlsDownloadURLRequest;
    struct os_unfair_lock_s _genericObjectLock;
    _Bool _radioPlayback;
    _Bool _radioStreamPlayback;
    _Bool _subscriptionRequired;
    _Bool _hlsAsset;
    long long _leasePlaybackPreventionState;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    NSDictionary *_audioFormatsDictionary;
    long long _preferredAudioAssetType;
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
    NSString *_assetSourceStoreFrontID;
    long long _equivalencySourceAdamID;
    MPModelGenericObject *_genericObject;
    NSData *_jingleTimedMetadata;
    MPMediaLibrary *_mediaLibrary;
    NSNumber *_siriInitiated;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    long long _stationItemLikedState;
    NSDictionary *_trackInfo;
    MPCPlaybackEngineEventStream *_eventStream;
    MPCPlayerAudioFormat *_preferredFormat;
    MPCPlayerAudioFormat *_activeFormat;
    long long _activeFormatJustification;
    NSArray *_alternateFormats;
    MPCPlayerAudioRoute *_audioRoute;
}

+ (id)_utilitySerialQueue;
+ (_Bool)_prefersHighQualityVideoContentForNetworkType:(long long)arg1;
+ (_Bool)_prefersHighQualityAudioContentForNetworkType:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHLSAsset) _Bool hlsAsset; // @synthesize hlsAsset=_hlsAsset;
@property(retain, nonatomic) MPCPlayerAudioRoute *audioRoute; // @synthesize audioRoute=_audioRoute;
@property(retain, nonatomic) NSArray *alternateFormats; // @synthesize alternateFormats=_alternateFormats;
@property(nonatomic) long long activeFormatJustification; // @synthesize activeFormatJustification=_activeFormatJustification;
@property(retain, nonatomic) MPCPlayerAudioFormat *activeFormat; // @synthesize activeFormat=_activeFormat;
@property(retain, nonatomic) MPCPlayerAudioFormat *preferredFormat; // @synthesize preferredFormat=_preferredFormat;
@property(nonatomic) __weak MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(retain, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(nonatomic) long long stationItemLikedState; // @synthesize stationItemLikedState=_stationItemLikedState;
@property(readonly, copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
@property(nonatomic, getter=isSubscriptionRequired) _Bool subscriptionRequired; // @synthesize subscriptionRequired=_subscriptionRequired;
@property(nonatomic, getter=isRadioStreamPlayback) _Bool radioStreamPlayback; // @synthesize radioStreamPlayback=_radioStreamPlayback;
@property(nonatomic, getter=isRadioPlayback) _Bool radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated; // @synthesize siriInitiated=_siriInitiated;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(readonly, copy, nonatomic) NSData *jingleTimedMetadata; // @synthesize jingleTimedMetadata=_jingleTimedMetadata;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property(copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(readonly, nonatomic) long long preferredAudioAssetType; // @synthesize preferredAudioAssetType=_preferredAudioAssetType;
@property(copy, nonatomic) NSDictionary *audioFormatsDictionary; // @synthesize audioFormatsDictionary=_audioFormatsDictionary;
- (id)leaseStatus;
- (long long)leasePlaybackPreventionState;
- (unsigned long long)_minimumBitrateForResolutionPreference:(long long)arg1;
- (void)_updatePreventionStatusWithLeaseSession:(id)arg1;
- (void)_updateJingleTimedMetadata;
- (void)_updateBookmarkTime:(double)arg1 isCheckpoint:(_Bool)arg2;
- (void)_updateAutomaticSubscriptionLeaseRefresh;
- (id)_storeUbiquitousIdentifier;
- (id)_stopTime;
- (double)_startTime;
- (id)_storeRequestContext;
- (_Bool)_shouldRememberBookmarkTime;
- (id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (id)_radioStation;
- (void)_postInvalidationNotifications;
- (id)_modelPlaybackPosition;
- (id)_isPrivateListeningEnabled;
- (void)_invalidateContentItem;
- (void)_updateHasBeenPlayedWithElapsedTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handlePlaybackFinishedTime:(double)arg1 didFinishByHittingEnd:(_Bool)arg2;
- (void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getSubscriptionLeasePropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_bookmarkTime;
- (unsigned long long)_audioFormatPreference;
- (void)_applyPreferredPeakBitRateToPlayerItem:(id)arg1 withItemType:(long long)arg2;
- (void)_applyLoudnessInfo;
- (_Bool)_allowsStreamingPlayback;
- (_Bool)_allowsAssetCaching;
- (CDStruct_4a9aa5a8)_timeoutValues;
- (void)_timedMetadataResponseDidInvalidateNotification:(id)arg1;
- (void)_suzeLeaseSessionRenewDidFailNotification:(id)arg1;
- (void)_subscriptionLeaseStatusDidChangeNotification:(id)arg1;
- (void)_contentTasteControllerDidChangeNotification:(id)arg1;
- (void)_ageVerificationStateDidChangeNotification:(id)arg1;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reloadTimedMetadataRequest;
- (void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
@property(readonly, nonatomic) long long rtcReportingAssetType;
@property(readonly, copy, nonatomic) NSString *rtcReportingServiceIdentifier;
@property(readonly, nonatomic) id rtcReportingParentHierarchyToken;
- (id)mpcReporting_trackInfo;
- (id)mpcReporting_siriInitiated;
- (id)mpcReporting_privateListeningEnabled;
- (_Bool)mpcReporting_shouldReportPlayEventsToStore;
- (_Bool)mpcReporting_shouldUseRelativeTimePositions;
- (id)mpcReporting_requestingBundleVersion;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_jingleTimedMetadata;
- (id)mpcReporting_identityPropertiesLoader;
- (unsigned long long)mpcReporting_itemType;
- (long long)mpcReporting_equivalencySourceAdamID;
- (CDUnknownBlockType)artworkCatalogBlock;
- (void)_didBecomeActivePlayerItem;
- (void)_didResignActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (void)_willBecomeActivePlayerItem;
- (long long)_persistedLikedState;
- (void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (_Bool)usesSubscriptionLease;
- (id)useListeningHistory;
- (id)storeFrontIdentifier;
- (id)storeAccountID;
- (_Bool)shouldPreventPlayback;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)resolvePlaybackError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)requiresLoadedAssetForAirPlayProperties;
- (id)bookmarkTime;
- (_Bool)allowsExternalPlayback;
- (_Bool)allowsAirPlayFromCloud;
- (_Bool)canUseLoadedAsset;
- (id)_contentItemUserInfo;
- (float)userRating;
- (_Bool)useEmbeddedChapterData;
- (id)urlTimeMarkers;
- (long long)type;
- (id)playbackInfo;
- (id)containerUniqueID;
- (_Bool)hasTimeSyncedLyrics;
- (_Bool)hasStoreLyrics;
- (id)libraryLyrics;
- (_Bool)supportsLikedState;
- (long long)storeSubscriptionAdamID;
- (long long)storeItemInt64ID;
- (long long)stationProviderID;
- (id)stationStringID;
- (id)stationName;
- (id)stationHash;
- (long long)stationID;
@property(readonly, nonatomic) _Bool shouldReportPlayEventsToStore;
- (void)setRating:(float)arg1;
- (void)reevaluateType;
- (void)prepareForRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)prefersSeekOverSkip;
- (_Bool)shouldShowComposer;
- (id)playbackError;
- (void)notePlaybackFinishedByHittingEnd;
- (long long)storePurchasedAdamID;
- (unsigned long long)composerPersistentID;
- (unsigned long long)genrePersistentID;
- (unsigned long long)artistPersistentID;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (id)cloudAlbumID;
- (id)cloudUniversalLibraryID;
- (id)personID;
- (unsigned long long)cloudID;
- (id)databaseID;
- (unsigned long long)persistentID;
- (unsigned long long)mediaType;
- (id)modelGenericObject;
- (id)mediaItem;
- (id)mainTitle;
- (void)updatePlayerItemMetadata;
- (id)alternateAudioFormatsKnowingActiveFormat:(id)arg1;
- (void)_emitAudioFormatChangeEvent;
- (void)_updateActiveFormatJustification:(long long)arg1;
- (void)configureAVPlayerItemWithAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2;
- (_Bool)updateActiveFormat:(id)arg1 justification:(long long)arg2;
- (_Bool)updatePreferredFormat:(id)arg1;
- (_Bool)updateAudioFormatsDictionary:(id)arg1;
- (id)audioFormatForStableVariantID:(id)arg1;
- (id)currentPlayerAudioFormat;
- (void)loadAssetAndPlayerItem;
- (float)_volumeAdjustment;
- (id)_loudnessInfoMediaKind;
- (id)_gaplessInfo;
- (id)_iTunesStorePurchasedMediaKind;
- (long long)_suzeLeaseMediaType;
- (id)_assetLoadPropertiesWithUserIdentityProperties:(id)arg1 delegatedUserIdentityProperties:(id)arg2;
@property(readonly, nonatomic) _Bool hasVideo;
- (_Bool)_prefersHighQualityContent;
- (id)_delegatedUserIdentityProperties:(id *)arg1;
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;
- (_Bool)isStreamable;
- (_Bool)isRadioItem;
- (_Bool)isLikedStateEnabled;
- (id)explicitBadge;
- (_Bool)isExplicitTrack;
- (_Bool)isAssetURLValid;
- (_Bool)isAlwaysLive;
- (id)genre;
- (id)externalContentIdentifier;
- (double)durationFromExternalMetadata;
- (id)copyrightText;
- (id)chapterTimeMarkers;
- (id)composer;
- (id)artworkTimeMarkers;
- (id)artist;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(_Bool)arg1;
- (_Bool)allowsEQ;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (long long)artistStoreID;
- (long long)albumStoreID;
- (id)albumArtist;
- (long long)albumYear;
- (id)album;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithGenericObject:(id)arg1 itemProperties:(id)arg2 playbackRequestEnvironment:(id)arg3 identityPropertySet:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

