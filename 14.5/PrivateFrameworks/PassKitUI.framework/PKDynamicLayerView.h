//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEmitterLayer, CALayer, NSData, PKDynamicContentView, PKDynamicLayerConfiguration, PKDynamicLayerTransactionEffectConfiguration, PKPass, UIImage, UIImageView, _UIParallaxMotionEffect;

@interface PKDynamicLayerView : UIView
{
    PKPass *_pass;
    PKDynamicContentView *_backgroundParallaxView;
    PKDynamicContentView *_neutralView;
    PKDynamicContentView *_foregroundParallaxView;
    PKDynamicContentView *_staticOverlayView;
    UIImageView *_staticFallbackView;
    PKDynamicLayerConfiguration *_dynamicLayerConfiguration;
    PKDynamicLayerTransactionEffectConfiguration *_transactionEffectConfiguration;
    UIImage *_transactionEffectEmitterImage;
    NSData *_transactionEffectShapeData;
    CAEmitterLayer *_transactionEffectLayer;
    CALayer *_dimmingLayer;
    _UIParallaxMotionEffect *_bottomEffect;
    _UIParallaxMotionEffect *_topEffect;
    _Bool _invalidated;
    _Bool _paused;
    _Bool _loaded;
    _Bool _effectiveMotionEnabled;
    _Bool _automaticallyLoadContent;
    _Bool _motionEnabled;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isMotionEnabled) _Bool motionEnabled; // @synthesize motionEnabled=_motionEnabled;
@property(nonatomic) _Bool automaticallyLoadContent; // @synthesize automaticallyLoadContent=_automaticallyLoadContent;
- (id)_dimmingLayerAnimationWithDuration:(double)arg1;
- (void)runTransactionEffect;
- (void)_removeParallaxMotionEffect;
- (void)_addParallaxMotionEffect;
- (void)didMoveToWindow;
- (void)_updateVisibility;
- (void)_configureDynamicViewsWithImageSet:(id)arg1;
- (void)_configureViews;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)layoutSubviews;
- (void)invalidate;
- (void)dealloc;
- (void)loadContent;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2 automaticallyLoadContent:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2;

@end

