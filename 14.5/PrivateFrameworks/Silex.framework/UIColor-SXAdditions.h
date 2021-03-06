//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (SXAdditions)
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (double)relativeLuminance;
- (id)invertedLightness;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
- (id)hex;
- (id)invertedBrightness;
- (id)invertedRGB;
- (void)_getHSBA:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double brightness;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
@end

