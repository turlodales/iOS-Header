//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesAxisScalingRule-Protocol.h>

@class HKQuantityType, HKUnit, HKValueRange;

@protocol HKInteractiveChartsAxisScalingRule <HKGraphSeriesAxisScalingRule>
- (HKValueRange *)portraitYValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@optional
- (_Bool)isCompatibleWithQuantityType:(HKQuantityType *)arg1;
- (void)setUnit:(HKUnit *)arg1;
@end

