//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SBFOverlayDismissalDelegate, SBFOverlayObserving, UIViewControllerTransitionCoordinator;

@protocol SBFOverlayControlling
@property(nonatomic, getter=isOccluded) _Bool occluded;
@property(nonatomic) __weak id <SBFOverlayDismissalDelegate> dismissalDelegate;
@property(readonly, nonatomic, getter=isAnimatingPresentationProgress) _Bool animatingPresentationProgress;
@property(readonly, nonatomic, getter=isPresented) _Bool presented;
@property(nonatomic) double presentationProgress;
@property(readonly, nonatomic) double contentWidth;
- (void)removeHomeScreenOverlayObserver:(id <SBFOverlayObserving>)arg1;
- (void)addHomeScreenOverlayObserver:(id <SBFOverlayObserving>)arg1;
- (double)finalPresentationProgressForTranslation:(double)arg1 velocity:(double)arg2 initialPresentationProgress:(double)arg3 fromLeading:(_Bool)arg4;
- (double)presentationProgressForTranslation:(double)arg1 initialPresentationProgress:(double)arg2 fromLeading:(_Bool)arg3;
- (double)layerPresentationProgress;
- (void)dismissUsingViewControllerTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg1;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)presentAnimated:(_Bool)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)presentAnimated:(_Bool)arg1 fromLeading:(_Bool)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)setPresentationProgress:(double)arg1 fromLeading:(_Bool)arg2 interactive:(_Bool)arg3 animated:(_Bool)arg4 completionHandler:(void (^)(_Bool))arg5;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)setPresentationProgress:(double)arg1 fromLeading:(_Bool)arg2;
@end

