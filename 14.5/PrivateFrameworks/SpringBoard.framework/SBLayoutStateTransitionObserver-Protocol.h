//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBLayoutStateTransitionContext, SBLayoutStateTransitionCoordinator;

@protocol SBLayoutStateTransitionObserver <NSObject>

@optional
- (void)layoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 transitionDidEndWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)layoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 transitionWillEndWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)layoutStateTransitionCoordinator:(SBLayoutStateTransitionCoordinator *)arg1 transitionDidBeginWithTransitionContext:(SBLayoutStateTransitionContext *)arg2;
@end

