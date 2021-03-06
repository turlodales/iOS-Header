//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SNFileSystem : NSObject
{
    NSMutableArray *_requests;
    NSMutableDictionary *_taskCompletionMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *taskCompletionMap; // @synthesize taskCompletionMap=_taskCompletionMap;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
- (void)_removeRequest:(id)arg1 error:(id)arg2;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3;

@end

