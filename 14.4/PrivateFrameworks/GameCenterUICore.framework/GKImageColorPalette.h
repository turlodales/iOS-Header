//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUICore/GKColorPalette.h>

@interface GKImageColorPalette : GKColorPalette
{
    unsigned int _hueSpread;
    unsigned int _saturationSpread;
    unsigned int _brightnessSpread;
    unsigned int _grayscaleSpread;
    struct HSVColor *_imageHSVMap;
    struct CGSize _imageSize;
    double _borderPercentageForBorderDetection;
    unsigned int _hueHistogram[360];
    unsigned int _saturationHistogram[256];
    unsigned int _brightnessHistogram[256];
}

- (id)initWithImage:(id)arg1;
- (_Bool)analyzeImage:(struct CGImage *)arg1;
- (void)findBrightColors;
- (void)iterateOverPixelsWithBlock:(CDUnknownBlockType)arg1 forHue:(unsigned int)arg2;
- (unsigned int)weightHistogram:(unsigned int *)arg1 size:(unsigned int)arg2 spread:(unsigned int)arg3;
- (void)printHistogram:(unsigned int *)arg1 ofSize:(unsigned int)arg2;
- (void)generateHSVMapWithContext:(struct CGContext *)arg1;
- (void)clearSaturationAndBrightnessHistograms;
- (void)clearMainHistograms;
- (void)reset;

@end

