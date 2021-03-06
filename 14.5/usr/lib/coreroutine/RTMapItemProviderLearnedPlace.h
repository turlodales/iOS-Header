//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMapItemProviderBase.h>

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTLearnedLocationStore, RTMapItemProviderLearnedPlaceParameters;

@interface RTMapItemProviderLearnedPlace : RTMapItemProviderBase <RTMapItemProvider>
{
    RTLearnedLocationStore *_learnedLocationStore;
    RTMapItemProviderLearnedPlaceParameters *_parameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) RTMapItemProviderLearnedPlaceParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) RTLearnedLocationStore *learnedLocationStore; // @synthesize learnedLocationStore=_learnedLocationStore;
- (id)adjustConfidenceAndCollectMetrics:(id)arg1 learnedPlace:(id)arg2 maxConfidence:(double)arg3;
- (double)confidenceForPlaceType:(unsigned long long)arg1;
- (unsigned long long)coalescedMapItemSourceForPlace:(id)arg1;
- (id)learnedPlaceForInferredMapItem:(id)arg1 error:(id *)arg2;
- (id)mapItemsWithOptions:(id)arg1 error:(id *)arg2;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3 parameters:(id)arg4;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

