//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue;
@protocol OS_dispatch_queue;

@interface RequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISOperationQueue *_operationQueue;
}

- (void)_disconnectRequest:(id)arg1 connection:(id)arg2;
- (void)_cancelRequest:(id)arg1 connection:(id)arg2;
@property(retain) ISOperationQueue *operationQueue;
- (void)setClient:(id)arg1 forOperation:(id)arg2;
- (id)operationForConnection:(id)arg1;
- (void)observeXPCServer:(id)arg1;
- (void)disconnectOperationForConnection:(id)arg1;
- (void)cancelOperationForConnection:(id)arg1;
- (void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(CDUnknownBlockType)arg3;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

