//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCH3DSageFillData-Protocol.h>

@class NSMutableArray, TSCH3DFill;

@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData>
{
    TSCH3DFill *mFill;
    NSMutableArray *mTextures;
    NSMutableArray *mTextureBlendModes;
}

+ (id)dataWithFill:(id)arg1;
- (id)fillSetIdentifier;
- (id)textureForIndex:(unsigned long long)arg1;
- (id)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (_Bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (_Bool)isLayerEnabledForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (struct Color)emissive;
- (struct Color)specular;
- (struct Color)diffuse;
- (float)shininess;
- (float)opacity;
- (id)materialAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulateCount;
- (unsigned long long)diffuseCount;
- (id)environment;
- (id)modulateMaterial;
- (id)diffuseMaterial;
- (id)phongMaterials;
- (id)lightingModel;
- (void)p_addMaterial:(id)arg1 blendMode:(long long)arg2;
- (void)dealloc;
- (id)initWithFill:(id)arg1;

@end

