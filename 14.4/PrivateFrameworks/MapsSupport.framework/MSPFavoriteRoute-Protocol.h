//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPFavorite-Protocol.h>

@class GEOComposedWaypoint;

@protocol MSPFavoriteRoute <MSPFavorite>
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property(readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@end

