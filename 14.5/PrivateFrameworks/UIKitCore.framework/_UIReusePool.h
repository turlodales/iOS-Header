//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIReusePool : NSObject
{
    NSMutableSet *_reuseSet;
    unsigned long long _purgePolicy;
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;
}

+ (void)initialize;
+ (void)__applicationWillEnterForeground:(id)arg1;
+ (void)__applicationDidEnterBackground:(id)arg1;
- (void).cxx_destruct;
- (void)drainPool;
@property(readonly, nonatomic) unsigned long long purgePolicy;
- (id)reusableObject;
- (void)addObject:(id)arg1;
- (id)initWithPolicy:(unsigned long long)arg1;
- (id)init;

@end

