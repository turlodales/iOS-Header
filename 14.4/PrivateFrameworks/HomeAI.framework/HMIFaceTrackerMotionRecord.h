//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMIFaceTrackerMotionRecord : NSObject
{
    NSArray *_motionVectors;
    CDStruct_1b6d18a9 _time;
    struct CGRect _regionOfInterest;
}

- (void).cxx_destruct;
@property(readonly) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(readonly) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly) NSArray *motionVectors; // @synthesize motionVectors=_motionVectors;
- (id)initWithMotionVectors:(id)arg1 regionOfInterest:(struct CGRect)arg2 time:(CDStruct_1b6d18a9)arg3;

@end

