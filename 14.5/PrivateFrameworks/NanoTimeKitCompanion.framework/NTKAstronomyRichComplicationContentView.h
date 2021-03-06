//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKAstronomyVistaViewObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLKDevice, CLKUIQuadView, CLLocation, NSDate, NTKAstronomyLocationDot, NTKAstronomyVistaView, NTKDelayedBlock;

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver, NTKTimeTravel>
{
    NTKAstronomyVistaView *_astronomyVistaView;
    NTKAstronomyLocationDot *_locationDot;
    CLKDevice *_device;
    long long _family;
    NSDate *_timelineDate;
    NSDate *_timeTravelDate;
    unsigned int _isPaused:1;
    unsigned int _isAnimating:1;
    unsigned int _isRenderOneFrame:1;
    NTKDelayedBlock *_stopAnimationDelayedBlock;
    CLLocation *_currentLocation;
}

- (void).cxx_destruct;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
@property(readonly, nonatomic) CLKUIQuadView *quadView;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)prepareWristRaiseAnimation;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)handleTemplateMetadata:(id)arg1 reason:(long long)arg2;
- (void)_hideLocationDot;
- (void)_showLocationDot;
- (void)layoutSubviews;
- (void)applyPausedUpdate:(_Bool)arg1;
- (id)initForDevice:(id)arg1 family:(long long)arg2 diameter:(double)arg3;

@end

