//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVNewsWidgetPlayerBehavior.h>

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;

__attribute__((visibility("hidden")))
@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior
{
    id <AVPlayerViewControllerContentTransitioning_NewsOnly> _legacyDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate; // @synthesize legacyDelegate=_legacyDelegate;
- (void)didCancelContentTransition;
- (void)willCancelContentTransition;
- (void)didCompleteContentTransition;
- (void)willCompleteContentTransition;
- (void)didUpdateContentTransitionProgress:(double)arg1;
- (void)willBeginContentTransition;
- (id)playerForContentTransitionType:(long long)arg1;

@end

