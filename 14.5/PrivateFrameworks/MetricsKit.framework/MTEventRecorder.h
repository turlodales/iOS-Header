//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class NSMutableArray;
@protocol MTEventRecorderDelegate;

@interface MTEventRecorder : MTObject
{
    id <MTEventRecorderDelegate> _delegate;
    NSMutableArray *_eventListeners;
}

+ (id)_compositePromiseWithPromises:(id)arg1 resolvingResultFromPromise:(id)arg2;
+ (id)_metricsDataApplyingWhitelisting:(id)arg1 usingRecorder:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *eventListeners; // @synthesize eventListeners=_eventListeners;
@property(nonatomic) __weak id <MTEventRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2 usingRecorder:(id)arg3;
- (id)_recordEvent:(id)arg1 usingRecorder:(id)arg2;
- (id)_flushUnreportedEventsUsingRecorder:(id)arg1;
- (id)recordEvent:(id)arg1 shouldSkipValidation:(_Bool)arg2;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (id)recordEvent:(id)arg1;
- (id)sendMethod;
- (id)flushUnreportedEvents;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1;
- (void)dealloc;
- (void)maybeSubscribeToFlushNotification;
- (id)initWithMetricsKit:(id)arg1;
- (id)init;
- (id)_amsDelegate;
@property(nonatomic) _Bool monitorsLifecycleEvents;

@end

