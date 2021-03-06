//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPlaybackStateDiffConsumer-Protocol.h>

@class NSString, PGControlsViewModelValues, PGPlaybackState;
@protocol PGControlsViewModelDelegate;

@interface PGControlsViewModel : NSObject <PGPlaybackStateDiffConsumer>
{
    double _lastKnownElapsedTime;
    _Bool _hasBegun;
    _Bool _interrupted;
    _Bool _preventsRestoreAndCancelActions;
    id <PGControlsViewModelDelegate> _delegate;
    PGPlaybackState *_playbackState;
    PGControlsViewModelValues *_values;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) PGControlsViewModelValues *values; // @synthesize values=_values;
@property(nonatomic) _Bool preventsRestoreAndCancelActions; // @synthesize preventsRestoreAndCancelActions=_preventsRestoreAndCancelActions;
@property(nonatomic, getter=isInterrupted) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(readonly, copy, nonatomic) PGPlaybackState *playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) __weak id <PGControlsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateViewModelValues;
@property(readonly, nonatomic) double preferredMinimumWidth;
@property(readonly, nonatomic) _Bool stashEventsShouldBeginAndEndInterruptions;
@property(readonly, nonatomic) _Bool isPrerollSkippable;
@property(readonly, nonatomic) long long secondsUntilPrerollSkippable;
- (void)handleSkipPrerollButtonTapped;
- (void)handleSkipForwardButtonTapped;
- (void)handleSkipBackButtonTapped;
- (void)handleRestoreButtonTapped;
- (void)handleDoubleDoubleTap;
- (void)handleSingleTap;
- (void)handleDoubleTap;
- (void)handleCancelButtonTapped;
- (void)handleActionButtonTapped;
- (unsigned long long)recommendedUpdateCadenceForProgressBarWithWidthInPixels:(double)arg1;
- (void)updatePlaybackStateWithDiff:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

