//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKCloudSyncShareParticipantManagerServerInterface-Protocol.h>

@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>
{
}

+ (_Bool)validateClient:(id)arg1 error:(id *)arg2;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_revokeAccessForAllShareParticipantsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchSharingParticipantStatus:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

