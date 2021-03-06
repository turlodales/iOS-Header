//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, RBEventQueueEvent;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RBEventQueue : NSObject
{
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_eventTimer;
    _Bool _isProcessingEvents;
    _Bool _inModifyBlock;
    _Bool _dirtyDuringModify;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_eventQueue;
- (id)description;
- (void)removeEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)batchModify:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RBEventQueueEvent *nextEvent;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithQueue:(id)arg1;

@end

