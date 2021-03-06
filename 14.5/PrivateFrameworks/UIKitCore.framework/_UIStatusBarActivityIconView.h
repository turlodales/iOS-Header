//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarImageView.h>

#import <UIKitCore/_UIStatusBarPersistentAnimation-Protocol.h>

@class CAShapeLayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarActivityIconView : _UIStatusBarImageView <_UIStatusBarPersistentAnimation>
{
    _Bool _ringing;
    double _ringingIconScale;
    CAShapeLayer *_innerRingShapeLayer;
    CAShapeLayer *_outerRingShapeLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *outerRingShapeLayer; // @synthesize outerRingShapeLayer=_outerRingShapeLayer;
@property(retain, nonatomic) CAShapeLayer *innerRingShapeLayer; // @synthesize innerRingShapeLayer=_innerRingShapeLayer;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setRinging:(_Bool)arg1 forUpdate:(id)arg2;
- (void)resumePersistentAnimation;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)applyStyleAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)_teardownRingingLayers;
- (void)_setupRingingLayersForStyleAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

