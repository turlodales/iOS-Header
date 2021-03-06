//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HIDAnalyticsReporter : NSObject
{
    NSMutableSet *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)dispatchAnalyticsForEvent:(id)arg1;
- (void)stop;
- (void)start;
- (void)unregisterEvent:(id)arg1;
- (void)registerEvent:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1;
- (void)logAnalyticsEvent:(id)arg1 eventDescription:(id)arg2 eventValue:(id)arg3;
- (id)createBucketData:(id)arg1 fieldvalue:(id)arg2 fieldDescription:(id)arg3;
- (void)dealloc;
- (id)init;

@end

