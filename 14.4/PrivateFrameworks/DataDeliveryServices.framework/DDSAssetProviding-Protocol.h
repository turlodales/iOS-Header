//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssetQuery, DDSAttributeFilter, NSArray, NSSet, NSString;
@protocol DDSAssetProvidingDelegate;

@protocol DDSAssetProviding <NSObject>
@property(retain, nonatomic) id <DDSAssetProvidingDelegate> delegate;
- (void)serverDidUpdateAssetsWithType:(NSString *)arg1;
- (void)removeOldAssetsForAssertions:(NSSet *)arg1;
- (void)removeAssetsForAssertions:(NSSet *)arg1;
- (void)updateCatalogForAssetTypes:(NSSet *)arg1 discretionaryDownload:(_Bool)arg2 withCompletion:(void (^)(NSError *))arg3;
- (NSArray *)allContentItemsMatchingQuery:(DDSAssetQuery *)arg1 error:(id *)arg2;
- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (NSArray *)assetsForQuery:(DDSAssetQuery *)arg1 errorPtr:(id *)arg2;
- (void)beginDownloadForAssertions:(NSSet *)arg1 discretionaryDownload:(_Bool)arg2;
@end

