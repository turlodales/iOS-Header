//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDateInterval, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HDSleepReportBuilder : NSObject
{
    NSDateInterval *_resultInterval;
    NSCalendar *_calendar;
    NSMutableDictionary *_inBedSamplesBySource;
}

- (void).cxx_destruct;
- (id)calculateResult;
- (void)addSleepSamples:(id)arg1;
- (id)_categorySampleBufferForSource:(id)arg1;
- (id)initWithResultInterval:(id)arg1 calendar:(id)arg2;

@end

