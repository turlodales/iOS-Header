//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACSimpleRateLimiter : NSObject
{
    unsigned long long _maximum;
    double _timeInterval;
    NSLock *_instanceLock;
    NSMutableArray *_sortedActionDates;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *sortedActionDates; // @synthesize sortedActionDates=_sortedActionDates;
@property(retain) NSLock *instanceLock; // @synthesize instanceLock=_instanceLock;
@property(readonly) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly) unsigned long long maximum; // @synthesize maximum=_maximum;
- (void)locked_addDate:(id)arg1;
- (void)locked_removeDatesBefore:(id)arg1;
- (unsigned long long)locked_indexOfFirstAfter:(id)arg1;
@property(readonly) NSDate *rateLimitingStartDate;
- (_Bool)isEmptyAfterFlushing;
- (_Bool)reservePerformActionNow;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end

