//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject
{
    long long _migrationState;
    NSString *_migratorDeviceIdentifier;
    NSDate *_serverModificationDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *serverModificationDate; // @synthesize serverModificationDate=_serverModificationDate;
@property(readonly, copy, nonatomic) NSString *migratorDeviceIdentifier; // @synthesize migratorDeviceIdentifier=_migratorDeviceIdentifier;
@property(readonly, nonatomic) long long migrationState; // @synthesize migrationState=_migrationState;
- (id)init;
- (id)initWithMigrationState:(long long)arg1 migratorDeviceIdentifier:(id)arg2 serverModificationDate:(id)arg3;

@end

