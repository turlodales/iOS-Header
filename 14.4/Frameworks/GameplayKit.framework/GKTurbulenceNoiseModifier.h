//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

@class GKPerlinNoiseSource;

__attribute__((visibility("hidden")))
@interface GKTurbulenceNoiseModifier : GKNoiseModifier
{
    double _power;
    double _frequency;
    double _roughness;
    int _seed;
    GKPerlinNoiseSource *_perlin[3];
}

- (void).cxx_destruct;
- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (void)dealloc;
- (id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

