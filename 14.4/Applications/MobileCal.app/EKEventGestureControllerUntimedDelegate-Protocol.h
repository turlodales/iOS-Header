//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class EKEvent, EKEventGestureController, UIView, UIViewController;

@protocol EKEventGestureControllerUntimedDelegate
- (UIViewController *)eventGestureControllerCurrentPresentationController:(EKEventGestureController *)arg1;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestedCancellationAnimationAtPoint:(struct CGPoint)arg2 withOccurrence:(EKEvent *)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsShowEvent:(EKEvent *)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsPresentationOfViewController:(UIViewController *)arg2;
- (void)eventGestureControllerDragFailed:(EKEventGestureController *)arg1;
- (void)eventGestureController:(EKEventGestureController *)arg1 setDraggingViewHidden:(_Bool)arg2;
- (_Bool)eventGestureControllerShouldAllowLongPress:(EKEventGestureController *)arg1;
- (void)eventGestureControllerScrollTimerFired:(EKEventGestureController *)arg1;
- (void)eventGestureControllerCancelled:(EKEventGestureController *)arg1;
- (struct CGRect)eventGestureController:(EKEventGestureController *)arg1 finalFrameAfterCommitAtPoint:(struct CGPoint)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 commitToPoint:(struct CGPoint)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 updateToPoint:(struct CGPoint)arg2;
- (void)eventGestureControllerRequestsUpdateOfDraggingView:(EKEventGestureController *)arg1;
- (UIView *)eventGestureControllerGetCurrentDraggingView:(EKEventGestureController *)arg1;
- (EKEvent *)eventGestureController:(EKEventGestureController *)arg1 setUpAtPoint:(struct CGPoint)arg2 withOccurrence:(EKEvent *)arg3 forceNewEvent:(_Bool)arg4;
- (EKEvent *)eventGestureController:(EKEventGestureController *)arg1 eventToStartInteractionWithAtPoint:(struct CGPoint)arg2;
- (UIView *)touchTrackingViewForEventGestureController:(EKEventGestureController *)arg1;
@end

