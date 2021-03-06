//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapAccessLine.h>

#import <GeoServices/GEOMapRoad-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad>
{
    shared_ptr_92bc9970 _roadEdge;
    unsigned long long _roadID;
}

+ (double)estimatedWidthForRoad:(CDStruct_4da79865 *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)tileKeys;
@property(readonly, nonatomic) unsigned long long roadID;
@property(readonly, nonatomic) NSString *internalRoadName;
- (id)findRoadsToNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsToPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFrom:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)roadEdgesWithHandler:(CDUnknownBlockType)arg1;
- (void)roadFeaturesWithHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) _Bool isRail;
@property(readonly, nonatomic) _Bool isBridge;
@property(readonly, nonatomic) _Bool isTunnel;
@property(readonly, nonatomic) _Bool speedLimitIsMPH;
@property(readonly, nonatomic) unsigned long long speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
- (id)initWithMap:(id)arg1 roadEdge:(shared_ptr_92bc9970)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double length;
@property(readonly) Class superclass;

@end

