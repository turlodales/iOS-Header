//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSData, NSManagedObjectContext, NSProgress, NSSet, NSString, NSURL, PLInternalResource, PLManagedAsset, PLPhotoLibraryPathManager, PLResourceDataStoreOptions, PLResourceLocalAvailabilityRequestOptions, PLValidatedExternalResource;
@protocol PLAssetID, PLResource, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@protocol PLResourceDataStore <NSObject>
+ (NSArray *)supportedRecipes;
+ (_Bool)keyDataIsValid:(NSData *)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeClassID;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(NSProgress *)arg1;
- (_Bool)canMarkAsynchronousLocalRenderAsOptionalForProgress:(NSProgress *)arg1;
- (void)requestStreamingURLForResource:(id <PLResource>)arg1 asset:(PLManagedAsset *)arg2 intent:(unsigned long long)arg3 inContext:(NSManagedObjectContext *)arg4 clientBundleID:(NSString *)arg5 completion:(void (^)(NSError *, NSURL *, NSDate *))arg6;
- (_Bool)canStreamResource:(id <PLResource>)arg1;
- (_Bool)videoResource:(id <PLResource>)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (_Bool)dataStoreSubtypeIsDownloadable:(long long)arg1;
- (NSProgress *)requestLocalAvailabilityChange:(short)arg1 forResource:(PLInternalResource *)arg2 options:(PLResourceLocalAvailabilityRequestOptions *)arg3 completion:(void (^)(NSError *, long long, NSURL *))arg4;
- (_Bool)storeExternalResource:(PLValidatedExternalResource *)arg1 forAsset:(PLManagedAsset *)arg2 inContext:(NSManagedObjectContext *)arg3 options:(PLResourceDataStoreOptions *)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (id <PLUniformTypeIdentifierIdentity>)guessUTIForExternalResource:(PLValidatedExternalResource *)arg1 forAssetKind:(short)arg2 managedObjectContext:(NSManagedObjectContext *)arg3;
- (_Bool)canStoreExternalResource:(PLValidatedExternalResource *)arg1;
- (NSArray *)virtualResourcesForAsset:(PLManagedAsset *)arg1;
- (NSSet *)updateDerivativeResourcesForAsset:(PLManagedAsset *)arg1 forLifecycleEvent:(unsigned int)arg2;
- (NSURL *)resourceURLForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (NSData *)resourceDataForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (id <PLResourceDataStoreKey>)keyFromKeyStruct:(const void *)arg1;
- (NSString *)descriptionForSubtype:(long long)arg1;
- (NSString *)name;
- (id)initWithPathManager:(PLPhotoLibraryPathManager *)arg1;
@end

