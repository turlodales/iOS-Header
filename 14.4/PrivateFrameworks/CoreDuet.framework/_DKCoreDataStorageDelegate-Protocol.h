//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSManagedObjectModel, NSPersistentStore, NSString, NSURL, _DKCoreDataStorage;

@protocol _DKCoreDataStorageDelegate
- (_Bool)coreDataStorage:(_DKCoreDataStorage *)arg1 didAutoMigratePersistentStore:(NSPersistentStore *)arg2 toManagedObjectModel:(NSManagedObjectModel *)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)coreDataStorage:(_DKCoreDataStorage *)arg1 willAutoMigrateStoreAtURL:(NSURL *)arg2 fromManagedObjectModel:(NSManagedObjectModel *)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;
- (NSString *)coreDataStorage:(_DKCoreDataStorage *)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(_DKCoreDataStorage *)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;
- (_Bool)coreDataStorage:(_DKCoreDataStorage *)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2;
@end

