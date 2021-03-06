//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class NSMeasurement, NSMeasurementFormatter;

@interface MXAverage : NSObject <NSSecureCoding>
{
    NSMeasurementFormatter *_averageMeasurementFormatter;
    NSMeasurement *_averageMeasurement;
    long long _sampleCount;
    double _standardDeviation;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) double standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(readonly) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly) NSMeasurement *averageMeasurement; // @synthesize averageMeasurement=_averageMeasurement;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3;
- (id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4;

@end

