//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSSQLiteStore.h>

@interface WBSFaviconProviderDatabaseController : WBSSQLiteStore
{
}

- (void)_generateStatementsForQuery:(id)arg1 arguments:(id)arg2 statementCallback:(CDUnknownBlockType)arg3;
- (void)_deleteAllPageAndIconEntries;
- (void)_deleteIconsWithUUIDsFromIconInfo:(id)arg1;
- (void)_deleteIconWithUUIDFromIconInfo:(id)arg1;
- (void)_deletePageURLsWithUUIDFromPageInfo:(id)arg1;
- (_Bool)_hasPageURLsForIconUUID:(id)arg1;
- (void)_deleteRejectedResourceForPageURLStrings:(id)arg1;
- (void)_deleteRejectedResourceForPageURLString:(id)arg1;
- (_Bool)_deleteRejectedResourceForPageURLString:(id)arg1 iconURLString:(id)arg2;
- (void)_deletePageURLs:(id)arg1;
- (void)_deletePageURL:(id)arg1;
- (_Bool)_setRejectedResourceForPageURL:(id)arg1 iconURLString:(id)arg2;
- (id)_setTimestampToNowForIconUUID:(id)arg1;
- (id)_setIconUUID:(id)arg1 forIconURLString:(id)arg2 size:(struct CGSize)arg3 hasGeneratedResolutions:(_Bool)arg4;
- (void)_setPageURL:(id)arg1 toIconUUID:(id)arg2;
- (id)_findOrphansFromIconUUIDs:(id)arg1;
- (id)_fetchPageURLStringsWithPredicate:(id)arg1;
- (id)_fetchAllPageURLStrings;
- (id)_fetchIconInfosForRejectedResourcesWithPageURLString:(id)arg1 iconURLString:(id)arg2;
- (id)_fetchIconInfoForIconUUID:(id)arg1;
- (id)_fetchIconInfoForIconURLString:(id)arg1;
- (id)_fetchIconUUIDsForPageURLStrings:(id)arg1;
- (id)_fetchIconUUIDForPageURLString:(id)arg1;
- (void)fetchPageURLStringsWithPrefixesIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllIconUUIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)firstIconInfoMatchingIconURLStringIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_firstIconUUIDForPageURLStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIconInfoMatchingPageURLStringIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIconUUIDMatchingPageURLStringIn:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rejectedResourceIconInfosForPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)markValidIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)markRejectedIconAtPageURLString:(id)arg1 iconURLString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)iconInfoForIconURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)iconInfoForPageURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllKnownPageURLStringsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllPageURLStringsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllDataForIconUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePageURLStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePageURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)linkPageURLString:(id)arg1 toExistingIconURLString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)linkAndUpdateTimestampForIconWithPageURLString:(id)arg1 iconURLString:(id)arg2 iconSize:(struct CGSize)arg3 iconHasGeneratedResolutions:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion:(int)arg1;
- (int)_createFreshDatabaseSchema;
- (int)_currentSchemaVersion;

@end

