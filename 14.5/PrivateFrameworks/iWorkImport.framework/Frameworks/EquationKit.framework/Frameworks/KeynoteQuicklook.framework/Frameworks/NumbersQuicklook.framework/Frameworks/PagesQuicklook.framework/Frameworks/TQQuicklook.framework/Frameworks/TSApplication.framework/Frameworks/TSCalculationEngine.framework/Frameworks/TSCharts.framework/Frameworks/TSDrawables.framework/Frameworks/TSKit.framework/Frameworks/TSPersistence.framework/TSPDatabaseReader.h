//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPReader.h>

#import <TSPersistence/TSPDatabaseUnarchiverDelegate-Protocol.h>

@class NSHashTable, NSObject, NSString, TSPComponent, TSPDatabase;
@protocol OS_dispatch_queue;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate>
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    TSPDatabase *_database;
    unsigned long long _databaseVersion;
    struct IdentifierMap<long long> _readIdentifiers;
    NSHashTable *_datas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (set_713dd2e1 *)filterIdentifiers:(const set_713dd2e1 *)arg1;
- (id)objectUUIDMap;
- (id)filenameFromOldDataArchive:(const struct DatabaseDataArchive *)arg1;
- (id)dataForOldDataArchive:(const struct DatabaseDataArchive *)arg1;
- (struct Message *)newImageDataMessageForDatabaseObject:(id)arg1;
- (struct Message *)newDataMessageForDatabaseObject:(id)arg1;
- (void)enumerateDataAppRelativePathsUsingBlock:(CDUnknownBlockType)arg1;
- (id)appRelativePathForOldDataArchive:(const struct DatabaseDataArchive *)arg1;
- (void)resolveReferences;
- (_Bool)validateObjectIdentifierForObject:(id)arg1;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (id)newUnarchiverWithDatabaseObject:(id)arg1;
- (id)dataForIdentifier:(long long)arg1 referencedByObjectIdentifier:(long long)arg2 objectClass:(Class)arg3;
- (void)unarchiveObjectWithIdentifierAsync:(long long)arg1 referencedByObjectIdentifier:(long long)arg2 objectClass:(Class)arg3;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 database:(id)arg4 databaseVersion:(unsigned long long)arg5;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) TSPComponent *component;
@property(readonly, nonatomic) long long componentIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool didFinishResolvingReferences;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) unsigned long long readVersion;
@property(readonly, nonatomic) long long sourceType;
@property(readonly) Class superclass;

@end

