//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncRapportStorage.h>

#import <CoreDuet/_DKSyncRemoteKnowledgeStorage-Protocol.h>

@class _DKSync2Policy;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncRapportKnowledgeStorage : _DKSyncRapportStorage <_DKSyncRemoteKnowledgeStorage>
{
    unsigned long long _currentChangeSetSequenceNumber;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
    _DKSync2Policy *_policy;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) _DKSync2Policy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFetchDelegate:(id)arg1;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)clearPrewarmedFlag;
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerRequestIDsWithClient:(id)arg1;

@end

