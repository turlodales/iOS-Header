//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operations;
}

- (void).cxx_destruct;
- (id)evaluateWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)evaluatorWithInput:(id)arg1;
- (void)addOperation:(CDUnknownBlockType)arg1;
- (id)init;

@end

