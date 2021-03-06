//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>

#import <PhotoLibraryServices/PLAssetsdCloudServiceProtocol-Protocol.h>

@class NSString, PLLazyObject;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol>
{
    PLLazyObject *_lazyResourceDownloader;
}

- (void).cxx_destruct;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(_Bool)arg4 trackCPLDownload:(_Bool)arg5 downloadIsTransient:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (id)resourceDownloader;
- (id)initWithLibraryServicesManager:(id)arg1 lazyResourceDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

