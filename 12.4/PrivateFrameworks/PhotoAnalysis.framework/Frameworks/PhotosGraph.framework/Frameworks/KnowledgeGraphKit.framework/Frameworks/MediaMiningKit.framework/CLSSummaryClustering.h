//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSSummaryClustering : NSObject
{
    _Bool _enableConcurrency;
    double _optimalDayDistributionThreshold;
    unsigned long long _timeSpanDensityAverageNumberOfObjects;
    _Bool _enableDensityClusteringLocationsDistance;
    unsigned long long _densityClusteringLocationsDistanceUnit;
    double _diffuseDensityClusteringMaximumDistance;
    unsigned long long _diffuseDensityClusteringMinimumNumberOfObjects;
    double _conciseDensityClusteringMaximumDistance;
    unsigned long long _conciseDensityClusteringMinimumNumberOfObjects;
    _Bool _enableMultipassDensityClustering;
    unsigned long long _adaptiveElectionMinimumNumberOfItemsByCluster;
    _Bool _enableAdaptiveElectionSmoother;
    _Bool _enableAdaptiveElectionSmootherAutomaticLimit;
    unsigned long long _adaptiveElectionSmootherMaximumLimit;
    unsigned long long _adaptiveElectionSmootherMinimumLimit;
    _Bool _enableConcurency;
}

+ (double)maximumScoreForItems:(id)arg1;
+ (double)meanScoreForItems:(id)arg1;
+ (double)scoreForItems:(id)arg1;
+ (id)clustering;
@property(nonatomic) unsigned long long adaptiveElectionSmootherMinimumLimit; // @synthesize adaptiveElectionSmootherMinimumLimit=_adaptiveElectionSmootherMinimumLimit;
@property(nonatomic) unsigned long long adaptiveElectionSmootherMaximumLimit; // @synthesize adaptiveElectionSmootherMaximumLimit=_adaptiveElectionSmootherMaximumLimit;
@property(nonatomic) _Bool enableAdaptiveElectionSmootherAutomaticLimit; // @synthesize enableAdaptiveElectionSmootherAutomaticLimit=_enableAdaptiveElectionSmootherAutomaticLimit;
@property(nonatomic) _Bool enableAdaptiveElectionSmoother; // @synthesize enableAdaptiveElectionSmoother=_enableAdaptiveElectionSmoother;
@property(nonatomic) unsigned long long adaptiveElectionMinimumNumberOfItemsByCluster; // @synthesize adaptiveElectionMinimumNumberOfItemsByCluster=_adaptiveElectionMinimumNumberOfItemsByCluster;
@property(nonatomic) _Bool enableMultipassDensityClustering; // @synthesize enableMultipassDensityClustering=_enableMultipassDensityClustering;
@property(nonatomic) unsigned long long conciseDensityClusteringMinimumNumberOfObjects; // @synthesize conciseDensityClusteringMinimumNumberOfObjects=_conciseDensityClusteringMinimumNumberOfObjects;
@property(nonatomic) double conciseDensityClusteringMaximumDistance; // @synthesize conciseDensityClusteringMaximumDistance=_conciseDensityClusteringMaximumDistance;
@property(nonatomic) unsigned long long diffuseDensityClusteringMinimumNumberOfObjects; // @synthesize diffuseDensityClusteringMinimumNumberOfObjects=_diffuseDensityClusteringMinimumNumberOfObjects;
@property(nonatomic) double diffuseDensityClusteringMaximumDistance; // @synthesize diffuseDensityClusteringMaximumDistance=_diffuseDensityClusteringMaximumDistance;
@property(nonatomic) unsigned long long densityClusteringLocationsDistanceUnit; // @synthesize densityClusteringLocationsDistanceUnit=_densityClusteringLocationsDistanceUnit;
@property(nonatomic) _Bool enableDensityClusteringLocationsDistance; // @synthesize enableDensityClusteringLocationsDistance=_enableDensityClusteringLocationsDistance;
@property(nonatomic) unsigned long long timeSpanDensityAverageNumberOfObjects; // @synthesize timeSpanDensityAverageNumberOfObjects=_timeSpanDensityAverageNumberOfObjects;
@property(nonatomic) double optimalDayDistributionThreshold; // @synthesize optimalDayDistributionThreshold=_optimalDayDistributionThreshold;
@property(nonatomic) _Bool enableConcurency; // @synthesize enableConcurency=_enableConcurency;
- (id)_adaptiveElection:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_densityClustersWithItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)densityClustersWithItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (CDUnknownBlockType)densityClusteringDistanceBlock;

@end

