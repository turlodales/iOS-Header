//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVAsynchronousKeyValueLoading-Protocol.h>
#import <AVFCore/NSCopying-Protocol.h>

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetTrackInternal *_track;
}

+ (id)keyPathsForValuesAffectingTimeRange;
+ (_Bool)expectsPropertyRevisedNotifications;
+ (id)mediaCharacteristicsForMediaTypes;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)associatedTracksOfType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (_Bool)isAudibleBooksContentAuthorized;
- (_Bool)hasAudibleBooksContent;
- (_Bool)hasProtectedContent;
- (id)_trackReferences;
- (id)_pairedForcedOnlySubtitlesTrack;
- (id)_followingTrackAmongTracks:(id)arg1;
- (id)_fallbackTrack;
- (id)_firstAssociatedTrackWithAssociationType:(id)arg1;
- (_Bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)provisionalAlternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)alternateGroupID;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segmentsAsPresented;
- (CDStruct_e83c9415)gaplessSourceTimeRange;
- (_Bool)segmentsExcludeAudioPrimingAndRemainderDurations;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)minFrameDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (float)preferredVolume;
- (long long)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)locale;
- (id)extendedLanguageTag;
- (id)languageCode;
- (float)peakDataRate;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (_Bool)hasAudioSampleDependencies;
- (_Bool)requiresFrameReordering;
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)timeRange;
- (id)mediaCharacteristics;
- (_Bool)hasMediaCharacteristics:(id)arg1;
- (_Bool)hasMediaCharacteristic:(id)arg1;
- (_Bool)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (long long)totalSampleDataLength;
- (_Bool)isSelfContained;
- (_Bool)isEnabled;
- (int)playabilityValidationResult;
- (_Bool)isDecodable;
- (_Bool)isPlayable;
- (id)formatDescriptions;
- (id)mediaType;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)statusOfValueForKey:(id)arg1;
@property(readonly, nonatomic) int trackID;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (id)_assetTrackInspector;
@property(readonly, nonatomic) __weak AVAsset *asset;
- (id)_weakReference;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)init;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (void)_stopListeningToFigAssetTrackNotifications;
- (void)_startListeningToFigAssetTrackNotifications;
- (_Bool)_firstFormatDescriptionIsLPCM;
- (_Bool)_hasMultipleDistinctFormatDescriptions;
- (_Bool)_hasEmptyEdits;
- (_Bool)_hasScaledEdits;
- (_Bool)_hasMultipleEdits;

@end

