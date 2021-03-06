//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXLayoutBlueprint, SXLayoutOptions, SXLayoutParameters;
@protocol SXLayoutCoordinator;

@protocol SXLayoutCoordinatorDelegate <NSObject>

@optional
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 didIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 cancelledLayoutWithOptions:(SXLayoutOptions *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willLayoutWithParameters:(SXLayoutParameters *)arg2;
@end

