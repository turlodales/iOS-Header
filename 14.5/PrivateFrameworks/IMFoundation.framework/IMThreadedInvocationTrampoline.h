//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline
{
    NSThread *_thread;
    _Bool _immediateForMatchingThread;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(_Bool)arg3;

@end

