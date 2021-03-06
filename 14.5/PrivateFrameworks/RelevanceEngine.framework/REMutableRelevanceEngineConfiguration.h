//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSArray, NSObject, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager, RERelevanceProviderManagerLoader;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration
{
}

+ (id)defaultConfiguration;
+ (id)sampleUpNextConfiguration;
+ (id)defaultUpNextConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool ignoresInstalledApplications; // @dynamic ignoresInstalledApplications;
@property(retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder; // @dynamic metricsRecorder;
@property(nonatomic) _Bool allowsDiagnosticExtension; // @dynamic allowsDiagnosticExtension;
@property(nonatomic) _Bool ignoreDeviceLockState; // @dynamic ignoreDeviceLockState;
@property(nonatomic) _Bool wantsBackup; // @dynamic wantsBackup;
@property(nonatomic) _Bool allowsRemoteTraining; // @dynamic allowsRemoteTraining;
@property(copy, nonatomic) NSString *preferenceDomain; // @dynamic preferenceDomain;
@property(nonatomic) _Bool wantsImmutableContent; // @dynamic wantsImmutableContent;
@property(copy, nonatomic) REFeatureSet *primaryFeatures; // @dynamic primaryFeatures;
- (void)removeAllInteractions;
- (void)removeInteractionAtIndex:(unsigned long long)arg1;
- (long long)_indexOfInteractionWithName:(id)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)removeAllSections;
- (void)removeSectionAtIndex:(unsigned long long)arg1;
- (void)removeSectionWithName:(id)arg1;
- (long long)_indexOfSectionWithName:(id)arg1;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSectionWithDescriptor:(id)arg1;
@property(retain, nonatomic) RELocationManager *locationManager; // @dynamic locationManager;
@property(nonatomic) unsigned long long modelStorageBehavior; // @dynamic modelStorageBehavior;
@property(nonatomic) unsigned long long trainingBehavior; // @dynamic trainingBehavior;
@property(copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader; // @dynamic relevanceProviderManagerLoader;
@property(copy, nonatomic) REDataSourceLoader *dataSourceLoader; // @dynamic dataSourceLoader;
@property(nonatomic) _Bool allowsUpdatingModelFile; // @dynamic allowsUpdatingModelFile;
@property(nonatomic) unsigned long long modelVersion; // @dynamic modelVersion;
@property(copy, nonatomic) NSURL *baseModelFileURL; // @dynamic baseModelFileURL;
@property(copy, nonatomic) NSURL *modelFileURL; // @dynamic modelFileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @dynamic observerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue; // @dynamic engineQueue;

// Remaining properties
@property(copy, nonatomic) NSArray *whitelistedDataSourceClassNames; // @dynamic whitelistedDataSourceClassNames;

@end

