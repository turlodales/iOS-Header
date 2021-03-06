//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSArray, NSString;

@interface PGMeaningSceneCriteria : NSObject <PGMeaningCriteria>
{
    _Bool _accumulateAssetCountsWithPositiveScenes;
    NSArray *_positiveScenes;
    NSArray *_negativeScenes;
    unsigned long long _minimumNumberOfPositiveScenes;
    unsigned long long _minimumNumberOfNegativeScenes;
    unsigned long long _minimumNumberOfAssetsWithPositiveScenes;
    unsigned long long _minimumNumberOfAssetsWithNegativeScenes;
    double _minimumRatioOfAssetsWithPositiveScenes;
}

+ (id)criteriaWithDictionary:(id)arg1;
+ (id)criteriaKey;
- (void).cxx_destruct;
@property(nonatomic) double minimumRatioOfAssetsWithPositiveScenes; // @synthesize minimumRatioOfAssetsWithPositiveScenes=_minimumRatioOfAssetsWithPositiveScenes;
@property(nonatomic) unsigned long long minimumNumberOfAssetsWithNegativeScenes; // @synthesize minimumNumberOfAssetsWithNegativeScenes=_minimumNumberOfAssetsWithNegativeScenes;
@property(nonatomic) _Bool accumulateAssetCountsWithPositiveScenes; // @synthesize accumulateAssetCountsWithPositiveScenes=_accumulateAssetCountsWithPositiveScenes;
@property(nonatomic) unsigned long long minimumNumberOfAssetsWithPositiveScenes; // @synthesize minimumNumberOfAssetsWithPositiveScenes=_minimumNumberOfAssetsWithPositiveScenes;
@property(nonatomic) unsigned long long minimumNumberOfNegativeScenes; // @synthesize minimumNumberOfNegativeScenes=_minimumNumberOfNegativeScenes;
@property(nonatomic) unsigned long long minimumNumberOfPositiveScenes; // @synthesize minimumNumberOfPositiveScenes=_minimumNumberOfPositiveScenes;
@property(retain, nonatomic) NSArray *negativeScenes; // @synthesize negativeScenes=_negativeScenes;
@property(retain, nonatomic) NSArray *positiveScenes; // @synthesize positiveScenes=_positiveScenes;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (_Bool)passesForMomentNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

