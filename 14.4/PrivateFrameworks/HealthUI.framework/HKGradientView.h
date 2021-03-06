//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKGradient;

@interface HKGradientView : UIView
{
    HKGradient *_gradient;
}

+ (Class)layerClass;
+ (id)hk_verticalWaveformMaskGradientWithInsetLocation:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HKGradient *gradient; // @synthesize gradient=_gradient;
- (void)_updateGradientLayer;
- (void)maskAllCornersWithRadius:(double)arg1;
- (void)maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (id)initWithGradient:(id)arg1;

@end

