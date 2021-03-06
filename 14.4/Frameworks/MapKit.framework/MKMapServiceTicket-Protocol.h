//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch, GEORPPlaceInfo, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol MKMapServiceTicket <NSObject>
@property(readonly, nonatomic) NSArray *publisherResults;
@property(readonly, nonatomic) NSArray *collectionResults;
@property(readonly, nonatomic) NSArray *relatedEntitySections;
@property(readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property(readonly, nonatomic) NSArray *searchResultSections;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) double requestResponseTime;
@property(readonly, nonatomic) _Bool showDymSuggestionCloseButton;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSArray *browseCategories;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)cancel;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

