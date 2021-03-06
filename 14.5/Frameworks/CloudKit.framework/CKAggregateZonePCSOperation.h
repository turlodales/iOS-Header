//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKAggregateZonePCSOperationInfo, CKRecordZone, NSArray;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation
{
    CDUnknownBlockType _aggregateZonePCSCompletionBlock;
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CKRecordZone *targetZone; // @synthesize targetZone=_targetZone;
@property(copy, nonatomic) NSArray *sourceZoneIDs; // @synthesize sourceZoneIDs=_sourceZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType aggregateZonePCSCompletionBlock; // @synthesize aggregateZonePCSCompletionBlock=_aggregateZonePCSCompletionBlock;
- (id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo; // @dynamic operationInfo;

@end

