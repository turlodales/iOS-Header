//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface MFMessageStoreObjectCache : NSObject
{
    NSLock *_lock;
    unsigned long long _capacity;
    NSMutableDictionary *_cache;
    CDUnknownBlockType _keyGenerator;
    CDUnknownBlockType _comparator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(copy, nonatomic) CDUnknownBlockType keyGenerator; // @synthesize keyGenerator=_keyGenerator;
- (void)flush;
- (id)objectForMessage:(id)arg1 kind:(long long)arg2;
- (void)removeObjectForMessage:(id)arg1 kind:(long long)arg2;
- (id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;
- (void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;
- (void)_nts_setObject:(id)arg1 forKey:(id)arg2;
- (void)_nts_evictObject;
- (id)debugDescription;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

