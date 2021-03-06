//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRouteCoordinateArray, GEOElevationProfile, GEOMapRegion, NSArray;

__attribute__((visibility("hidden")))
@interface GEORouteBuilderOutput : NSObject
{
    GEOComposedRouteCoordinateArray *_coordinatesArray;
    NSArray *_legs;
    NSArray *_segments;
    NSArray *_steps;
    NSArray *_guidanceEvents;
    NSArray *_enrouteNotices;
    NSArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    unsigned int _distance;
    _Bool _usesZilch;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(retain, nonatomic) NSArray *pointSections; // @synthesize pointSections=_pointSections;
@property(nonatomic) _Bool usesZilch; // @synthesize usesZilch=_usesZilch;
@property(retain, nonatomic) NSArray *enrouteNotices; // @synthesize enrouteNotices=_enrouteNotices;
@property(retain, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) NSArray *legs; // @synthesize legs=_legs;
@property(retain, nonatomic) GEOComposedRouteCoordinateArray *coordinatesArray; // @synthesize coordinatesArray=_coordinatesArray;
@property(readonly, nonatomic) GEOElevationProfile *elevationProfile;

@end

