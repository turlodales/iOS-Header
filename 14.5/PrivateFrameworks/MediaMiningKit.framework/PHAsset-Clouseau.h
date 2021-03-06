//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <MediaMiningKit/CLSInvestigationItem-Protocol.h>
#import <MediaMiningKit/CLSPHAssetSupportProtocol-Protocol.h>
#import <MediaMiningKit/CLSPHAssetUserBehaviorProtocol-Protocol.h>

@class CLLocation, CLSAssetFaceInformationSummary, NSArray, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;
@protocol CLSAssetProcessedSignals, CLSCurationModel;

@interface PHAsset (Clouseau) <CLSInvestigationItem, CLSPHAssetSupportProtocol, CLSPHAssetUserBehaviorProtocol>
+ (void)prefetchOnAssets:(id)arg1 options:(unsigned long long)arg2;
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchOptions:(unsigned long long)arg2;
+ (void)_populateAsset:(id)arg1 withPersonsUUIDs:(id)arg2;
+ (id)personLocalIdentifiersByAssetUUIDWithAssets:(id)arg1;
+ (id)_hiddenPersonUUIDsByAssetUUIDWithAssets:(id)arg1;
+ (id)_personUUIDsByAssetUUIDWithAssets:(id)arg1;
+ (_Bool)isScore:(double)arg1 closeToValue:(double)arg2;
+ (unsigned long long)clsPrefetchOptionsForKeyAsset;
- (_Bool)clsFaceInformationArePrefetched;
- (_Bool)clsSceneClassificationsArePrefetched;
- (_Bool)clsPeopleCountIsPrefetched;
- (_Bool)clsPeopleNamesArePrefetched;
- (_Bool)prepareWithAlternateJunkingHeuristics:(_Bool)arg1 withContext:(id)arg2;
- (_Bool)clsIsTragicFailure;
@property(readonly, nonatomic) _Bool clsHasCustomPlaybackVariation;
- (short)clsInterestingAudioClassifications;
@property(readonly, nonatomic) _Bool clsHasInterestingAudioClassification;
@property(readonly, nonatomic) _Bool clsIsInterestingReframe;
@property(readonly, nonatomic) _Bool clsIsInterestingHDR;
@property(readonly, nonatomic) _Bool clsIsInterestingSDOF;
@property(readonly, nonatomic) _Bool clsIsInterestingPanorama;
@property(readonly, nonatomic) _Bool clsIsInterestingLivePhoto;
@property(readonly, nonatomic) double clsAutoplaySuggestionScore;
@property(readonly, nonatomic) double clsHighlightVisibilityScore;
@property(readonly, nonatomic) _Bool clsIsLongExposure;
@property(readonly, nonatomic) _Bool clsIsLoopOrBounce;
@property(readonly, nonatomic) _Bool clsIsInterestingVideo;
- (double)scoreInContext:(id)arg1;
- (void)cacheCurationScore:(double)arg1;
@property(readonly, nonatomic) double clsContentScore;
@property(readonly, nonatomic) double clsSquareCropScore;
@property(readonly) _Bool clsHasInterestingScenes;
@property(readonly) _Bool clsHasPoorResolution;
@property(readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property(readonly) _Bool clsIsInhabited;
@property(readonly, nonatomic) _Bool clsIsBlurry;
@property(readonly, nonatomic) VNSceneprint *clsSceneprint;
- (id)clsUnprefetchedSceneClassifications;
- (void)clsSetSceneClassifications:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) double clsFaceScore;
- (unsigned long long)clsVideoFaceCount;
- (double)clsActivityScore;
- (double)clsVideoScore;
@property(readonly, nonatomic) double clsAestheticScore;
@property(readonly, nonatomic) double clsSharpnessScore;
@property(readonly, nonatomic) double clsExposureScore;
@property(readonly, nonatomic) id <CLSAssetProcessedSignals> clsProcessedSignals;
- (void)clsSetProcessedSignals:(id)arg1;
@property(readonly, nonatomic) CLSAssetFaceInformationSummary *clsFaceInformationSummary;
- (void)clsSetFaceInformationSummary:(id)arg1;
- (void)clsSetPeopleCount:(id)arg1;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames;
- (void)clsSetPeopleNames:(id)arg1;
@property(readonly, nonatomic) NSArray *clsPeopleNames;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property(readonly, nonatomic) NSString *pl_uuid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) NSDate *pl_date;
- (_Bool)clsIsFaceProcessed;
- (_Bool)clsIsSceneProcessed;
- (_Bool)isRegularGem;
- (_Bool)isShinyGem;
- (_Bool)isGold;
- (float)clsBehavioralScore;
- (float)clsInteractionScore;
@property(readonly, nonatomic) _Bool clsIsAestheticallyPrettyGood;
@property(readonly, nonatomic) _Bool clsIsScreenshotOrScreenRecording;
- (void)clsCacheIsUtility:(_Bool)arg1;
@property(readonly, nonatomic) _Bool clsIsUtility;
@property(readonly, nonatomic) _Bool clsIsNonMemorable;
@property(readonly, nonatomic) double clsDuration;
- (_Bool)isSubtype:(unsigned long long)arg1;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
@property(readonly, nonatomic) NSDate *cls_localDate;
@property(readonly, nonatomic) NSDate *cls_universalDate;
@property(readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property(readonly, nonatomic) CLLocation *clsLocation;
@property(readonly, nonatomic) NSString *clsIdentifier;
@property(retain) id <CLSCurationModel> curationModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly) Class superclass;
@end

