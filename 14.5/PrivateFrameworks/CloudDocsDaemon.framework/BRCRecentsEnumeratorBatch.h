//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;
@protocol NSFileProviderEnumerationObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumeratorBatch : NSObject
{
    NSMutableOrderedSet *_toIndexItems;
    NSMutableOrderedSet *_deletedItemIDs;
    NSObject<OS_dispatch_queue> *_queue;
    id <NSFileProviderEnumerationObserver> _observer;
    unsigned long long _rank;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
- (void)listItems:(CDUnknownBlockType)arg1;
- (id)description;
- (unsigned long long)batchCount;
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;
- (void)addIndexOfItem:(id)arg1;
- (id)init;

@end

