//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSString, SSPlistDataReader;

@interface PRSRankingConfiguration : NSObject
{
    _Bool _allow_coreduet_influence;
    _Bool _disableResultTruncation;
    float _numAppsDeduped;
    NSMutableDictionary *_categoryEngagements;
    NSArray *_rankingQueries;
    NSMutableDictionary *_queryDependentCategoryProbabilities;
    SSPlistDataReader *_queryIndependentCategoryProbabilities;
    NSNumber *_localResultQualityThreshold;
    NSMutableOrderedSet *_cepBlocklistSet;
    NSArray *_parsecCategoryOrder;
    NSString *_shortcutSectionBundleID;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
}

- (void).cxx_destruct;
@property(nonatomic) float numAppsDeduped; // @synthesize numAppsDeduped=_numAppsDeduped;
@property(nonatomic) _Bool disableResultTruncation; // @synthesize disableResultTruncation=_disableResultTruncation;
@property(retain, nonatomic) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property(retain, nonatomic) NSDictionary *sqfData; // @synthesize sqfData=_sqfData;
@property(nonatomic) _Bool allow_coreduet_influence; // @synthesize allow_coreduet_influence=_allow_coreduet_influence;
@property(retain, nonatomic) NSString *shortcutSectionBundleID; // @synthesize shortcutSectionBundleID=_shortcutSectionBundleID;
@property(retain, nonatomic) NSArray *parsecCategoryOrder; // @synthesize parsecCategoryOrder=_parsecCategoryOrder;
@property(retain, nonatomic) NSMutableOrderedSet *cepBlocklistSet; // @synthesize cepBlocklistSet=_cepBlocklistSet;
@property(retain, nonatomic) NSNumber *localResultQualityThreshold; // @synthesize localResultQualityThreshold=_localResultQualityThreshold;
@property(retain, nonatomic) SSPlistDataReader *queryIndependentCategoryProbabilities; // @synthesize queryIndependentCategoryProbabilities=_queryIndependentCategoryProbabilities;
@property(retain, nonatomic) NSMutableDictionary *queryDependentCategoryProbabilities; // @synthesize queryDependentCategoryProbabilities=_queryDependentCategoryProbabilities;
@property(retain, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(retain, nonatomic) NSMutableDictionary *categoryEngagements; // @synthesize categoryEngagements=_categoryEngagements;
- (float)maxEngagementProbability;
- (double)queryIndependentProbabilityForCategory:(id)arg1;
- (double)queryDependentProbabilityForCategory:(id)arg1;
- (float)engagementProbabilityForCategory:(id)arg1;
- (void)updateQueryDependentProbabilityAndBlocklistSetWith:(id)arg1;
- (void)appendToExistingCEPBlocklist:(id)arg1;
- (void)updateWithSQFData:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)init;

@end

