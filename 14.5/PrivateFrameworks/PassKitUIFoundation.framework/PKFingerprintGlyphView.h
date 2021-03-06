//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKMicaResizableView-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSString, UIColor;
@protocol PKFingerprintGlyphViewDelegate;

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView>
{
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned long long _transitionIndex;
    _Bool _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    _Bool _rotatingRing;
    NSString *_rotationAnimationKey;
    _Bool _fadeOnRecognized;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    long long _state;
    CALayer *_contentLayer;
    id <PKFingerprintGlyphViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKFingerprintGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool fadeOnRecognized; // @synthesize fadeOnRecognized=_fadeOnRecognized;
@property(copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (id)pathStateForLayer:(id)arg1;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)_applyColor:(id)arg1 toShapeLayers:(id)arg2 animated:(_Bool)arg3;
- (void)_applySecondaryColorAnimated:(_Bool)arg1;
- (void)setSecondaryColor:(id)arg1 animated:(_Bool)arg2;
- (void)_applyPrimaryColorAnimated:(_Bool)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(_Bool)arg2;
- (void)_setProgress:(double)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned long long)arg3;
- (void)setProgress:(double)arg1 withDuration:(double)arg2;
- (void)setContentLayerOpacity:(double)arg1 withDuration:(double)arg2;
- (void)_endRotationAnimation;
- (void)_startRotationAnimation;
- (void)_restartRotationIfNecessary;
- (void)_updateRotationAnimationsIfNecessary;
- (void)_setRingState:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)arg1;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRecognizedIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)boundsSizeToMatchPointScale:(double)arg1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

