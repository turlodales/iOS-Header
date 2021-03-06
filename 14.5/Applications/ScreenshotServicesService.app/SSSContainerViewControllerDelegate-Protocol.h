//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSAnimationSettings, SSSContainerViewController;

@protocol SSSContainerViewControllerDelegate
- (void)containerViewController:(SSSContainerViewController *)arg1 willShowTestFlightUIWithBlock:(void (^)(void))arg2;
- (void)containerViewControllerEndedShowingWaitingForImageIdentifierUpdatesUI:(SSSContainerViewController *)arg1;
- (void)containerViewControllerBeganShowingWaitingForImageIdentifierUpdatesUI:(SSSContainerViewController *)arg1;
- (void)containerViewControllerEndedShowingSharingUI:(SSSContainerViewController *)arg1 inStateTransition:(_Bool)arg2;
- (void)containerViewController:(SSSContainerViewController *)arg1 willShowSharingUIWithBlock:(void (^)(void))arg2;
- (void)containerViewControllerEndedDragAndDrop:(SSSContainerViewController *)arg1 shouldDismiss:(_Bool)arg2;
- (void)containerViewControllerBeganDragAndDrop:(SSSContainerViewController *)arg1;
- (void)containerViewControllerHadGestureInteraction:(SSSContainerViewController *)arg1;
- (void)containerViewControllerDidEndDismissAnimation:(SSSContainerViewController *)arg1;
- (void)containerViewController:(SSSContainerViewController *)arg1 willBeginDismissAnimationWithSettings:(BSAnimationSettings *)arg2;
- (void)containerViewController:(SSSContainerViewController *)arg1 didTransitionToState:(unsigned long long)arg2;
- (void)containerViewController:(SSSContainerViewController *)arg1 willTransitionToState:(unsigned long long)arg2 animated:(_Bool)arg3 changeBlock:(void (^)(void))arg4;
@end

