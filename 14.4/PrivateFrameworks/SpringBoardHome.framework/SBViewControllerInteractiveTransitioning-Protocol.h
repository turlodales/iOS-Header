//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBViewControllerPercentDrivenTransitionUpdating-Protocol.h>
#import <SpringBoardHome/SBViewControllerReversibleTransitioning-Protocol.h>
#import <SpringBoardHome/UIViewControllerInteractiveTransitioning-Protocol.h>

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerInteractiveTransitioning <UIViewControllerInteractiveTransitioning, SBViewControllerPercentDrivenTransitionUpdating, SBViewControllerReversibleTransitioning>
- (void)finishInteractiveTransition;
- (void)startInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1;
@end

