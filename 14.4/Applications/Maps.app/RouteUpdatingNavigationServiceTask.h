//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOTransitRouteUpdaterDelegate-Protocol.h"
#import "MNNavigationServiceObserver-Protocol.h"
#import "RouteUpdatingTask-Protocol.h"

@class GEOTransitRouteUpdater, NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RouteUpdatingNavigationServiceTask : NSObject <MNNavigationServiceObserver, GEOTransitRouteUpdaterDelegate, RouteUpdatingTask>
{
    CDUnknownBlockType _handler;
    NSSet *_routeIDs;
    NSSet *_routeUpdateRequests;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOTransitRouteUpdater *_transitRouteUpdater;
}

- (void).cxx_destruct;
- (void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
- (void)navigationService:(id)arg1 willRequestRealtimeUpdatesForRouteIDs:(id)arg2;
- (void)navigationService:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)_createTransitRouteUpdaterIfNeeded;
- (void)_updateRouteUpdateObservationIfNeededWithRoutes:(id)arg1;
- (_Bool)_shouldUseNavigationServiceForRoutes:(id)arg1;
- (void)_refreshUpdateEnabledForCurrentState;
- (void)_resumeUpdates;
- (void)_pauseUpdates;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (void)stop;
- (void)startWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithRoutes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

