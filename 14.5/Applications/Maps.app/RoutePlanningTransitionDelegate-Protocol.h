//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RoutePlanningTransitionContext, RoutePlanningTransitionController;

@protocol RoutePlanningTransitionDelegate <NSObject>
- (RoutePlanningTransitionContext *)transitionContextForTransitionController:(RoutePlanningTransitionController *)arg1;
- (void)transitionControllerWillFinish:(RoutePlanningTransitionController *)arg1;
- (void)transitionControllerWillStart:(RoutePlanningTransitionController *)arg1;
@end

