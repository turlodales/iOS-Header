//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdLibraryServiceProtocol-Protocol.h>

@class NSMutableArray, NSString, PLAssetsdConnectionAuthorization, PLAssetsdService, PLPhotoLibraryBundleController, PLXPCPhotoLibraryStoreContainer;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol>
{
    PLXPCPhotoLibraryStoreContainer *_xpcPhotoLibraryStoreContainer;
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSMutableArray *_preRunningProgressFollowers;
    NSMutableArray *_postRunningProgressFollowers;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLAssetsdService *_assetsdService;
}

+ (long long)requiredLibraryServicesStateForURL:(id)arg1;
- (void).cxx_destruct;
- (id)libraryBundle;
- (void)pendingEventsForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)repairSingletonObjectsWithReply:(CDUnknownBlockType)arg1;
- (void)recoverFromCrashIfNeeded;
- (id)importFileSystemAssetsWithReason:(id)arg1 force:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(CDUnknownBlockType)arg1;
- (void)_sendClientReply:(CDUnknownBlockType)arg1 sandboxExtensionsByPath:(id)arg2 error:(id)arg3;
- (id)_returnValueForProgress:(id)arg1 addTo:(id)arg2;
- (id)_postRunningProgress;
- (id)_preRunningProgress;
- (id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)postOpenProgressWithReply:(CDUnknownBlockType)arg1;
- (void)openPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)sandboxExtensionsByPath;
- (id)newLibraryOpener;
- (void)getCurrentModelVersionWithReply:(CDUnknownBlockType)arg1;
- (void)launchAssetsd;
- (id)initWithLibraryServicesManager:(id)arg1 bundleController:(id)arg2 connectionAuthorization:(id)arg3 assetsdService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

