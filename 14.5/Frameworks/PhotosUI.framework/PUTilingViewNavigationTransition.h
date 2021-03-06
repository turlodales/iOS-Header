//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUNavigationTransition.h>

#import <PhotosUI/PUTilingViewControllerTransition-Protocol.h>

@class NSString, PUTilingViewTransitionHelper;

__attribute__((visibility("hidden")))
@interface PUTilingViewNavigationTransition : PUNavigationTransition <PUTilingViewControllerTransition>
{
    PUTilingViewTransitionHelper *__tilingViewTransitionHelper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper; // @synthesize _tilingViewTransitionHelper=__tilingViewTransitionHelper;
- (void)resumeTransition:(_Bool)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (void)pauseTransition;
@property(readonly, nonatomic, getter=isTransitionPaused) _Bool transitionPaused;
@property(readonly, nonatomic) _Bool hasStarted;
- (void)_animateTransitionWithOperation:(long long)arg1;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (_Bool)isInteractive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

