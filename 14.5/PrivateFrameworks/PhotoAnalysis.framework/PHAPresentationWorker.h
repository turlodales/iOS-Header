//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PHAPresentationWorker : PHAWorker
{
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (void)_findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg1;
+ (void)_findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg1;
+ (void)_findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)arg1;
+ (_Bool)reloadWidgetTimelineWithPhotoLibrary:(id)arg1 error:(id *)arg2;
+ (id)_domainErrorWithCode:(long long)arg1;
+ (_Bool)persistsState;
+ (long long)applicationDataFolderIdentifier;
+ (short)workerType;
+ (void)configureXPCConnection:(id)arg1;
+ (id)_ageRangeDescriptionFromBirthday:(id)arg1;
+ (id)_genderDescriptionFromGivenName:(id)arg1;
+ (id)_meContact;
+ (id)_fetchDemographicsSummary;
+ (id)_fetchLibrarySummaryForPhotoLibrary:(id)arg1;
+ (id)_dateFormatter;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
- (id)cacheCPAnalyticsPropertiesJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_hasAdditionalJobForCachingCPAnalyticsPropertiesInScenario:(unsigned long long)arg1;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_reportMediaSampleWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)mediaSampleReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_hasAdditionalJobForMediaSampleReportingInScenario:(unsigned long long)arg1;
- (id)featuresUsageReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_hasAdditionalJobForFeaturesUsageReportingInScenario:(unsigned long long)arg1;
- (void)recordFeatureUsageFromCounts:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)reloadWidgetTimelineWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)_shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (_Bool)_didExceedTimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (_Bool)canRunWhenGraphIsLoaded;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)cooldown;
- (void)warmupWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (id)_buildPropertyCache;
- (void)cacheCPAnalyticsPropertiesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)cacheCPAnalyticsPropertiesWithError:(id *)arg1;
- (id)_libraryScopedWorkerFeaturesUsageURL;
- (id)_libraryScopedWorkerFeaturesUsageWithError:(id *)arg1;
- (void)reportFeaturesUsageWithOptions:(id)arg1 context:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)recordFeatureUsageFromCounts:(id)arg1 error:(id *)arg2;

@end

