//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSIndexSet, NSPredicate, NSSet, PXIndexPathSet;
@protocol PXDisplayAssetCollection;

@protocol PXMutableAssetsDataSourceManager <NSObject>
@property(retain, nonatomic) NSPredicate *filterPredicate;
@property(nonatomic) long long backgroundFetchOriginSection;
- (void)setFilteringDisabled:(_Bool)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
- (void)setFilterPredicate:(NSPredicate *)arg1 provideIncrementalChangeDetailsForAssetCollections:(NSSet *)arg2;
- (void)refreshResultsForAssetCollection:(id <PXDisplayAssetCollection>)arg1;
- (void)stopExcludingAssets:(NSArray *)arg1;
- (void)excludeAssetsAtIndexPaths:(PXIndexPathSet *)arg1;
- (void)stopForceIncludingAllAssets;
- (void)forceIncludeAssetsAtIndexPaths:(PXIndexPathSet *)arg1;
- (void)startBackgroundFetchIfNeeded;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)ensureStartingSectionHasContent;
- (void)ensureLastSectionHasContent;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (void)setCurationEnabled:(_Bool)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
@end

