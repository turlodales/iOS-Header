//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTStateModelAlgorithms : NSObject
{
}

+ (double)timeByAddingUnit:(unsigned long long)arg1 value:(long long)arg2 toTime:(double)arg3;
+ (id)adjustedDateInterval:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4;
+ (id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4 outDeltaDays:(long long *)arg5;
+ (id)adjustedDate:(id)arg1 betweenMinDate:(id)arg2 maxDate:(id)arg3 strideDays:(unsigned long long)arg4;
+ (id)bucketizeDates:(id)arg1 bucketInterval:(double)arg2 latestDate:(id)arg3;

@end

