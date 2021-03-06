//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TPSTargetingCache : NSObject
{
    NSMutableDictionary *_cacheResultDictionary;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableDictionary *cacheResultDictionary; // @synthesize cacheResultDictionary=_cacheResultDictionary;
- (void)reset;
- (long long)cacheResultForIdentifier:(id)arg1;
- (void)addCacheResult:(long long)arg1 forIdentifier:(id)arg2;
- (id)init;

@end

