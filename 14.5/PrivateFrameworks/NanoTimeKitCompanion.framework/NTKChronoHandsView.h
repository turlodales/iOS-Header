//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class NTKChronoPalette, NTKHandView;

@interface NTKChronoHandsView : NTKAnalogHandsView
{
    _Bool _isChronoAnimationRunning;
    _Bool _minuteHandUsesManualTime;
    unsigned long long _timeScale;
    NTKChronoPalette *_palette;
    NTKHandView *_chronoSecondHandView;
    NTKHandView *_chronoFlybackSecondHandView;
    NTKHandView *_chronoMinuteHandView;
    NTKHandView *_chronoFlybackMinuteHandView;
}

+ (long long)preferredCountOfInstancesToCache;
- (void).cxx_destruct;
@property(nonatomic) _Bool minuteHandUsesManualTime; // @synthesize minuteHandUsesManualTime=_minuteHandUsesManualTime;
@property(readonly, nonatomic) NTKHandView *chronoFlybackMinuteHandView; // @synthesize chronoFlybackMinuteHandView=_chronoFlybackMinuteHandView;
@property(readonly, nonatomic) NTKHandView *chronoMinuteHandView; // @synthesize chronoMinuteHandView=_chronoMinuteHandView;
@property(readonly, nonatomic) NTKHandView *chronoFlybackSecondHandView; // @synthesize chronoFlybackSecondHandView=_chronoFlybackSecondHandView;
@property(readonly, nonatomic) NTKHandView *chronoSecondHandView; // @synthesize chronoSecondHandView=_chronoSecondHandView;
@property(retain, nonatomic) NTKChronoPalette *palette; // @synthesize palette=_palette;
@property(nonatomic) unsigned long long timeScale; // @synthesize timeScale=_timeScale;
- (double)secondsAnimationFPS;
- (double)upperDuration;
- (double)chronoDuration;
- (float)zRotationForTime:(double)arg1 withDuration:(float)arg2;
- (void)_enumerateFlybackChronoHands:(CDUnknownBlockType)arg1;
- (void)_enumeratePrimaryChronoHands:(CDUnknownBlockType)arg1;
- (void)_enumerateChronoHandViews:(CDUnknownBlockType)arg1;
- (long long)_stopwatchLapCount;
- (double)_stopwatchCurrentLapTime;
- (double)_stopwatchCurrentTime;
- (_Bool)_stopwatchIsStopped;
- (_Bool)_stopwatchIsRunning;
- (void)_enumerateSecondHandViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateLapHandsVisibility;
- (void)stopChronoAnimation;
- (void)startNewChronoAnimation;
- (void)showChronoMode;
- (void)showTimeMode;
- (void)layoutSubviews;
- (id)createSecondHandView;
- (id)createTinyBabyHandViewWithColor:(id)arg1;
- (id)initForDevice:(id)arg1;

@end

