//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/BCSMeasurement.h>

@class NSArray, NSDate;

@interface BCSTimingMeasurement : BCSMeasurement
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_realTimeMeasurementHandlers;
    long long _timingMeasurementType;
}

+ (id)newTimingMeasurement:(long long)arg1 withHandlers:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long timingMeasurementType; // @synthesize timingMeasurementType=_timingMeasurementType;
@property(readonly, nonatomic) NSArray *realTimeMeasurementHandlers; // @synthesize realTimeMeasurementHandlers=_realTimeMeasurementHandlers;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) double duration;
- (void)end;
- (void)begin;
- (id)_initWithType:(long long)arg1 handlers:(id)arg2;

@end

