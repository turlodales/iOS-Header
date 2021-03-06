//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray, PHAssetCollection, PHFetchOptions, PHFetchResult;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder
{
    unsigned long long _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _numberOfAllPeople;
    PHAssetCollection *_assetCollection;
    PHFetchOptions *_assetFetchOptions;
}

+ (id)feederForAssetCollection:(id)arg1 options:(id)arg2 feederPrefetchOptions:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) PHFetchOptions *assetFetchOptions; // @synthesize assetFetchOptions=_assetFetchOptions;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) double behavioralScore;
@property(readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property(readonly, nonatomic) unsigned long long numberOfShinyGemItems;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
@property(readonly, nonatomic) unsigned long long numberOfAllPeople;
- (id)localEndDate;
- (id)localStartDate;
- (id)universalEndDate;
- (id)universalStartDate;
@property(readonly, nonatomic) _Bool hasNonJunkAssets;
@property(readonly, nonatomic) _Bool hasBestScoringAssets;
@property(readonly, nonatomic) _Bool hasFavoritedAssets;
@property(readonly, nonatomic) _Bool hasPeople;
- (unsigned long long)numberOfItems;
- (_Bool)_shouldPrefetchCurationInformation;
- (id)initWithAssetFetchResult:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 assetFetchOptions:(id)arg2 feederPrefetchOptions:(id)arg3;

@end

