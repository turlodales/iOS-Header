//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SplashBoard/XBApplicationSnapshotManifest.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class BSAtomicSignal, BSTimer, NSFileManager, NSMutableArray, NSMutableDictionary, NSString, XBSnapshotContainerIdentity, XBSnapshotManifestIdentity;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSSecureCoding, BSDescriptionProviding>
{
    XBSnapshotContainerIdentity *_containerIdentity;
    XBSnapshotManifestIdentity *_identity;
    NSMutableDictionary *_snapshotGroupsByID;
    NSFileManager *_imageAccessFileManger;
    BSTimer *_reapingTimer;
    BSAtomicSignal *_invalidatedSignal;
    unsigned long long _clientCount;
    unsigned long long _pendingOperations;
    NSMutableArray *_archiveSchedulingQueue_synchronizeCompletions;
    _Bool _archiveSchedulingQueue_dirty;
    _Bool _archiveSchedulingQueue_scheduled;
    _Bool _logContainerIdentifierDirty;
    struct os_unfair_lock_s _accessLock;
    NSString *_baseLogIdentifier;
    NSString *_logIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (long long)_outputFormatForSnapshot:(id)arg1;
+ (void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3;
+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (_Bool)isUnderMemoryPressure;
+ (void)_workloop_noteManifestInvalidated:(id)arg1;
+ (void)relinquishManifest:(id)arg1;
+ (id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(_Bool)arg3;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) XBSnapshotManifestIdentity *identity; // @synthesize identity=_identity;
@property(readonly, copy, nonatomic) XBSnapshotContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)_descriptionForStateCaptureWithMultilinePrefix:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_workloop_reallyCheckClientCount;
- (void)_workloop_checkClientCount;
- (void)_workloop_decrementClientCount;
- (void)_workloop_incrementClientCount;
- (_Bool)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2;
- (id)_access_snapshotGroupForID:(id)arg1 creatingIfNeeded:(_Bool)arg2;
- (id)_access_snapshotsMatchingPredicate:(id)arg1;
- (id)_access_snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)_access_snapshotsForGroupIDs:(id)arg1;
- (void)_access_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_access_updateSnapshotsAPFSPurgability:(_Bool)arg1;
- (void)_access_purgeSnapshotsWithProtectedContent;
- (void)_access_deleteSnapshots:(id)arg1;
- (void)_access_deletePaths:(id)arg1;
- (void)_access_accessSnapshotsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_access_workloop_reapExpiredAndInvalidSnapshots;
- (void)_reapExpiredAndInvalidSnapshots;
- (_Bool)_access_validateWithContainerIdentity:(id)arg1;
- (_Bool)_validateWithContainerIdentity:(id)arg1;
- (void)_access_doArchiveWithCompletions:(id)arg1;
- (void)_handleMemoryPressure;
- (void)_scheduleArchivingIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_synchronizeDataStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)_noteDirtied;
- (id)_access_allSnapshotGroups;
- (id)_allSnapshotGroups;
- (void)_access_addSnapshotToGroup:(id)arg1;
- (void)_addSnapshotToGroup:(id)arg1;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (_Bool)_invalidate;
- (id)_snapshotGroupsByID;
- (void)beginSnapshotAccessTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSnapshots;
- (void)updateSnapshotsAPFSPurgability:(_Bool)arg1;
- (void)purgeSnapshotsWithProtectedContent;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(CDUnknownBlockType)arg2;
- (void)deleteSnapshotsUsingPredicateBuilder:(CDUnknownBlockType)arg1;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshot:(id)arg1;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 imageGeneratedHandler:(CDUnknownBlockType)arg4 imageDataSavedHandler:(CDUnknownBlockType)arg5;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1;
- (id)defaultGroupIdentifier;
- (id)containerPath;
- (id)bundleIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithContainerIdentity:(id)arg1;
- (id)init;
- (void)_commonInit;
- (void)_setContainerIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

