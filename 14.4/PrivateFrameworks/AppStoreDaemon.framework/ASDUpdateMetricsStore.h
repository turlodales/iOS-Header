//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSLock;

@interface ASDUpdateMetricsStore : NSObject
{
    NSLock *_lock;
    double _averagePollTime;
    NSArray *_metrics;
    NSDate *_lastAutoPollDate;
}

+ (id)_updateMetrics;
+ (void)_setUpdateMetrics:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastAutoPollDate; // @synthesize lastAutoPollDate=_lastAutoPollDate;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) double averagePollTime; // @synthesize averagePollTime=_averagePollTime;
- (void)_load;
- (id)_serialableData;
- (void)synchronize;
- (void)addPoll:(id)arg1;
- (id)init;

@end

