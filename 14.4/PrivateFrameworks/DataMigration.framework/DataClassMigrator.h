//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject
{
    NSDictionary *_context;
    _Bool _didUpgrade;
    unsigned int _userDataDisposition;
    NSString *_restoredBackupBuildVersion;
    NSString *_restoredBackupProductType;
    NSString *_dmBundleIdentifier;
}

+ (id)dataClassMigratorForBundleAtPath:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dmBundleIdentifier; // @synthesize dmBundleIdentifier=_dmBundleIdentifier;
@property(nonatomic) _Bool didUpgrade; // @synthesize didUpgrade=_didUpgrade;
@property(retain, nonatomic) NSString *restoredBackupProductType; // @synthesize restoredBackupProductType=_restoredBackupProductType;
@property(retain, nonatomic) NSString *restoredBackupBuildVersion; // @synthesize restoredBackupBuildVersion=_restoredBackupBuildVersion;
@property(nonatomic) unsigned int userDataDisposition; // @synthesize userDataDisposition=_userDataDisposition;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
- (_Bool)performMigration;
@property(readonly, nonatomic) _Bool wasPasscodeSetInBackup;
@property(readonly, nonatomic) _Bool shouldPreserveSettingsAfterRestore;
@property(readonly, nonatomic) _Bool didRestoreFromCloudBackup;
@property(readonly, nonatomic) _Bool didMigrateBackupFromDifferentDevice;
@property(readonly, nonatomic) _Bool didRestoreFromBackup;

@end

