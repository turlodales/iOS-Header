//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TRILogger : NSObject
{
    int _projectId;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

- (void).cxx_destruct;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3;
- (void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3;
- (void)logWithTrackingId:(id)arg1 message:(id)arg2;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (void)logEvent:(id)arg1;
- (unsigned long long)_incrementedLogEventCount;
- (void)_dispatchLogEvent:(id)arg1;
- (id)messageWithOneofField:(id)arg1 withName:(id)arg2;
- (id)initWithProjectId:(int)arg1;
- (id)init;

@end

