//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMetric.h>

#import <coreroutine/RTMetricProtocol-Protocol.h>

@class NSString;

@interface RTRelabelerPersisterMetrics : RTMetric <RTMetricProtocol>
{
}

+ (id)supportedMetricKeys;
+ (id)bucketedKeys;
+ (id)doubleKeys;
+ (id)unsignedIntegerKeys;
+ (id)booleanKeys;
+ (CDStruct_b8464340)event;
- (_Bool)submitMetricsWithError:(id *)arg1;
- (void)setDerivedMetrics;
- (void)setBucketedPercentageMetricsWithMappings:(id)arg1 sharedDenominator:(double)arg2 sharedBins:(id)arg3;
- (double)safeFraction:(double)arg1 denominator:(double)arg2;
- (void)setErrorKey:(id)arg1;
- (void)tallyError:(id)arg1;
- (void)tallyKey:(id)arg1;
- (id)initWithLoggingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

