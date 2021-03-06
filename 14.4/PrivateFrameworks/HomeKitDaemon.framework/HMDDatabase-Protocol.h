//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBCloudDatabase, HMBCloudZoneConfiguration, HMBCloudZoneID, HMBLocalDatabase, HMBLocalZone, HMBShareInvitation, HMDDatabaseFetchZonesResult, NAFuture, NSString;
@protocol HMBLocalZoneDelegate><HMBCloudZoneDelegate, HMDDatabaseDelegate;

@protocol HMDDatabase <NSObject>
@property(readonly) HMBLocalDatabase *localDatabase;
@property(readonly) HMBCloudDatabase *cloudDatabase;
- (NAFuture *)declineInvitation:(HMBShareInvitation *)arg1;
- (NAFuture *)acceptInvitation:(HMBShareInvitation *)arg1;
- (NAFuture *)removeLocalAndCloudDataForLocalZone:(HMBLocalZone *)arg1;
- (NAFuture *)removeSharedZonesWithName:(NSString *)arg1;
- (NAFuture *)removePrivateZonesWithName:(NSString *)arg1;
- (HMDDatabaseFetchZonesResult *)sharedZonesWithID:(HMBCloudZoneID *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id *)arg4;
- (HMBCloudZoneID *)existingSharedZoneIDWithName:(NSString *)arg1;
- (HMDDatabaseFetchZonesResult *)privateZonesWithName:(NSString *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id *)arg4;
- (HMDDatabaseFetchZonesResult *)existingPrivateZonesWithName:(NSString *)arg1 configuration:(HMBCloudZoneConfiguration *)arg2 delegate:(id <HMBLocalZoneDelegate><HMBCloudZoneDelegate>)arg3 error:(id *)arg4;
- (NAFuture *)unregisterSharedSubscriptionForExternalRecordType:(NSString *)arg1;
- (NAFuture *)registerSharedSubscriptionForExternalRecordType:(NSString *)arg1;
- (void)start;
- (void)removeDelegate:(id <HMDDatabaseDelegate>)arg1;
- (void)addDelegate:(id <HMDDatabaseDelegate>)arg1;
@end

