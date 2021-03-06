//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

@class VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapGestureCameraController : VKGestureCameraBehavior
{
    struct CGPoint _panLastScreenPoint;
    _Bool _isPitchIncreasing;
    double _beganPitch;
    double _currentPitch;
    VKTimedAnimation *_zoomAnimation;
}

- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1 delta:(Matrix_6e1d3589)arg2;
- (Matrix_6e1d3589)positionClampedToCameraRestriction:(Matrix_6e1d3589)arg1;
- (_Bool)isPitchIncreasing;
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end

