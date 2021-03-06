//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCContentArchive, FCInterestToken, NSArray, NSString, NSURL, NTPBAVAsset;

@protocol FCAVAssetCacheType <NSObject>
- (FCInterestToken *)importAVAsset:(NTPBAVAsset *)arg1;
- (FCContentArchive *)contentArchiveForAssetIdentifier:(NSString *)arg1;
- (NSArray *)contentKeyIdentifiersForAllAssets;
- (NSArray *)contentKeyIdentifiersForAssetIdentifier:(NSString *)arg1;
- (void)adoptFileAtURL:(NSURL *)arg1 forAssetIdentifier:(NSString *)arg2 remoteURL:(NSURL *)arg3 contentKeyIdentifiers:(NSArray *)arg4 extension:(NSString *)arg5;
- (NSURL *)cachedFileURLForAssetIdentifier:(NSString *)arg1;
- (_Bool)containsAssetWithIdentifier:(NSString *)arg1;
- (FCInterestToken *)interestTokenForAssetIdentifiers:(NSArray *)arg1;
- (FCInterestToken *)interestTokenForAssetIdentifier:(NSString *)arg1;
@end

