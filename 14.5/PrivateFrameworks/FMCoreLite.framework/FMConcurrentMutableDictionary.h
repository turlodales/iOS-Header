//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMReadWriteLock, NSMutableDictionary;

@interface FMConcurrentMutableDictionary : NSObject
{
    NSMutableDictionary *_underlyingDictionary;
    FMReadWriteLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FMReadWriteLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
- (id)popObjectforKey:(id)arg1;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 withConstructor:(CDUnknownBlockType)arg2;
- (id)nativeDictionary;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

