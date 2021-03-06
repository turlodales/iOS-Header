//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendActivitySnapshot.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>

@class ASCodableCloudKitActivitySnapshot, HKQuantity, NSString;

@interface _HKFitnessFriendActivitySnapshot (CloudKitCodingSupport) <ASCloudKitCodable>
+ (id)_fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1;
+ (id)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;
- (id)recordWithZoneID:(id)arg1;
@property(readonly, nonatomic) ASCodableCloudKitActivitySnapshot *codableSnapshot;
- (_Bool)isAmm;
- (double)mmPercent;
@property(readonly, nonatomic) HKQuantity *mmgQuantity;
@property(readonly, nonatomic) HKQuantity *mmvQuantity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

