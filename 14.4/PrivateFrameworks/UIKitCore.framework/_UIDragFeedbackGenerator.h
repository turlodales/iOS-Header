//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFeedbackGenerator.h>

#import <UIKitCore/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
    long long _state;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

+ (Class)_configurationClass;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (void)_startPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;

@end

