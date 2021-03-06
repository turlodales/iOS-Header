//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, PGGraphMomentNode, PGMeaningfulEventMatchingCriteria;
@protocol CLSTimeLocationTuple;

@interface PGPublicEventMatchingOptions : NSObject
{
    id <CLSTimeLocationTuple> _timeLocationTuple;
    PGGraphMomentNode *_momentNode;
    NSDateInterval *_actualAttendanceDateInterval;
    NSDateInterval *_expandedAttendanceDateInterval;
    PGMeaningfulEventMatchingCriteria *_matchingCriteria;
    struct CLLocationCoordinate2D _coordinates;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinates; // @synthesize coordinates=_coordinates;
@property(readonly, nonatomic) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
@property(readonly, nonatomic) id <CLSTimeLocationTuple> timeLocationTuple; // @synthesize timeLocationTuple=_timeLocationTuple;
- (void)_createAttendanceDateIntervals;
@property(readonly, nonatomic) PGMeaningfulEventMatchingCriteria *matchingCriteria; // @synthesize matchingCriteria=_matchingCriteria;
@property(readonly, nonatomic) NSDateInterval *expandedAttendanceDateInterval; // @synthesize expandedAttendanceDateInterval=_expandedAttendanceDateInterval;
@property(readonly, nonatomic) NSDateInterval *actualAttendanceDateInterval; // @synthesize actualAttendanceDateInterval=_actualAttendanceDateInterval;
- (id)initWithTimeLocationTuple:(id)arg1 momentNode:(id)arg2;

@end

