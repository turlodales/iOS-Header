//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NRBypassQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_suspendableQueue;
    NSObject<OS_dispatch_queue> *_bypassQueue;
    _Bool _suspended;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)enqueueBypassBlockAsync:(CDUnknownBlockType)arg1;
- (void)enqueueBypassBlock:(CDUnknownBlockType)arg1;
- (void)enqueueBlockAsync:(CDUnknownBlockType)arg1;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

