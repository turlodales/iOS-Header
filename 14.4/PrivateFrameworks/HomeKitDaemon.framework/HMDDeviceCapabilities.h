//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDeviceCapabilitiesModel, NSString, NSUUID;

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSCopying, NSSecureCoding>
{
    HMDDeviceCapabilitiesModel *_objectModel;
}

+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (unsigned long long)supportedPairingCapabilities;
+ (_Bool)supportsAudioDestinationCreation;
+ (_Bool)supportsAudioDestinationControllerCreation;
+ (id)deviceCapabilities;
+ (_Bool)supportsStereoPairingV2;
+ (_Bool)supportsStereoPairingV1;
+ (_Bool)supportsBulletinBoard;
+ (_Bool)supportsHomeKitDataStream;
+ (_Bool)isCompanionCapable;
+ (_Bool)supportsBackboard;
+ (_Bool)supportsSyncingToSharedUsers;
+ (_Bool)supportsAddingAccessory;
+ (_Bool)supportsReceivingRemoteCameraStream;
+ (_Bool)supportsDismissUserNotificationAndDialog;
+ (_Bool)supportsUserNotifications;
+ (_Bool)supportsCameraSnapshotRequestViaRelay;
+ (_Bool)supportsTargetControllerAutoConfigure;
+ (_Bool)supportsRemoteAccess;
+ (_Bool)requiresHomePodPairing;
+ (_Bool)isAppleMediaAccessory;
+ (_Bool)supportsCustomerReset;
+ (_Bool)supportsDeviceLock;
+ (_Bool)supportsSymptomsHandler;
+ (_Bool)supportsIntentDonation;
+ (_Bool)supportsHomeApp;
+ (_Bool)supportsLocalization;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDDeviceCapabilitiesModel *objectModel; // @synthesize objectModel=_objectModel;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
@property(copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool supportsThreadBorderRouter;
@property(readonly) _Bool supportsPreferredMediaUser;
@property(readonly) _Bool supportsThirdPartyMusic;
@property(readonly) _Bool supportsDoorbellChime;
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsCameraRecordingReachabilityNotifications;
@property(readonly, nonatomic) _Bool supportsIDSActivityMonitorPresence;
@property(readonly, nonatomic) _Bool supportsNaturalLighting;
@property(readonly, nonatomic) _Bool supportsFaceClassification;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
@property(readonly, nonatomic) _Bool supportsCameraActivityZones;
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsCameraSignificantEventNotifications;
@property(readonly, nonatomic) _Bool supportsMediaActions;
@property(readonly, nonatomic) _Bool supportsShortcutActions;
@property(readonly, nonatomic) _Bool supportsRouterManagement;
@property(readonly, nonatomic) _Bool supportsCameraRecording;
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsHomeInvitation;
@property(readonly, nonatomic, getter=isRemoteGatewayCapable) _Bool remoteGatewayCapable;
@property(readonly, nonatomic, getter=isResidentCapable) _Bool residentCapable;
@property(readonly, nonatomic) _Bool supportsAssistantAccessControl;
@property(readonly, nonatomic) _Bool supportsWholeHouseAudio;
@property(readonly, nonatomic) _Bool supportsCloudDataSync;
@property(readonly, nonatomic) _Bool supportsStandaloneMode;
@property(readonly, nonatomic) _Bool supportsKeyTransferServer;
@property(readonly, nonatomic) _Bool supportsKeyTransferClient;
@property(readonly, nonatomic) _Bool supportsDeviceSetup;
@property(readonly, nonatomic) _Bool supportsKeychainSync;
- (id)attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithProductInfo:(id)arg1 homekitVersion:(id)arg2;
- (id)initWithProductInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

