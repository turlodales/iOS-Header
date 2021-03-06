//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DChartBasicElementProperties.h>

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties
{
    float _depthGapFactor;
    float _depthLimitFactor;
    float _shadowCameraDepthLimitAdjustmentFactor;
    unsigned long long _maxLimitingSeries;
}

@property(readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor; // @synthesize shadowCameraDepthLimitAdjustmentFactor=_shadowCameraDepthLimitAdjustmentFactor;
@property(readonly, nonatomic) float depthLimitFactor; // @synthesize depthLimitFactor=_depthLimitFactor;
@property(readonly, nonatomic) float p_sageInterSetDepthGapProperty; // @synthesize p_sageInterSetDepthGapProperty=_depthGapFactor;
- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(tvec2_3b141483)arg3 propertyAccessor:(id)arg4;
- (float)depthForScene:(id)arg1;
- (float)chartMinZForScene:(id)arg1;
- (void)reset;
- (void)resetWithEnumerator:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (void)updateLabels;
- (tvec2_3b141483)seriesSize;
@property(readonly, nonatomic) long long seriesCount;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

