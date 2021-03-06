//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSItemProvider.h>

@interface NSItemProvider (PhotosUICore)
+ (id)px_fileProviderItemProviderForAsset:(id)arg1 usage:(long long)arg2 registerFileRepresentations:(_Bool)arg3 domain:(id)arg4 shouldRequestCurrentIfPossible:(_Bool)arg5;
+ (id)px_fileProviderItemProviderForAsset:(id)arg1 usage:(long long)arg2 domain:(id)arg3 registerFileRepresentations:(_Bool)arg4;
+ (id)px_fileProviderItemProviderForDisplayAsset:(id)arg1 usage:(long long)arg2 domain:(id)arg3;
+ (id)px_dragAndDropFileProviderDomain;
+ (void)px_asynchronousAddDragAndDropFileProviderDomain;
+ (id)px_synchronousAddPhotosPickerFileProviderDomain:(id *)arg1;
- (long long)_px_shareMediaTypeFromUniformTypeIdentifier:(id)arg1;
- (id)_px_sharedMediaVideoComplementFromURL:(id)arg1;
- (id)_px_assetResourceBagsFromUniformTypeIdentifier:(id)arg1 atURL:(id)arg2;
- (long long)_px_assetResourceTypeFromUniformTypeIdentifier:(id)arg1;
- (_Bool)_px_isSupportedUniformTypeIdentifier:(id)arg1;
- (id)_px_bestTypeIdentifierForItemProvider:(id)arg1;
- (void)px_createStreamShareSourceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)px_createAssetWithImportSessionID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_px_registerFileRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 domain:(id)arg3 assetUUID:(id)arg4 shouldRequestCurrentIfPossible:(_Bool)arg5;
- (void)_px_registerFileRepresentationsForAsset:(id)arg1 domain:(id)arg2 shouldRequestCurrentIfPossible:(_Bool)arg3;
@end

