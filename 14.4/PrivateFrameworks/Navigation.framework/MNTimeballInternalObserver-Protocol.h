//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNPlannedDestination, MNRouteUpdate, NSError;
@protocol MNTimeballInternalProvider;

@protocol MNTimeballInternalObserver <NSObject>
- (void)provider:(id <MNTimeballInternalProvider>)arg1 didReceiveUpdate:(MNRouteUpdate *)arg2 forDestination:(MNPlannedDestination *)arg3;
- (void)provider:(id <MNTimeballInternalProvider>)arg1 didReceiveError:(NSError *)arg2 forDestination:(MNPlannedDestination *)arg3;
@end

