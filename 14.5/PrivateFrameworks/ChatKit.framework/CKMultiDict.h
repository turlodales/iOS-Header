//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned long long _count;
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
- (id)allKeys;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectsForKey:(id)arg1;
- (id)objectsForKey:(id)arg1;
- (id)dequeueObjectForKey:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (id)popObjectForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)init;

@end

