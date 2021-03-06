//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HDCloudSyncManager, NSDate, NSError;

@protocol HDCloudSyncManagerObserver
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateDataUploadRequestStatus:(long long)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateRestoreCompletionDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateErrorRequiringUserAction:(NSError *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastPulledUpdateDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastPullDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateLastPushDate:(NSDate *)arg2;
- (void)cloudSyncManager:(HDCloudSyncManager *)arg1 didUpdateSyncEnabled:(_Bool)arg2;
@end

