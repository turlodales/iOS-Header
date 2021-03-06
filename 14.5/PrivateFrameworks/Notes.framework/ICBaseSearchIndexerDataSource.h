//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Notes/ICSearchIndexerDataSource-Protocol.h>

@class NSMutableOrderedSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource>
{
    _Bool _observingChanges;
    _Bool _needsReindexing;
    NSString *_uuid;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableOrderedSet *_objectIDsToProcess;
    NSMutableOrderedSet *_objectIDsBeingProcessed;
}

+ (void)markAccountReindexedForMigration:(id)arg1;
+ (_Bool)isAccountReindexedForMigration:(id)arg1;
+ (id)didReindexForMigrationUserDefaultKeyForIdentifier:(id)arg1;
- (void).cxx_destruct;
@property _Bool needsReindexing; // @synthesize needsReindexing=_needsReindexing;
@property(nonatomic, getter=isObservingChanges) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(retain, nonatomic) NSMutableOrderedSet *objectIDsBeingProcessed; // @synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed;
@property(retain, nonatomic) NSMutableOrderedSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
- (void)clearObjectIDsToIgnoreAndStageForReindexing;
- (void)logFileSizeForFileAtPath:(id)arg1 fileManager:(id)arg2;
- (_Bool)saveStateDictionary:(id)arg1;
@property(readonly, nonatomic) NSURL *stateFileURL;
- (_Bool)_loadStateDictionaryWithFileManager:(id *)arg1 fileURL:(id *)arg2 NSError:(id *)arg3 fileExists:(_Bool *)arg4 savedDictionary:(id *)arg5;
- (id)loadStateDictionary;
- (id)moveIndexingTrackingFromUserDefaultsToFileIfNecessary;
@property(readonly, copy, nonatomic) NSString *stateFilename;
- (void)loadOrClearStateIfNecessary;
- (void)saveStateIfNecessary;
- (id)objectIDsFromSearchableItems:(id)arg1;
- (void)stageObjectIDURIsForIndexing:(id)arg1 context:(id)arg2;
- (void)clearObjectIDsToProcess;
- (void)stageForReindexingWithContext:(id)arg1;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithObjectIDURIs:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithObjectIDURIs:(id)arg1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillIndexObjectIDs:(id)arg1;
- (long long)decisionOnObjectID:(id)arg1 searchableItemToIndex:(id *)arg2 objectIDURIToDelete:(id *)arg3 context:(id)arg4;
- (id)objectIDsNeedingProcessing;
- (_Bool)shouldIndexableObjectExistInIndexing:(id)arg1;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1;
- (id)indexableObjectIDsWithURIs:(id)arg1 context:(id)arg2;
- (_Bool)isFolderWithServerShareChanged:(id)arg1;
- (id)addNotesFromSubtree:(id)arg1;
- (_Bool)addNewObjectsForProcessing:(id)arg1;
- (void)contextWillSave:(id)arg1;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)resetContextObservers;
- (id)searchableItemForObject:(id)arg1;
- (id)objectForManagedObjectIDURI:(id)arg1 context:(id)arg2;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)newManagedObjectContext;
- (id)persistentStoreCoordinator;
- (unsigned long long)indexingPriority;
- (id)dataSourceIdentifier;
- (id)init;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

