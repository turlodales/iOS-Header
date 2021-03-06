//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SYDCoreDataStore : NSObject
{
    _Bool _shouldLogValues;
    NSPersistentContainer *__persistentContainer;
    NSURL *_URL;
    NSObject<OS_dispatch_queue> *_persistentContainerQueue;
    NSString *_fileProtectionType;
    NSManagedObjectContext *_transactionContext;
}

+ (_Bool)isInvalidTokenError:(id)arg1;
+ (_Bool)isCorruptionError:(id)arg1;
+ (id)managedObjectModel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *transactionContext; // @synthesize transactionContext=_transactionContext;
@property(retain, nonatomic) NSString *fileProtectionType; // @synthesize fileProtectionType=_fileProtectionType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *persistentContainerQueue; // @synthesize persistentContainerQueue=_persistentContainerQueue;
@property(nonatomic) _Bool shouldLogValues; // @synthesize shouldLogValues=_shouldLogValues;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSPersistentContainer *_persistentContainer; // @synthesize _persistentContainer=__persistentContainer;
- (_Bool)_queue_handleCorruptionIfNecessaryFromError:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (void)handleCorruptionIfNecessaryFromError:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (_Bool)saveTransaction:(id *)arg1;
- (id)transactionalStoreWithError:(id *)arg1;
- (unsigned long long)fileSizeBytes;
- (void)_queue_destroyPersistentStoreInPersistentStoreCoordinator:(id)arg1;
- (void)destroyPersistentStore;
- (id)persistentContainerWithError:(id *)arg1;
- (_Bool)saveContext:(id)arg1 reason:(id)arg2 includingTransactionContext:(_Bool)arg3 error:(id *)arg4;
- (id)_contextForStoreIdentifier:(id)arg1 persistentContainer:(id)arg2;
- (id)contextForStoreIdentifier:(id)arg1 error:(id *)arg2;
- (id)managedKeyValuesMatchingPredicate:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)managedKeyValueWithRecordName:(id)arg1 inStoreWithIdentifier:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)managedKeyValueWithKey:(id)arg1 inStoreWithIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3 forceCreateNewRow:(_Bool)arg4 inContext:(id)arg5 error:(id *)arg6;
- (id)managedKeyValueWithKey:(id)arg1 inStoreWithIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3 inContext:(id)arg4 error:(id *)arg5;
- (id)managedStoreWithIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2 inContext:(id)arg3 error:(id *)arg4;
- (id)managedDatabaseCreateIfNecessary:(_Bool)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)syncEngineMetadataWithError:(id *)arg1;
- (_Bool)saveSyncEngineMetadata:(id)arg1 error:(id *)arg2;
- (id)dictionaryRepresentationForStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (short)failedMigrationCountWithError:(id *)arg1;
- (_Bool)setFailedMigrationCount:(short)arg1 error:(id *)arg2;
- (_Bool)didMigrateFromPlistsWithError:(id *)arg1;
- (_Bool)setDidMigrateFromPlists:(_Bool)arg1 error:(id *)arg2;
- (id)acAccountIdentifierWithError:(id *)arg1;
- (_Bool)setACAccountIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)clearServerSystemFieldsRecordsForAllStoresWithError:(id *)arg1;
- (id)changedKeysForStoreIdentifier:(id)arg1 sinceChangeToken:(id)arg2 error:(id *)arg3;
- (id)currentChangeTokenForStoreIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)numberOfKeyValuesInStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)clearServerSystemFieldsRecordsForAllKeyValuesInStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)allStoreIdentifiersWithError:(id *)arg1;
- (id)allRecordNamesInStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteDataForStoresMatchingPredicate:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)deleteDataForAllStoresWithError:(id *)arg1;
- (_Bool)deleteDataForStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)saveServerSyncAnchorSystemFieldsRecordData:(id)arg1 forStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)serverSyncAnchorSystemFieldsRecordDataForStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeKeyValueForRecordName:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeKeyValueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeKeyValueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;
- (_Bool)saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 enforceQuota:(_Bool)arg4 forceCreateNewRow:(_Bool)arg5 error:(id *)arg6;
- (_Bool)saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 enforceQuota:(_Bool)arg4 error:(id *)arg5;
- (_Bool)saveKeyValue:(id)arg1 inStoreWithIdentifier:(id)arg2 excludeFromChangeTracking:(_Bool)arg3 error:(id *)arg4;
- (id)keyValueFromManagedKeyValue:(id)arg1;
- (id)keyValueForRecordName:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)keyValueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 createIfNecessary:(_Bool)arg3 error:(id *)arg4;
- (id)description;
- (id)initWithURL:(id)arg1 fileProtectionType:(id)arg2 persistentContainer:(id)arg3 isTransactional:(_Bool)arg4;
- (id)initWithURL:(id)arg1 fileProtectionType:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

