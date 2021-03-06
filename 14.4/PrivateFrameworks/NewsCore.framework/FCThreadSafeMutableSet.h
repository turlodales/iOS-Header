//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableSet, NSSet;

@interface FCThreadSafeMutableSet : NSObject
{
    NFUnfairLock *_lock;
    NSMutableSet *_set;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *readOnlySet;
@property(readonly, copy) NSArray *allObjects;
@property(readonly) _Bool isEmpty;
@property(readonly) unsigned long long count;
- (void)readWriteWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end

