//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer
{
    double _zoomDraggingResistance;
    double _translation;
    double _scale;
    double _velocity;
    double _previousVelocity;
    _Bool _didStartUpdate;
    double _lastUpdateTimestamp;
}

@property(nonatomic) double zoomDraggingResistance; // @synthesize zoomDraggingResistance=_zoomDraggingResistance;
- (void)_updateScaleAndVelocityIfNeeded:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double velocity;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

