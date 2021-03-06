//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncOperation.h>

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncMarkAllOwnersDisabledOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate>
{
    HDSynchronousTaskGroup *_taskGroup;
}

- (void).cxx_destruct;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;
- (id)_updatedRegistryRecordForZone:(id)arg1 container:(id)arg2 disabledOwnerIdentifiers:(id)arg3;
- (id)_updatedMasterRecordForZone:(id)arg1 container:(id)arg2 disabledOwnerIdentifiers:(id)arg3;
- (id)_updatedRecordsForContainer:(id)arg1 disabledOwnerIdentifiers:(id)arg2;
- (void)main;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

