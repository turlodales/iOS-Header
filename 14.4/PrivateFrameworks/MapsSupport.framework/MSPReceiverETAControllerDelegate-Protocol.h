//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class GEOSharedNavState, MSPReceiverETAController;

@protocol MSPReceiverETAControllerDelegate <NSObject>
- (void)etaController:(MSPReceiverETAController *)arg1 sharedTripDidBecomeUnavailable:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 sharedTripDidClose:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateReachedDestinationForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateRouteForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateETAForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 didUpdateDestinationForSharedTrip:(GEOSharedNavState *)arg2;
- (void)etaController:(MSPReceiverETAController *)arg1 sharedTripDidBecomeAvailable:(GEOSharedNavState *)arg2;
@end

