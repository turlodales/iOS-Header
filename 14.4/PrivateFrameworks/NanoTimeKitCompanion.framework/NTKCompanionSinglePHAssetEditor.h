//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@class NSString;

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor
{
    NSString *_albumIdentifier;
    NSString *_albumName;
    _Bool _albumNameValid;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumIdentifier; // @synthesize albumIdentifier=_albumIdentifier;
- (id)_fetchAlbumName;
- (id)_fetchSingleAsset;
- (id)_createResourceDirectoryForSinglePHAssetWithPreviewOnly:(_Bool)arg1;
- (id)optionsForSingleAsset;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *albumName;
@property(nonatomic) _Bool shouldFinalize;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(_Bool)arg3;

@end

