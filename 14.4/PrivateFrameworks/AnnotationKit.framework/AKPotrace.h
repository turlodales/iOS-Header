//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKPotrace : NSObject
{
    struct CGPath *_cachedPath;
    struct potrace_bitmap_s *_potraceBitmap;
    struct potrace_param_s *_potraceParameters;
}

+ (struct CGPath *)newCGPathFromPotracePath:(struct potrace_path_s *)arg1;
- (void)_generatePath;
- (void)_clearPathIfNecessary;
@property double opttolerance;
@property int opticurve;
@property double alphamax;
@property int turnpolicy;
@property int turdsize;
- (struct CGPath *)CGPath;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 flipped:(_Bool)arg2 whiteIsInside:(_Bool)arg3;

@end

