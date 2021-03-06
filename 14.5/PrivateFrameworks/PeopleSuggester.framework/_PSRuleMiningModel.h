//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMBehaviorRetriever, NSDictionary, _PSContactResolver, _PSRuleRankingMLModel;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleMiningModel : NSObject
{
    _Bool __PSRuleMiningIsMLModelInUse;
    _Bool __PSRuleMiningIsAdaptedMLModelOK;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _PSContactResolver *_contactResolver;
    BMBehaviorRetriever *_behaviorRetriever;
    long long __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
    long long __PSRuleMiningModelRegularizingContextOverlapConstraint;
    double __PSRuleMiningModelMinRuleConfidenceForSuggestion;
    double __PSRuleMiningMLModelScoreThreshold;
    NSDictionary *_psConfigForAdaptableModel;
    _PSRuleRankingMLModel *_ruleRankingModel;
}

- (void).cxx_destruct;
@property(retain) _PSRuleRankingMLModel *ruleRankingModel; // @synthesize ruleRankingModel=_ruleRankingModel;
@property(retain) NSDictionary *psConfigForAdaptableModel; // @synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel;
@property(nonatomic) _Bool _PSRuleMiningIsAdaptedMLModelOK; // @synthesize _PSRuleMiningIsAdaptedMLModelOK=__PSRuleMiningIsAdaptedMLModelOK;
@property(nonatomic) _Bool _PSRuleMiningIsMLModelInUse; // @synthesize _PSRuleMiningIsMLModelInUse=__PSRuleMiningIsMLModelInUse;
@property(nonatomic) double _PSRuleMiningMLModelScoreThreshold; // @synthesize _PSRuleMiningMLModelScoreThreshold=__PSRuleMiningMLModelScoreThreshold;
@property(nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion; // @synthesize _PSRuleMiningModelMinRuleConfidenceForSuggestion=__PSRuleMiningModelMinRuleConfidenceForSuggestion;
@property(nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint; // @synthesize _PSRuleMiningModelRegularizingContextOverlapConstraint=__PSRuleMiningModelRegularizingContextOverlapConstraint;
@property(nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions; // @synthesize _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions=__PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
@property(readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // @synthesize behaviorRetriever=_behaviorRetriever;
@property(readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2;
- (id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3;
- (id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3;
- (id)extractAdaptedModelRecipeID;
- (_Bool)isAdaptedModelUsed;
- (_Bool)isAdaptedModelCreated;
- (void)loadMLModel;
- (void)updateAdaptableModelProperties:(id)arg1;
- (void)updateModelProperties:(id)arg1;
- (id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2 withConfig:(id)arg3;

@end

