//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTStateModelLocation;

@interface RTStateDepictionAggStateStats : NSObject
{
    int _numOfEntries;
    RTStateModelLocation *_location;
    double _aggregateTime_s;
    double _lastExit_s;
}

- (void).cxx_destruct;
@property(nonatomic) int numOfEntries; // @synthesize numOfEntries=_numOfEntries;
@property(nonatomic) double lastExit_s; // @synthesize lastExit_s=_lastExit_s;
@property(nonatomic) double aggregateTime_s; // @synthesize aggregateTime_s=_aggregateTime_s;
@property(retain, nonatomic) RTStateModelLocation *location; // @synthesize location=_location;
- (id)init;

@end

