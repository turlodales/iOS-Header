//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXSearchResultModelTranslator : NSObject
{
}

+ (_Bool)_isSinglePersonSearchResult:(id)arg1;
+ (id)searchResultsForTopAssetsResult:(id)arg1;
+ (id)searchResultsForAssetResults:(id)arg1;
+ (id)searchResultsForCollectionResults:(id)arg1;
+ (id)assetSearchResultsForPLTopAssetsSearchResult:(id)arg1;
+ (id)personSearchResultForPLAssetSearchResult:(id)arg1;
+ (id)_dateFromPSIDate:(id)arg1;
+ (unsigned long long)_collectionTypeForPLCollectionSearchResult:(id)arg1;
+ (id)collectionSearchResultForPLCollectionSearchResult:(id)arg1;
+ (unsigned long long)_assetAggregationTypeForPLAssetSearchResult:(id)arg1;
+ (id)assetAggregationSearchResultForPLAssetSearchResult:(id)arg1;
- (id)init;

@end

