//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GEOMapItemIdentifier, NSString;

@protocol PublisherAnalytics
- (void)publisherCollectionTapped:(GEOMapItemIdentifier *)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;
- (void)publisherCollectionsScrolledDown;
- (void)publisherCollectionsScrolledUp;
- (void)publisherFilterTappedWithValue:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (void)publisherHeaderCloseButtonTapped;
- (void)publisherHeaderWebsiteButtonTapped;
- (void)publisherHeaderAppButtonTapped;
- (void)publisherHeaderShareButtonTapped;
- (void)publisherTrayRevealed;
@end

