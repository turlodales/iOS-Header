//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLResource-Protocol.h>
#import <PhotoLibraryServices/PLResourceAvailabilityMarking-Protocol.h>
#import <PhotoLibraryServices/PLValidatesResourceModel-Protocol.h>

@class NSData, NSDate, NSNumber, NSString, PLCloudMaster, PLCodec, PLFileSystemBookmark, PLFileSystemVolume, PLInternalResourceSidecarRepresentation, PLManagedAsset, PLUniformTypeIdentifier;
@protocol PLAssetID, PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLInternalResource : PLManagedObject <PLResource, PLValidatesResourceModel, PLResourceAvailabilityMarking, PLCloudDeletable>
{
    PLInternalResourceSidecarRepresentation *_sidecarRepresentation;
}

+ (_Bool)batchResetFileIDInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)deleteObsoleteResourcesInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)_obsoleteResourceRecipesWithCPLOff;
+ (id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (_Bool)supportsTrashedStateForResourceIdentity:(id)arg1;
+ (id)listOfSyncedProperties;
+ (id)entityName;
+ (id)purgeablePushedPredicateForCPLResourceTypes:(id)arg1 urgency:(long long)arg2;
+ (id)predicateForPurgeableOriginalResources;
+ (id)predicateForAvailableResources;
+ (id)predicateForOriginalsToDownload;
+ (id)prunePredicateForAllCPLResourceTypes;
+ (id)prunePredicateForCPLResourceTypes:(id)arg1;
+ (id)predicateForResourceIsNotLocallyAvailableWithCPLResourceType:(unsigned long long)arg1 version:(unsigned int)arg2;
+ (id)predicateForMaxFilesize:(long long)arg1;
+ (id)predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(_Bool)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4;
+ (id)predicateForAllFullSizeResourcesLocallyAvailable;
+ (id)predicateForAllOriginalResourcesLocallyAvailable;
+ (_Bool)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(_Bool)arg3 localCount:(unsigned long long *)arg4 unavailableCount:(unsigned long long *)arg5 error:(id *)arg6;
+ (_Bool)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long *)arg3 unavailableCount:(unsigned long long *)arg4 error:(id *)arg5;
+ (_Bool)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long *)arg2 unavailableCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)arg1;
+ (void)resetPrefetchStateForResourcesWithVersion:(unsigned int)arg1 cplType:(unsigned long long)arg2 assetUuids:(id)arg3 inLibrary:(id)arg4;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(_Bool)arg2;
+ (short)plTrashedStateForCPLExpungedState:(unsigned long long)arg1;
+ (unsigned long long)cplExpungedStateForTrashedState:(short)arg1;
+ (id)nonOriginalCPLResourceTypes;
+ (id)originalCPLResourceTypes;
+ (id)originalCPLResourceTypesForAsset;
+ (id)originalCPLResourceTypesForMaster;
+ (_Bool)isCPLJPEGThumbnailResource:(id)arg1;
+ (id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned int)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)redactedDescription;
- (id)singleLineDescription;
- (id)photosCTLJSONDict;
- (id)photosCTLDescription;
- (_Bool)isRemotelyAvailable;
- (_Bool)isLocallyAvailable;
- (void)deleteResource;
- (void)markAsNotLocallyAvailable;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (_Bool)isAdjustedFullSizeRenderResource;
- (_Bool)isAdjustedResource;
- (_Bool)isDefaultOrientation;
- (id)fileURL;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2;
- (void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2;
- (_Bool)repairResourceValidationErrors:(id)arg1 managedObjectContext:(id)arg2;
- (id)validatedExternalResourceRepresentationUsingFileURL:(id)arg1;
@property(readonly, nonatomic) PLInternalResourceSidecarRepresentation *sidecarRepresentation; // @synthesize sidecarRepresentation=_sidecarRepresentation;
- (_Bool)isInCloud;
@property(nonatomic) short localAvailability; // @dynamic localAvailability;
@property(readonly, nonatomic) long long estimatedDataLength; // @dynamic estimatedDataLength;
- (_Bool)isPlayableVideo;
@property(readonly, nonatomic) float scale;
- (float)scaleGivenAssetHasAdjustments:(_Bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
@property(readonly, nonatomic) long long orientedHeight;
@property(readonly, nonatomic) long long orientedWidth;
@property(readonly, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property(readonly, nonatomic) id <PLCodecIdentity> codecID;
@property(readonly, copy, nonatomic) id <PLAssetID> assetID;
@property(readonly, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
@property(readonly, nonatomic) id <PLResourceDataStore> dataStore;
@property(readonly, nonatomic) _Bool isDerivative; // @dynamic isDerivative;
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)willSave;
- (void)prepareForDeletion;
- (void)persistTrashedStateToFilesystem;
- (_Bool)shouldPersistTrashedState;
- (void)applyTrashedState:(short)arg1 trashedDate:(id)arg2;
- (void)applyTrashedState:(short)arg1;
- (_Bool)isTrashedOrExpunged;
- (_Bool)supportsTrashedState;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;
- (_Bool)_colorSpaceIsNativeForDisplay;
- (id)_libraryID;
- (id)referenceMediaFileURL;
- (_Bool)canRepresentAsSidecar;
- (id)scopedIdentifier;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) long long dataLength; // @dynamic dataLength;
- (void)resetPrefetchState;
- (id)cplFileURL;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1;
- (id)cplResourceIncludeFile:(_Bool)arg1;
- (id)expungeableResourceStateRepresentation;
- (_Bool)isCPLOriginalResource;
- (_Bool)isCPLJPEGThumbnail;
- (_Bool)isCPLAssetResource;
- (_Bool)isCPLMasterResource;
- (_Bool)isCPLResource;
@property(readonly, nonatomic) unsigned long long cplType; // @dynamic cplType;
- (void)setCloudAttributesWithExternalResource:(id)arg1;
- (void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSString *cloudDeleteAssetUUIDWithResourceType; // @dynamic cloudDeleteAssetUUIDWithResourceType;
@property(nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property(retain, nonatomic) NSDate *cloudLastOnDemandDownloadDate; // @dynamic cloudLastOnDemandDownloadDate;
@property(retain, nonatomic) NSDate *cloudLastPrefetchDate; // @dynamic cloudLastPrefetchDate;
@property(retain, nonatomic) NSDate *cloudMasterDateCreated; // @dynamic cloudMasterDateCreated;
@property(nonatomic) short cloudPrefetchCount; // @dynamic cloudPrefetchCount;
@property(retain, nonatomic) NSDate *cloudPrunedAt; // @dynamic cloudPrunedAt;
@property(nonatomic) int cloudSourceType; // @dynamic cloudSourceType;
@property(retain, nonatomic) PLCodec *codec; // @dynamic codec;
@property(nonatomic) short dataStoreClassID; // @dynamic dataStoreClassID;
@property(copy, nonatomic) NSData *dataStoreKeyData; // @dynamic dataStoreKeyData;
@property(nonatomic) long long dataStoreSubtype; // @dynamic dataStoreSubtype;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long fileID; // @dynamic fileID;
@property(retain, nonatomic) PLFileSystemBookmark *fileSystemBookmark; // @dynamic fileSystemBookmark;
@property(retain, nonatomic) PLFileSystemVolume *fileSystemVolume; // @dynamic fileSystemVolume;
@property(readonly) unsigned long long hash;
@property(nonatomic) short localAvailabilityTarget; // @dynamic localAvailabilityTarget;
@property(nonatomic) unsigned int orientation; // @dynamic orientation;
@property(nonatomic) long long ptpTrashedState; // @dynamic ptpTrashedState;
@property(nonatomic) int qualitySortValue; // @dynamic qualitySortValue;
@property(nonatomic) unsigned int recipeID; // @dynamic recipeID;
@property(nonatomic) short remoteAvailability; // @dynamic remoteAvailability;
@property(nonatomic) short remoteAvailabilityTarget; // @dynamic remoteAvailabilityTarget;
@property(nonatomic) unsigned int resourceType; // @dynamic resourceType;
@property(retain, nonatomic) NSNumber *sidecarIndex; // @dynamic sidecarIndex;
@property(readonly) Class superclass;
@property(retain, nonatomic) PLCloudMaster *transientCloudMaster; // @dynamic transientCloudMaster;
@property(retain, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property(nonatomic) short trashedState; // @dynamic trashedState;
@property(retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(nonatomic) long long unorientedHeight; // @dynamic unorientedHeight;
@property(nonatomic) long long unorientedWidth; // @dynamic unorientedWidth;
@property(nonatomic) unsigned int version; // @dynamic version;

@end

