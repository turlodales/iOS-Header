//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _protocolVersion;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    NSString *_clusterID;
    NSString *_clusterLeaderID;
    unsigned int _clusterType;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_modelID;
    NSString *_name;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    _Bool _allowsPairing;
    _Bool _connected;
    _Bool _isAirplayActive;
    _Bool _isClusterAware;
    _Bool _isGroupLeader;
    _Bool _isProxyGroupPlayer;
    _Bool _supportsACL;
    _Bool _supportsExtendedMotion;
    _Bool _supportsSharedQueue;
    _Bool _supportsSystemPairing;
    _Bool _tightlySyncedGroup;
    struct {
        unsigned int protocolVersion:1;
        unsigned int clusterType:1;
        unsigned int deviceClass:1;
        unsigned int lastSupportedMessageType:1;
        unsigned int logicalDeviceCount:1;
        unsigned int sharedQueueVersion:1;
        unsigned int allowsPairing:1;
        unsigned int connected:1;
        unsigned int isAirplayActive:1;
        unsigned int isClusterAware:1;
        unsigned int isGroupLeader:1;
        unsigned int isProxyGroupPlayer:1;
        unsigned int supportsACL:1;
        unsigned int supportsExtendedMotion:1;
        unsigned int supportsSharedQueue:1;
        unsigned int supportsSystemPairing:1;
        unsigned int tightlySyncedGroup:1;
    } _has;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

