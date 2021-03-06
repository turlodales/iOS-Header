//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@interface WKWallpaperBundleImporter : NSObject
{
    NSObject<OS_dispatch_queue> *__bundleImportQueue;
    NSArray *__wallpaperTypesOrdering;
    NSDictionary *__wallpaperTypeToBundleCollection;
}

+ (id)wallpapersConfigurationFileURL;
+ (id)defaultWallpaperBundleImporter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *_wallpaperTypeToBundleCollection; // @synthesize _wallpaperTypeToBundleCollection=__wallpaperTypeToBundleCollection;
@property(retain, nonatomic) NSArray *_wallpaperTypesOrdering; // @synthesize _wallpaperTypesOrdering=__wallpaperTypesOrdering;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_bundleImportQueue; // @synthesize _bundleImportQueue=__bundleImportQueue;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1;
- (void)_loadWallpapersFromDisk;
- (id)wallpaperBundleWithIdentifier:(long long)arg1;
- (id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)arg1;
- (unsigned long long)wallpaperTypeAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfWallpaperBundleCollections;
- (id)init;

@end

