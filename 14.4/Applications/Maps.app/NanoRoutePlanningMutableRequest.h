//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NanoRoutePlanningRequest.h"

@class GEOAutomobileOptions, GEOCompanionRouteContext, GEOCyclingOptions, GEOMapServiceTraits, GEOTransitOptions, GEOWalkingOptions, NSDate, NanoDirectionWaypoint;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningMutableRequest : NanoRoutePlanningRequest
{
}

- (void)copyFrom:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDate *arrivalDate; // @dynamic arrivalDate;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @dynamic automobileOptions;
@property(retain, nonatomic) GEOCompanionRouteContext *companionRouteContext; // @dynamic companionRouteContext;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @dynamic cyclingOptions;
@property(retain, nonatomic) NSDate *departureDate; // @dynamic departureDate;
@property(retain, nonatomic) NanoDirectionWaypoint *destinationWaypoint; // @dynamic destinationWaypoint;
@property(nonatomic) unsigned long long maximumNumberOfRoutes; // @dynamic maximumNumberOfRoutes;
@property(retain, nonatomic) NanoDirectionWaypoint *originWaypoint; // @dynamic originWaypoint;
@property(nonatomic) unsigned long long preferredMode; // @dynamic preferredMode;
@property(nonatomic) _Bool startNavigationAutomatically; // @dynamic startNavigationAutomatically;
@property(copy, nonatomic) GEOMapServiceTraits *traits; // @dynamic traits;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @dynamic transitOptions;
@property(nonatomic) int transportType; // @dynamic transportType;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @dynamic walkingOptions;

@end

