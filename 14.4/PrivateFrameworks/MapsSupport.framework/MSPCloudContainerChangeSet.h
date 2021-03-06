//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLock, NSMutableSet;

@interface MSPCloudContainerChangeSet : NSObject
{
    NSMutableSet *_changes;
    NSMutableSet *_deletes;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool hasChanges;
@property(readonly, nonatomic) NSDictionary *allChangesById;
- (void)addRecord:(id)arg1;
- (void)addDeletedRecord:(id)arg1;
- (void)addChangedRecord:(id)arg1;
- (void)threadSafeAddReplicaRecord:(id)arg1 toSet:(id)arg2;
@property(readonly, nonatomic) NSArray *deletedRecords;
@property(readonly, nonatomic) NSArray *changedRecords;
- (id)threadSafeArrayFromSet:(id)arg1;
- (id)init;

@end

