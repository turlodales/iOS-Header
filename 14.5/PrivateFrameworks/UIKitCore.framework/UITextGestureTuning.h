//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UITextMagnifierTimeWeightedPoint, UITextSelectionWindowAveragedValue;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface UITextGestureTuning : NSObject
{
    _Bool _didBreakLineThresholdBelow;
    _Bool _didBreakLineThresholdAbove;
    double _visibilityOffset;
    double _initialOffset;
    double _initialOffsetFromTopOfCaret;
    UITextSelectionWindowAveragedValue *_averagedRadius;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    long long _lastTouchType;
    _Bool _shouldUseLineThreshold;
    _Bool _shouldIncludeConstantOffset;
    _Bool _includeTipProjection;
    _Bool _strongerBiasAgainstUp;
    NSObject<UICoordinateSpace> *_coordinateSpace;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool strongerBiasAgainstUp; // @synthesize strongerBiasAgainstUp=_strongerBiasAgainstUp;
@property(nonatomic) _Bool includeTipProjection; // @synthesize includeTipProjection=_includeTipProjection;
@property(nonatomic) _Bool shouldIncludeConstantOffset; // @synthesize shouldIncludeConstantOffset=_shouldIncludeConstantOffset;
@property(readonly, nonatomic) double visibilityOffset; // @synthesize visibilityOffset=_visibilityOffset;
@property(nonatomic) _Bool shouldUseLineThreshold; // @synthesize shouldUseLineThreshold=_shouldUseLineThreshold;
@property(nonatomic) __weak NSObject<UICoordinateSpace> *coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (void)updateWeightedPointWithGestureState:(long long)arg1 location:(struct CGPoint)arg2;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)updateVisibilityOffsetForGestureState:(long long)arg1 touchType:(long long)arg2 locationInSceneReferenceSpace:(struct CGPoint)arg3 majorRadius:(double)arg4;
- (void)updateWithTouches:(id)arg1 gestureState:(long long)arg2;
- (void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2;
- (struct CGPoint)pointForGestureState:(long long)arg1 point:(struct CGPoint)arg2 translation:(struct CGPoint)arg3;
- (id)init;

@end

