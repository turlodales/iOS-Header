//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTLocationStoreMetrics : NSObject
{
    unsigned long long _count;
    double _distanceTraveled;
    double _maxIntervalBetweenLocations;
    double _spread;
}

@property(nonatomic) double spread; // @synthesize spread=_spread;
@property(nonatomic) double maxIntervalBetweenLocations; // @synthesize maxIntervalBetweenLocations=_maxIntervalBetweenLocations;
@property(nonatomic) double distanceTraveled; // @synthesize distanceTraveled=_distanceTraveled;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)description;
- (id)initWithCount:(unsigned long long)arg1 maxIntervalBetweenLocations:(double)arg2 spread:(double)arg3 distanceTraveled:(double)arg4;
- (id)init;

@end

