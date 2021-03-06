//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, _MKZoomingPanGestureRecognizer;
@protocol MKZoomingGestureControlConfiguration;

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    _Bool _didReceive1stTap;
    _Bool _timerOn;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _MKZoomingPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _locationOfTapGesture;
    id <MKZoomingGestureControlConfiguration> _configuration;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <MKZoomingGestureControlConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) _MKZoomingPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)_tooSlow:(id)arg1;
- (void)_startTapTimer:(double)arg1;
- (void)_clearTapTimer;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) struct CGPoint locationOfTapGesture; // @synthesize locationOfTapGesture=_locationOfTapGesture;
@property(readonly, nonatomic) double velocity;
@property(readonly, nonatomic) double scale;
- (void)_panGestureRecognizerStateDidChange:(id)arg1;
- (void)_tapGestureRecognizerStateDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

