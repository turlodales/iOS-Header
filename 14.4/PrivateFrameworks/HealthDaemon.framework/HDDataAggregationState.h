//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKSample, NSMutableArray;

@interface HDDataAggregationState : NSObject
{
    NSMutableArray *_unaggregatedSensorData;
    HKSample *_openSeries;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKSample *openSeries; // @synthesize openSeries=_openSeries;
@property(readonly, nonatomic) NSMutableArray *unaggregatedSensorData; // @synthesize unaggregatedSensorData=_unaggregatedSensorData;
- (id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2;
- (id)initWithRemainingSensorData:(id)arg1;
- (id)init;

@end

