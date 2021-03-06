//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPersistentContainerStoreAccess-Protocol.h>

@class NSPersistentStoreCoordinator, NSURL, PLLazyObject;
@protocol PLXPCPhotoLibraryStorePolicy;

@interface PLPersistentContainer : NSObject <PLPersistentContainerStoreAccess>
{
    PLLazyObject *_lazyAssetdClient;
    struct os_unfair_lock_s _sharedPersistentStoreCoordinatorLock;
    NSPersistentStoreCoordinator *_sharedPersistentStoreCoordinator;
    _Bool _sharedPersistentStoreCoordinatorRemoved;
    NSURL *_libraryURL;
    id <PLXPCPhotoLibraryStorePolicy> _xpcStorePolicy;
}

+ (_Bool)shouldTrackIndexUse;
+ (void)_getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3 enableOrderKeyNotifications:(_Bool)arg4;
+ (void)getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3;
+ (_Bool)hasConfiguredPhotoLibrary;
+ (long long)_migrateOrRebuildDatabaseWithSharedPersistentStoreCoordinator:(id)arg1 modelMigrator:(id)arg2 migrationPolicy:(unsigned int)arg3 error:(id *)arg4;
+ (long long)_openAndMigrateStoreWithURL:(id)arg1 options:(id)arg2 coordinator:(id)arg3 modelMigrator:(id)arg4 migrationPolicy:(unsigned int)arg5 error:(id *)arg6;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (_Bool)_destroyPhotosDatabaseWithPath:(id)arg1 backupToPath:(id)arg2;
+ (void)getConfigurationForDatabasePath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
- (void).cxx_destruct;
@property(retain) id <PLXPCPhotoLibraryStorePolicy> xpcStorePolicy; // @synthesize xpcStorePolicy=_xpcStorePolicy;
@property(readonly) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (_Bool)_configurePersistentStoreCoordinator:(id)arg1 overrideCurrentModelVersionInStore:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_configureXPCPersistentStoreCoordinator:(id)arg1 error:(id *)arg2;
- (_Bool)shouldUseXPCPhotoLibraryStore;
- (long long)configureSharedPersistentStoreCoordinatorAndMigrateOrRebuildIfNecessaryWithModelMigrator:(id)arg1 migrationPolicy:(unsigned int)arg2 error:(id *)arg3;
- (void)removeSharedPersistentStoreCoordinator;
- (id)newSharedPersistentStoreCoordinator;
@property(readonly) NSPersistentStoreCoordinator *sharedPersistentStoreCoordinator;
- (id)newPersistentStoreCoordinatorForMigration:(id *)arg1;
- (void)dealloc;
- (id)initWithLibraryURL:(id)arg1 lazyAssetsdClient:(id)arg2;

@end

