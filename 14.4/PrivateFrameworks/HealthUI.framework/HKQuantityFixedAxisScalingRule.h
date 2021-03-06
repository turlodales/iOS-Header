//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAbstractFixedAxisScalingRule.h>

@class HKUnit, HKValueRange, NSDictionary;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule
{
    HKValueRange *_defaultQuantityBounds;
    NSDictionary *_quantityBoundsOverrides;
    HKUnit *_unit;
}

+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
- (id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2;
- (void)_convertQuantityRanges;
- (_Bool)isCompatibleWithQuantityType:(id)arg1;

@end

