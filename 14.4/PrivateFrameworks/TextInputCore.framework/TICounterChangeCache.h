//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface TICounterChangeCache : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableSet *_referencedCounters;
    _Bool _userModelRateLimitingDisabled;
    double _timeOfLastPersist;
}

- (void).cxx_destruct;
- (void)queueCompletionHandler:(CDUnknownBlockType)arg1;
- (void)persistForDate:(id)arg1;
- (void)keyboardDidSuspendForDate:(id)arg1;
- (void)addStatisticChanges:(id)arg1 withContext:(id)arg2;
- (void)close;
- (void)addCounterReferencesForMetric:(id)arg1 withRegistry:(id)arg2;
- (void)loadReferencedCounters;
- (id)init;

@end

