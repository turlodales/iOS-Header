//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface WFCompactPlatterPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
}

@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_animateDismissalWithTransitionContext:(id)arg1;
- (void)_animatePresentationWithTransitionContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initForPresenting:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

