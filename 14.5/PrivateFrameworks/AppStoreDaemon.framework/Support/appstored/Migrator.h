//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MigratorConfigurationStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface Migrator : NSObject
{
    MigratorConfigurationStore *_configurationStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_migrations;
}

+ (_Bool)needsMigration;
+ (_Bool)needsInitialMigration;
+ (id)migrationsNeeded;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_runMigrationsWhenReady;
- (void)_queueMigrationWithConfiguration:(id)arg1;
- (void)_queueMigration:(id)arg1 persist:(_Bool)arg2;
- (void)_queueMigration:(id)arg1;
- (_Bool)_setupMigrationFollowingMigratorComplete:(unsigned long long)arg1;
- (void)_performMigration;
- (void)_loadBagAndPerformMigration;
- (void)_boostrapWhenReady;
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;
- (_Bool)performMigration:(unsigned long long)arg1 clientID:(id)arg2;
- (void)dealloc;
- (id)init;

@end

