//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (RCAdditions)
- (_Bool)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;
- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;
- (_Bool)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;
- (_Bool)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;
- (_Bool)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;
- (long long)rc_dataProtectionKeyBagState;
@end

