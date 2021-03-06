//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, PGGraph;

@interface PGGraphNamingProcessor : NSObject
{
    unsigned long long _runOptions;
    NSMutableArray *_analyzersToRun;
    NSSet *_personNodesToName;
    NSSet *_momentNodes;
    PGGraph *_graph;
    NSArray *_sortedPoolOfContactIdentifiers;
    NSMutableDictionary *_contactMatchesByPersonLocalIdentifier;
    NSMutableDictionary *_selectedContactMatchesByPersonLocalIdentifier;
    NSMutableDictionary *_filteredOutContactMatchesByPersonLocalIdentifier;
    unsigned long long _numberOfSignals;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfSignals; // @synthesize numberOfSignals=_numberOfSignals;
@property(retain, nonatomic) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier; // @synthesize filteredOutContactMatchesByPersonLocalIdentifier=_filteredOutContactMatchesByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier; // @synthesize selectedContactMatchesByPersonLocalIdentifier=_selectedContactMatchesByPersonLocalIdentifier;
@property(retain, nonatomic) NSMutableDictionary *contactMatchesByPersonLocalIdentifier; // @synthesize contactMatchesByPersonLocalIdentifier=_contactMatchesByPersonLocalIdentifier;
@property(retain, nonatomic) NSArray *sortedPoolOfContactIdentifiers; // @synthesize sortedPoolOfContactIdentifiers=_sortedPoolOfContactIdentifiers;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
@property(readonly, nonatomic) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly, nonatomic) NSSet *personNodesToName; // @synthesize personNodesToName=_personNodesToName;
@property(retain, nonatomic) NSMutableArray *analyzersToRun; // @synthesize analyzersToRun=_analyzersToRun;
@property(readonly, nonatomic) unsigned long long runOptions; // @synthesize runOptions=_runOptions;
- (id)personNodesToNameFromPersonNodes:(id)arg1;
- (id)matchPropertiesBetweenContactIdentifier:(id)arg1 andPersonLocalIdentifier:(id)arg2;
- (id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)arg1;
- (id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)arg1;
- (id)_applyMessageFrequencyPenaltyToMatchScores:(id)arg1;
- (void)_removeSuggestionOfContact:(id)arg1 forPerson:(id)arg2;
- (void)_limitNumberOfContactSuggestionsPerPerson;
- (void)filterContactMatches;
- (id)_extractSortedPoolOfContactIdentifiers;
- (void)_extractSignalsFromRunOptions;
- (void)enumerateContactSuggestionsForPersonNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)runNamingAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;

@end

