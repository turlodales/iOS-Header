//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEONavdServerProxy : NSObject
{
}

- (void)forceCacheRefresh;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (void)getDirectionsForClient:(id)arg1 withRouteHypothesisRequest:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)close;
- (void)open;
- (id)init;

@end

