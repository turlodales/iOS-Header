//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface SHTaggingViewAutoShadowLayer : CALayer
{
    CALayer *_autoShadowBackgroundLayer;
    CAShapeLayer *_autoShadowOuterLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *autoShadowOuterLayer; // @synthesize autoShadowOuterLayer=_autoShadowOuterLayer;
@property(retain, nonatomic) CALayer *autoShadowBackgroundLayer; // @synthesize autoShadowBackgroundLayer=_autoShadowBackgroundLayer;
- (void)layoutSublayers;
- (void)setupSublayers;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

