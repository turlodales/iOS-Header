//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGEnrichmentProfile-Protocol.h>

@class NSDictionary, NSString, PGDejunkerDeduperOptions, PGManager, PLDateRangeTitleGenerator;

@interface PGAggregationEnrichmentProfile : NSObject <PGEnrichmentProfile>
{
    _Bool _collectsDebugInfo;
    PGManager *_manager;
    PGDejunkerDeduperOptions *_extendedCurationOptions;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PLDateRangeTitleGenerator *dateRangeTitleGenerator; // @synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator;
@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // @synthesize extendedCurationOptions=_extendedCurationOptions;
@property(nonatomic) _Bool collectsDebugInfo; // @synthesize collectsDebugInfo=_collectsDebugInfo;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)moodWithHighlightTailorContext:(id)arg1 moodGenerationContext:(id)arg2;
- (double)promotionScoreWithHighlightTailorContext:(id)arg1;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
@property(readonly) NSDictionary *debugInfos;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
- (id)curationOptionsForForHighlightTailorContext:(id)arg1;
- (id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(_Bool)arg4;
- (id)highlightTailorContextForHighlight:(id)arg1;
- (_Bool)canUseLocationInformationForHighlightTailorContext:(id)arg1;
- (_Bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned short targetEnrichmentState;

@end

