//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSyncCoordinatorEventNotificationDelegate-Protocol.h>

@protocol OS_dispatch_queue;

@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void).cxx_destruct;
- (void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2;
- (void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3;
- (void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2;
- (id)init;

@end

