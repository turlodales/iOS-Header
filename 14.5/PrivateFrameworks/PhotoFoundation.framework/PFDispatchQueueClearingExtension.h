//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

#import <PhotoFoundation/PFDispatchQueueExtending-Protocol.h>

@class NSCountedSet, NSString;

@interface PFDispatchQueueClearingExtension : PFDispatchQueueExtension <PFDispatchQueueExtending>
{
    struct _opaque_pthread_mutex_t _lock;
    NSCountedSet *_activeOnQueues;
}

+ (unsigned long long)countOfPurgingQueues;
+ (id)alloc;
+ (void)initialize;
- (void).cxx_destruct;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;
- (void)doPurge:(id)arg1 wait:(_Bool)arg2;
- (id)init;
- (id)initInternal;
- (unsigned long long)countOfPurgingQueues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

