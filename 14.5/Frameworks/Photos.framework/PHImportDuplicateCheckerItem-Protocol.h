//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class IPAMetadata, NSArray, NSDate, NSMutableDictionary, NSSet, NSString, NSURL, PHPhotoLibrary;
@protocol PHImportDuplicateCheckerItem;

@protocol PHImportDuplicateCheckerItem <NSObject>
@property(readonly) IPAMetadata *metadata;
@property unsigned char duplicateStateConfidence;
@property(retain) NSMutableDictionary *duplicates;
@property(readonly) id <PHImportDuplicateCheckerItem> videoComplement;
@property(retain) NSDate *lastDuplicateCheck;
@property(readonly) _Bool isLivePhoto;
@property _Bool isDuplicate;
@property(readonly) NSDate *dateKey;
@property(readonly) id sizeKey;
@property(readonly) id nameKey;
@property(readonly) NSDate *fileCreationDate;
@property(readonly) NSDate *exifImageDate;
@property(readonly) NSString *fileName;
@property(readonly) id originatingAssetID;
@property(readonly) id assetId;
@property(readonly) id avchdAssetId;
@property(readonly) NSURL *url;
@property(readonly) id uuid;
- (void)loadMetadataSync;
- (NSArray *)duplicateAssetsForLibrary:(PHPhotoLibrary *)arg1;
- (void)setDuplicates:(NSSet *)arg1 forLibrary:(NSString *)arg2;
@end

