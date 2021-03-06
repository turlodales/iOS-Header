//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineTransientRepositoryImplementation-Protocol.h"

@class CPLPrequeliteScopeFilter, NSString;

@interface CPLPrequeliteTransientRepository : CPLPrequeliteStorage <CPLEngineTransientRepositoryImplementation>
{
    CPLPrequeliteScopeFilter *_scopeFilter;
}

- (void).cxx_destruct;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)status;
- (unsigned long long)countOfUnmingledRecords;
- (unsigned long long)countOfAssetChanges;
- (_Bool)deleteAllRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)hasUnmingledRecordsWithScopeFilter:(id)arg1;
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)hasUnmingledRecordsForScopeWithIdentifier:(id)arg1;
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;
- (_Bool)popChangeBatchOfChangedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)_fillArray:(id)arg1 alreadySeen:(id)arg2 withChangeAndRelated:(id)arg3 scopedIdentifiersToDelete:(id)arg4 transientType:(int)arg5 maximumCount:(unsigned long long *)arg6 error:(id *)arg7;
- (_Bool)popChangeBatchOfDeletedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)_fillBatchWithDeletedRecords:(id)arg1 withEnumerator:(id)arg2 maximumCount:(unsigned long long *)arg3 additionalRecordsToAdd:(id)arg4 scopedIdentifiersToDelete:(id)arg5 alreadyDeleted:(id)arg6 error:(id *)arg7;
- (_Bool)popChangeBatchOfRemappedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_hasRecordWithTransientType:(int)arg1 relatedScopedIdentifier:(id)arg2;
- (id)_recordWithTransientType:(int)arg1 scopedIdentifier:(id)arg2;
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)recordWithScopedIdentifier:(id)arg1;
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 class:(Class)arg2 maximumCount:(unsigned long long)arg3;
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 maximumCount:(unsigned long long)arg2;
- (_Bool)_markChangesWithScopedIdentifiersAsMingled:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForMinglingWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_appendChange:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;
- (_Bool)upgradeStorageToVersion:(long long)arg1;
- (_Bool)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) Class superclass;

@end

