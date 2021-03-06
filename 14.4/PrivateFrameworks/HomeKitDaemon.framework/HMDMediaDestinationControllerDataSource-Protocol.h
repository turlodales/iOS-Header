//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaDestinationControllerMetricsEventDispatcherDataSource-Protocol.h>

@class HMDAppleMediaAccessory, HMDMediaDestinationController, HMMediaDestination, NSArray, NSUUID;
@protocol HMDMediaDestinationManager;

@protocol HMDMediaDestinationControllerDataSource <HMDMediaDestinationControllerMetricsEventDispatcherDataSource>
- (NSArray *)availableDestinationIdentifiersForMediaDestinationController:(HMDMediaDestinationController *)arg1;
- (HMMediaDestination *)mediaDestinationController:(HMDMediaDestinationController *)arg1 rootDestinationWithDecendantIdentifier:(NSUUID *)arg2;
- (HMMediaDestination *)mediaDestinationController:(HMDMediaDestinationController *)arg1 destinationWithParentIdentifier:(NSUUID *)arg2;
- (id <HMDMediaDestinationManager>)mediaDestinationController:(HMDMediaDestinationController *)arg1 destinationManagerWithIdentifier:(NSUUID *)arg2;
- (HMDAppleMediaAccessory *)targetAccessoryForMediaDestinationController:(HMDMediaDestinationController *)arg1;
@end

