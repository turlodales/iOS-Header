//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKSyncEngine.h>

@protocol VCCKSyncEngineDataSource;

@interface VCCKSyncEngine : CKSyncEngine
{
}

- (void)didReceiveDatabaseNotification:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak id <VCCKSyncEngineDataSource> dataSource; // @dynamic dataSource;

@end

