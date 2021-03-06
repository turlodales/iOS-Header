//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVOutputDeviceSourceInfo, NSArray, NSData, NSDictionary, NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDevice : NSObject
{
    _Bool _canAccessRemoteAssets;
    _Bool _canAccessAppleMusic;
    _Bool _canAccessiCloudMusicLibrary;
    _Bool _canPlayEncryptedProgressiveDownloadAssets;
    _Bool _canFetchMediaDataFromSender;
    _Bool _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    _Bool _remoteControllable;
    _Bool _groupLeader;
    _Bool _groupContainsGroupLeader;
    _Bool _airPlayReceiverSessionActive;
    _Bool _groupable;
    _Bool _supportsBluetoothSharing;
    _Bool _proxyGroupPlayer;
    _Bool _canRelayCommunicationChannel;
    _Bool _supportsBufferedAirPlay;
    _Bool _deviceGroupable;
    _Bool _pickedOnPairedDevice;
    _Bool _hasBatteryLevel;
    _Bool _localDevice;
    _Bool _supportsExternalScreen;
    _Bool _requiresAuthorization;
    _Bool _parentGroupContainsDiscoverableLeader;
    _Bool _volumeControlAvailable;
    _Bool _supportsHAP;
    _Bool _supportsRapport;
    _Bool _isAddedToHomeKit;
    unsigned int _deviceType;
    unsigned int _deviceSubtype;
    float _batteryLevel;
    float _volume;
    NSString *_name;
    NSString *_uid;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_groupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
    NSArray *_clusterComposition;
    unsigned long long _configuredClusterSize;
    NSString *_parentGroupIdentifier;
    NSString *_bluetoothID;
    NSString *_primaryID;
    MRAVEndpoint *_endpoint;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSString *_logicalDeviceID;
    NSString *_currentBluetoothListeningMode;
    NSArray *_availableBluetoothListeningModes;
}

+ (id)localDeviceLocalizedName;
+ (id)companionDeviceUID;
+ (id)localDeviceUID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *availableBluetoothListeningModes; // @synthesize availableBluetoothListeningModes=_availableBluetoothListeningModes;
@property(readonly, nonatomic) NSString *currentBluetoothListeningMode; // @synthesize currentBluetoothListeningMode=_currentBluetoothListeningMode;
@property(readonly, nonatomic) _Bool isAddedToHomeKit; // @synthesize isAddedToHomeKit=_isAddedToHomeKit;
@property(readonly, nonatomic) _Bool supportsRapport; // @synthesize supportsRapport=_supportsRapport;
@property(readonly, nonatomic) NSString *logicalDeviceID; // @synthesize logicalDeviceID=_logicalDeviceID;
@property(readonly, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) __weak MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *primaryID; // @synthesize primaryID=_primaryID;
@property(readonly, nonatomic) _Bool supportsHAP; // @synthesize supportsHAP=_supportsHAP;
@property(readonly, nonatomic) NSString *bluetoothID; // @synthesize bluetoothID=_bluetoothID;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property(copy, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
@property(readonly, nonatomic) _Bool parentGroupContainsDiscoverableLeader; // @synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader;
@property(readonly, nonatomic) _Bool requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(readonly, nonatomic) _Bool supportsExternalScreen; // @synthesize supportsExternalScreen=_supportsExternalScreen;
@property(readonly, nonatomic, getter=isLocalDevice) _Bool localDevice; // @synthesize localDevice=_localDevice;
@property(readonly, nonatomic) _Bool hasBatteryLevel; // @synthesize hasBatteryLevel=_hasBatteryLevel;
@property(readonly, nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) unsigned long long configuredClusterSize; // @synthesize configuredClusterSize=_configuredClusterSize;
@property(readonly, nonatomic) NSArray *clusterComposition; // @synthesize clusterComposition=_clusterComposition;
@property(readonly, nonatomic) unsigned int deviceSubtype; // @synthesize deviceSubtype=_deviceSubtype;
@property(readonly, nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic, getter=isPickedOnPairedDevice) _Bool pickedOnPairedDevice; // @synthesize pickedOnPairedDevice=_pickedOnPairedDevice;
@property(readonly, nonatomic, getter=isDeviceGroupable) _Bool deviceGroupable; // @synthesize deviceGroupable=_deviceGroupable;
@property(readonly, nonatomic) _Bool supportsBufferedAirPlay; // @synthesize supportsBufferedAirPlay=_supportsBufferedAirPlay;
@property(readonly, nonatomic) _Bool canRelayCommunicationChannel; // @synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel;
@property(readonly, nonatomic, getter=isProxyGroupPlayer) _Bool proxyGroupPlayer; // @synthesize proxyGroupPlayer=_proxyGroupPlayer;
@property(readonly, nonatomic) _Bool supportsBluetoothSharing; // @synthesize supportsBluetoothSharing=_supportsBluetoothSharing;
@property(readonly, nonatomic, getter=isGroupable) _Bool groupable; // @synthesize groupable=_groupable;
@property(readonly, nonatomic, getter=isAirPlayReceiverSessionActive) _Bool airPlayReceiverSessionActive; // @synthesize airPlayReceiverSessionActive=_airPlayReceiverSessionActive;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader; // @synthesize groupContainsGroupLeader=_groupContainsGroupLeader;
@property(readonly, nonatomic, getter=isGroupLeader) _Bool groupLeader; // @synthesize groupLeader=_groupLeader;
@property(readonly, nonatomic, getter=isRemoteControllable) _Bool remoteControllable; // @synthesize remoteControllable=_remoteControllable;
@property(readonly, nonatomic) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // @synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(readonly, nonatomic) _Bool canFetchMediaDataFromSender; // @synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender;
@property(readonly, nonatomic) _Bool canPlayEncryptedProgressiveDownloadAssets; // @synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets;
@property(readonly, nonatomic) _Bool canAccessiCloudMusicLibrary; // @synthesize canAccessiCloudMusicLibrary=_canAccessiCloudMusicLibrary;
@property(readonly, nonatomic) _Bool canAccessAppleMusic; // @synthesize canAccessAppleMusic=_canAccessAppleMusic;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property(readonly, nonatomic) NSString *playingPairedDeviceName; // @synthesize playingPairedDeviceName=_playingPairedDeviceName;
@property(readonly, nonatomic) NSDictionary *modelSpecificInfo; // @synthesize modelSpecificInfo=_modelSpecificInfo;
@property(readonly, nonatomic) NSData *MACAddress; // @synthesize MACAddress=_MACAddress;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)containsUID:(id)arg1;
@property(readonly, nonatomic, getter=isUsingJSONProtocol) _Bool usingJSONProtocol;
@property(readonly, nonatomic) NSString *debugName;
@property(readonly, nonatomic) _Bool isPersonalRoute;
@property(readonly, nonatomic) unsigned int volumeCapabilities;
@property(readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property(readonly, nonatomic) NSString *roleDescription;
@property(readonly, nonatomic) NSString *composedTypeDescription;
@property(readonly, nonatomic) NSString *capabilitiesDescription;
@property(readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
- (unsigned long long)hash;
- (_Bool)isEqualToOutputDevice:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) unsigned int clusterType;

@end

