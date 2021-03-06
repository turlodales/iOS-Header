//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BoardServices/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@protocol BSServiceDispatchingQueue <NSObject>
- (void)performAsync:(void (^)(void))arg1 withHandoff:(NSObject<OS_xpc_object> *)arg2;
- (void)performAsync:(void (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)backingQueueIfExists;
- (void)assertBarrierOnQueue;
@end

