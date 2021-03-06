//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDateIntervalTree, NSDate, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HDSHSleepPeriodSegmentArrayBuilder : NSObject
{
    NSMutableArray *_segments;
    long long _category;
    double _minimumInterSegmentTimeInterval;
    NSDate *_minDate;
    NSDate *_maxDate;
    HKDateIntervalTree *_sampleIntervals;
    _Bool _containsAppleSleepTrackingData;
}

- (void).cxx_destruct;
- (id)finish;
- (id)_createSegmentAndReset;
- (void)addOrderedSample:(id)arg1;
- (id)initWithCategory:(long long)arg1;

@end

