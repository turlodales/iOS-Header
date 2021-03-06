//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

#import <RelevanceEngine/REElementActionDelegate-Protocol.h>
#import <RelevanceEngine/RETrainingSimulationServerInterface-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, RETrainingSimulationServer;

@interface RETrainingSimulationCoordinator : RESingleton <REElementActionDelegate, RETrainingSimulationServerInterface>
{
    RETrainingSimulationServer *_server;
    NSMutableDictionary *_elementsAddedByEngine;
    NSMapTable *_actionCompletionBlocks;
    _Bool _isActivelyTraining;
}

+ (void)prewarm;
- (void).cxx_destruct;
@property _Bool isActivelyTraining; // @synthesize isActivelyTraining=_isActivelyTraining;
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)elementAction:(id)arg1 didFinishTask:(_Bool)arg2;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableRelevanceEngines:(CDUnknownBlockType)arg1;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_unavailableEngineWithNameError:(id)arg1;
- (void)_accesssEngineWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_engineWithName:(id)arg1;
- (void)_relevanceEnginesDidChange;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

