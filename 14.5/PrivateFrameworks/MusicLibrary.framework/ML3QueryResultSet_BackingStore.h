//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ML3QueryResultSet_BackingStore : NSObject
{
    vector_bbba3654 _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _sections;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set_da619913 *)arg1;
- (void)reverseEnumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsPersistentIDs:(const unordered_set_da619913 *)arg1;
- (void)reverseEnumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)persistentIDAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;

@end

