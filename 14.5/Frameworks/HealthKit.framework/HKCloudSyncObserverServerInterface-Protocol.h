//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSProgress, NSUUID;

@protocol HKCloudSyncObserverServerInterface <NSObject>
- (NSProgress *)remote_startSyncIfRestoreNotCompletedWithUUID:(NSUUID *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)remote_startObservingSyncStatusWithCompletion:(void (^)(void))arg1;
@end

