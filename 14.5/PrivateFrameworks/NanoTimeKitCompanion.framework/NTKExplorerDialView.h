//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer, CLKDevice, NSArray;

@interface NTKExplorerDialView : UIView
{
    CLKDevice *_device;
    _Bool _editing;
    CALayer *_ringLayer;
    CAReplicatorLayer *_hourReplicatorLayer;
    CALayer *_hourTickLayer;
    CAReplicatorLayer *_minuteReplicatorLayer;
    CAReplicatorLayer *_minuteCollectionLayer;
    CALayer *_minuteTickLayer;
    CAReplicatorLayer *_subdialReplicatorLayer;
    CALayer *_secondTickLayer;
    NSArray *_hourNumerals;
    NSArray *_minuteNumerals;
    unsigned long long _currentDensityTransition;
    unsigned long long _density;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long density; // @synthesize density=_density;
- (id)_minuteTickShrinkAndGrow;
- (id)_minuteClusterExpandAnimation;
- (id)_minuteTickBreakAnimation;
- (id)_hourNumeralHideAnimation;
- (id)_numeralShowAnimation;
- (id)_secondTickBrightenAnimation;
- (id)_secondTickDimAnimation;
- (id)_minuteTickShowAnimation;
- (void)_addOrRemoveChildLayers;
@property(readonly, nonatomic) CALayer *subdialLayer;
- (void)applyZoomFraction:(double)arg1;
- (void)cleanupAfterZoom;
- (void)prepareForZoom;
- (id)_instantaneousAnimationForKeyPath:(id)arg1 value:(id)arg2;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)_applyDensity:(unsigned long long)arg1;
- (void)cleanupAfterEditing;
- (void)prepareForEditing;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end

