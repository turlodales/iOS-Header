//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKGestureCameraBehavior.h>

__attribute__((visibility("hidden")))
@interface VKGlobeGestureCameraController : VKGestureCameraBehavior
{
    struct GlobeView *_globeView;
    struct CameraManager *_cameraManager;
    double _beganDoublePanPitch;
    double _currentDoublePanPitch;
    _Bool _isPitchIncreasing;
}

- (_Bool)isPitchIncreasing;
- (void)endPitch:(struct CGPoint)arg1;
- (void)updatePitch:(struct CGPoint)arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)beginPitch:(struct CGPoint)arg1;
- (void)endRotate:(struct CGPoint)arg1;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)beginRotate:(struct CGPoint)arg1;
- (void)endPan:(struct CGPoint)arg1;
- (void)updatePan:(struct CGPoint)arg1 lastScreenPoint:(struct CGPoint)arg2;
- (void)beginPan:(struct CGPoint)arg1;
- (void)endZoom:(struct CGPoint)arg1;
- (void)updateZoom:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)beginZoom:(struct CGPoint)arg1;
- (void)setCameraManager:(struct CameraManager *)arg1;
- (void)setGlobeView:(struct GlobeView *)arg1;

@end

