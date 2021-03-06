//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAnimationGroup.h>

__attribute__((visibility("hidden")))
@interface PUTimedAnimationGroup : PUAnimationGroup
{
    _Bool _areAnimationsPaused;
    double _pausedElapsedTime;
    double _beginTime;
}

@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)_update;
- (void)updateAnimations;
@property(readonly, nonatomic) double currentTime;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setElapsedTime:(double)arg1;
- (double)elapsedTime;
- (id)init;

@end

