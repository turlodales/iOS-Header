//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTPerfBaseMeasurement.h>

#import <MetricsKit/MTFlexiblePerfMeasurementData-Protocol.h>

@class NSArray, NSString;

@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement <MTFlexiblePerfMeasurementData>
{
    NSString *_eventType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void)setXpSamplingPercentage:(double)arg1;
- (void)setXpSamplingForced:(_Bool)arg1;
- (void)mark:(id)arg1 time:(long long)arg2;
- (id)initWithMeasurementTransformer:(id)arg1 eventType:(id)arg2 eventData:(id)arg3;
- (void)mark:(id)arg1 date:(id)arg2;
- (void)mark:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *additionalFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *eventData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

