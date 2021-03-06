//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TimingCollection : NSObject
{
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}

- (_Bool)hasKey:(int)arg1;
- (id)description;
- (void)removeTimingForKey:(int)arg1;
- (float)totalTimeForKey:(int)arg1;
- (float)timingForKey:(int)arg1;
- (_Bool)isValidTimingForKey:(int)arg1;
- (void)stopTimingForKey:(int)arg1;
- (void)setStopTime:(float)arg1 forKey:(int)arg2;
- (void)setStartTime:(float)arg1 forKey:(int)arg2;
- (void)setTiming:(float)arg1 forKey:(int)arg2;
- (void)startTimingForKey:(int)arg1;
- (void)dealloc;
- (id)init;

@end

