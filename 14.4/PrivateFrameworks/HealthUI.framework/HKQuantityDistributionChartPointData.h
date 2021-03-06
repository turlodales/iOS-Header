//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKUnit, NSArray, NSDate, NSString;

@interface HKQuantityDistributionChartPointData : NSObject <HKGraphSeriesChartData>
{
    NSDate *_startDate;
    NSDate *_endDate;
    double _minimumValue;
    double _maximumValue;
    double _averageValue;
    double _duration;
    double _minimumBucketValue;
    double _bucketIncrement;
    NSArray *_bucketCounts;
    NSArray *_contextIdentifiers;
    HKUnit *_unit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) NSArray *contextIdentifiers; // @synthesize contextIdentifiers=_contextIdentifiers;
@property(readonly, nonatomic) NSArray *bucketCounts; // @synthesize bucketCounts=_bucketCounts;
@property(readonly, nonatomic) double bucketIncrement; // @synthesize bucketIncrement=_bucketIncrement;
@property(readonly, nonatomic) double minimumBucketValue; // @synthesize minimumBucketValue=_minimumBucketValue;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double averageValue; // @synthesize averageValue=_averageValue;
@property(readonly, nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initWithDistributionData:(id)arg1 bucketIncrement:(double)arg2 unit:(id)arg3 displayType:(id)arg4;
- (id)initWithDistributionData:(id)arg1 unit:(id)arg2 displayType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

