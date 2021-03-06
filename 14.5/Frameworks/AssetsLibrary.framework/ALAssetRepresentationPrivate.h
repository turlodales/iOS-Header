//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibrary/ALAssetsLibraryAsset-Protocol.h>

@class ALAssetsLibrary, NSString, PLManagedAsset, PLPhotoLibrary;
@protocol PLSidecar;

__attribute__((visibility("hidden")))
@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary *_library;
    _Bool _isValid;
    PLManagedAsset *_photo;
    id <PLSidecar> _sidecar;
    NSString *_extension;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)_clearFileDescriptorQueue;
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;
+ (int)_fileDescriptorForPersistentURL:(id)arg1;
+ (void)_setupFileDescriptorQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <PLSidecar> sidecar; // @synthesize sidecar=_sidecar;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (_Bool)_isVideo;
- (_Bool)_isImage;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

