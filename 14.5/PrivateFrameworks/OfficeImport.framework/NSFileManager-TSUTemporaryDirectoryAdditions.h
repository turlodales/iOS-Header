//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TSUTemporaryDirectoryAdditions)
- (_Bool)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)tsu_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4 shouldUpdateAttributesHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (unsigned long long)sfu_directoryUsage:(id)arg1;
@end

