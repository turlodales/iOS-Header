//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SKUIMetricsFlushTimer : NSObject
{
    NSHashTable *_metricsControllers;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _timerStartTime;
}

+ (id)sharedTimer;
- (void).cxx_destruct;
- (void)_performFlush;
- (void)_cancelFlushTimer;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)removeMetricsController:(id)arg1;
- (void)reloadFlushInterval;
- (void)flushAllMetricsControllers;
- (void)addMetricsController:(id)arg1;
- (void)dealloc;
- (id)init;

@end

