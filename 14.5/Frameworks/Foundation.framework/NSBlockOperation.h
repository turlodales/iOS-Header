//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSMutableArray;

@interface NSBlockOperation : NSOperation
{
    NSMutableArray *_executionBlocks;
    CDUnknownBlockType _block;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *executionBlocks;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

