//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SeymourUI/NSObject-Protocol.h>

@class ARUICountdownAnimator;
@protocol ARUICountdownAnimation;

@protocol ARUICountdownAnimatorDelegate <NSObject>

@optional
- (void)countdownAnimatorDidFinishAnimating:(ARUICountdownAnimator *)arg1;
- (void)countdownAnimator:(ARUICountdownAnimator *)arg1 completedAnimation:(id <ARUICountdownAnimation>)arg2;
- (void)countdownAnimator:(ARUICountdownAnimator *)arg1 performingAnimation:(id <ARUICountdownAnimation>)arg2 withDuration:(double)arg3;
- (void)countdownAnimator:(ARUICountdownAnimator *)arg1 willBeginAnimation:(id <ARUICountdownAnimation>)arg2 afterDelay:(double)arg3;
- (void)countdownAnimatorWillBeginAnimating:(ARUICountdownAnimator *)arg1;
@end

