//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKBeatToBeatInstantaneousBPM : NSObject
{
    double _bpm;
    double _time;
}

@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) double bpm; // @synthesize bpm=_bpm;
- (id)initWithBPM:(double)arg1 time:(double)arg2;

@end

