//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsSessionObserver-Protocol.h"

@class Result, RideBookingPlanningSession, RideBookingRideOptionState;

@protocol RideBookingPlanningSessionObserver <MapsSessionObserver>
- (void)RideBookingPlanningSession:(RideBookingPlanningSession *)arg1 rideOptionStateDidChange:(RideBookingRideOptionState *)arg2;
- (void)RideBookingPlanningSession:(RideBookingPlanningSession *)arg1 didFinishResolvingWaypointSet:(Result *)arg2;
@end

