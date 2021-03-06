//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WebBookmarkCollection;

@interface BookmarkImporter : NSObject
{
    WebBookmarkCollection *_collection;
    NSArray *_carrierBookmarkInfo;
    NSArray *_oldDeletedStaticBookmarks;
}

- (void).cxx_destruct;
- (void)migrateYouTubeBookmarks;
- (id)_uniqueYouTubeBookmarkFolderName;
- (void)importBuiltinBookmarks;
- (void)_importFavoritesFolderBuiltinBookmarks;
- (long long)_currentDeviceClass;
- (void)_setLastImportedCarrierBookmarksInfo:(id)arg1;
- (id)_lastImportedCarrierBookmarksInfo;
- (void)_importCarrierBookmarksIfNecessaryAsync;
- (void)_importCarrierBookmarksIfNecessary;
- (void)_importRootFolderBuiltinBookmarks;
- (void)_appendBuiltinBookmarkWithInfo:(id)arg1 toParent:(int)arg2 asCarrierBookmark:(_Bool)arg3;
- (void)_appendBookmarksFromSource:(id)arg1 toParent:(int)arg2;
- (id)_builtinBookmarkWithInfo:(id)arg1 asCarrierBookmark:(_Bool)arg2;
- (id)_myAccountBookmarkInfo;
- (void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)_carrierBundleBuiltinBookmarkInfo;
- (id)_builtInBookmarkItemWithTemplate:(id)arg1 forLocale:(id)arg2 deviceClass:(long long)arg3;
- (id)_googleChannelReplacementStringForDeviceClass:(long long)arg1;
- (id)test_builtinFavoritesForLocale:(id)arg1 deviceClass:(long long)arg2;
- (id)_builtinFavoritesForLocale:(id)arg1 deviceClass:(long long)arg2;
- (void)_clearOldDeletedStaticBookmarks;
- (id)_oldDeletedStaticBookmarks;
- (id)initWithBookmarkCollection:(id)arg1;

@end

