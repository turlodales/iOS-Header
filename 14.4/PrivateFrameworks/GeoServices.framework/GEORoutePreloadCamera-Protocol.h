//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOTileKeyList, NSDictionary;

@protocol GEORoutePreloadCamera <NSObject>
- (void)implicateTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 route:(GEOComposedRoute *)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(_Bool)arg4 into:(GEOTileKeyList *)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(NSDictionary *)arg8;
@end

