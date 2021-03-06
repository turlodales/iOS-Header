//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

#import <coreroutine/_TtP8MapsSync25MapsSyncDataQueryDelegate_-Protocol.h>

@class NSMutableDictionary, RTMapServiceManager;

@interface RTMapsSupportManager : RTService <_TtP8MapsSync25MapsSyncDataQueryDelegate_>
{
    NSMutableDictionary *_queryMap;
    RTMapServiceManager *_mapServiceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property(retain, nonatomic) NSMutableDictionary *queryMap; // @synthesize queryMap=_queryMap;
- (void)queryContentsDidChangeWithQuery:(id)arg1;
- (long long)_queryTypeForQuery:(id)arg1;
- (void)_fetchReviewedPlacesWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchReviewedPlacesWrapperWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_fetchPinnedPlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)_clearParkedCarBulletin;
- (void)_showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)_showParkedCarBulletinForEvent:(id)arg1;
- (void)fetchReviewedPlacesWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchHistoryEntryRoutesWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchHistoryEntryPlaceDisplaysWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPinnedPlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)clearParkedCarBulletin;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)_createQueries;
- (void)_setup;
- (id)initWithMapServiceManager:(id)arg1;
- (id)init;

@end

