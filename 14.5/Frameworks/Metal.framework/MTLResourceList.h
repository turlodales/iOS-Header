//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLResourceListPool;

@interface MTLResourceList : NSObject
{
    struct {
        unsigned short buckets[64];
        unsigned int numEntries;
        unsigned int capacity;
        struct MTLResourceListEntry *entries;
        MTLResourceListPool *pool;
        struct {
            MTLResourceList *tqe_next;
            id *tqe_prev;
        } entry;
        unsigned long long time_added;
    } _listPriv;
}

- (void)dealloc;
- (void)releaseAllObjectsAndReset;
- (id)initWithCapacity:(int)arg1;

@end

