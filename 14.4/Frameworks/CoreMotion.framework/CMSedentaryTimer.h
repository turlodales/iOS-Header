//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject
{
    CMSedentaryTimer_Internal *_internal;
}

+ (_Bool)isAvailable;
@property(readonly, nonatomic) CMSedentaryTimer_Internal *_internal; // @synthesize _internal;
- (void)registerForAlarmsWithHandler:(CDUnknownBlockType)arg1;
- (void)queryAlarmDataSince:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopTimerWithHandler:(CDUnknownBlockType)arg1;
- (void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)isActive;
- (void)dealloc;
- (id)init;

@end

