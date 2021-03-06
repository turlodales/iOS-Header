//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject
{
    NSOperationQueue *_serialOperationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *underlyingOperationQueue;
@property(nonatomic) _Bool suspended;
- (void)cancelAllBlocks;
- (void)enqueueOperation:(id)arg1;
- (void)withQualityOfService:(long long)arg1 enqueueBlockForMainThread:(CDUnknownBlockType)arg2;
- (void)enqueueBlockForMainThread:(CDUnknownBlockType)arg1;
- (void)enqueueBlock:(CDUnknownBlockType)arg1;
- (id)initWithQualityOfService:(long long)arg1;
- (id)init;

@end

