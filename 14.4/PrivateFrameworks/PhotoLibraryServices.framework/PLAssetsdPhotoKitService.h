//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdPhotoKitServiceProtocol-Protocol.h>
#import <PhotoLibraryServices/PLPerformChangesRequestService-Protocol.h>

@class NSPersistentStoreCoordinator, NSString, PLAssetsdConnectionAuthorization;

@interface PLAssetsdPhotoKitService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitServiceProtocol>
{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

- (void).cxx_destruct;
- (void)commitRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)clientDescription;
- (id)persistentStoreCoordinator;
- (void)getUUIDsForCloudIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)applyChangesRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

