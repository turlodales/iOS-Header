//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/MRUVolumeSlider.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIView;
@protocol MRUNowPlayingVolumeSliderDelegate;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingVolumeSlider : MRUVolumeSlider <UIGestureRecognizerDelegate>
{
    _Bool _syncingEnabled;
    id <MRUNowPlayingVolumeSliderDelegate> _delegate;
    long long _syncState;
    UIImpactFeedbackGenerator *_positiveFeedbackGenerator;
    UINotificationFeedbackGenerator *_negativeFeedbackGenerator;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_growingThumbView;
    double _forcePercent;
    double _initialX;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
@property(nonatomic) double initialX; // @synthesize initialX=_initialX;
@property(nonatomic) double forcePercent; // @synthesize forcePercent=_forcePercent;
@property(retain, nonatomic) UIView *growingThumbView; // @synthesize growingThumbView=_growingThumbView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator; // @synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator;
@property(retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator; // @synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator;
@property(nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(nonatomic) __weak id <MRUNowPlayingVolumeSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shrinkThumbAfterDelay:(double)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

