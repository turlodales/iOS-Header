//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PHFetchResult;

@interface PXPhotosDataSourceSectionCache : NSObject
{
    PHFetchResult *_collectionListFetchResult;
    NSArray *_assetCollections;
    NSDictionary *_assetCollectionToSection;
    long long _estimatedPhotosCount;
    long long _estimatedVideosCount;
    long long _estimatedOtherCount;
    long long _numberOfEnrichmentStateNotEnrichedAssetCollections;
    long long _numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
    long long _numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
    long long _numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
    long long _numberOfEnrichmentStateCompleteAssetCollections;
    long long _estimatedAssetCountWithEnrichmentStateNotEnriched;
    long long _estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
    long long _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
    long long _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
    long long _estimatedAssetCountWithEnrichmentStateComplete;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateComplete; // @synthesize estimatedAssetCountWithEnrichmentStateComplete=_estimatedAssetCountWithEnrichmentStateComplete;
@property(readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed; // @synthesize estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed=_estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
@property(readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore; // @synthesize estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore=_estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
@property(readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateAssetMetadataOnly; // @synthesize estimatedAssetCountWithEnrichmentStateAssetMetadataOnly=_estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
@property(readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateNotEnriched; // @synthesize estimatedAssetCountWithEnrichmentStateNotEnriched=_estimatedAssetCountWithEnrichmentStateNotEnriched;
@property(readonly, nonatomic) long long numberOfEnrichmentStateCompleteAssetCollections; // @synthesize numberOfEnrichmentStateCompleteAssetCollections=_numberOfEnrichmentStateCompleteAssetCollections;
@property(readonly, nonatomic) long long numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections; // @synthesize numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections=_numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
@property(readonly, nonatomic) long long numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections; // @synthesize numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections=_numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
@property(readonly, nonatomic) long long numberOfEnrichmentStateAssetMetadataOnlyAssetCollections; // @synthesize numberOfEnrichmentStateAssetMetadataOnlyAssetCollections=_numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
@property(readonly, nonatomic) long long numberOfEnrichmentStateNotEnrichedAssetCollections; // @synthesize numberOfEnrichmentStateNotEnrichedAssetCollections=_numberOfEnrichmentStateNotEnrichedAssetCollections;
@property(readonly, nonatomic) long long estimatedOtherCount; // @synthesize estimatedOtherCount=_estimatedOtherCount;
@property(readonly, nonatomic) long long estimatedVideosCount; // @synthesize estimatedVideosCount=_estimatedVideosCount;
@property(readonly, nonatomic) long long estimatedPhotosCount; // @synthesize estimatedPhotosCount=_estimatedPhotosCount;
@property(readonly, nonatomic) NSDictionary *assetCollectionToSection; // @synthesize assetCollectionToSection=_assetCollectionToSection;
@property(readonly, nonatomic) NSArray *assetCollections; // @synthesize assetCollections=_assetCollections;
@property(readonly, nonatomic) PHFetchResult *collectionListFetchResult; // @synthesize collectionListFetchResult=_collectionListFetchResult;
- (id)initWithCollectionListFetchResult:(id)arg1;

@end

