//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRApplicationActivity, MRDCompanionConnectionController, MRDMediaRemoteClient, MROrigin, MROutputContextDataSource, MRPlayerPath, NSArray, NSDate, NSDictionary, NSString, _MRAVAirPlaySecuritySettingsProtobuf;

@interface MRDDiagnostic : NSObject
{
    _Bool _lockScreenWidgetActive;
    _Bool _lockScreenWidgetVisible;
    _Bool _isAdvertisingProximity;
    unsigned int _systemDiscoveryMode;
    unsigned int _hostedRouteDiscoveryMode;
    NSDate *_dateCreated;
    NSArray *_activeClients;
    NSArray *_activeTransactions;
    MRApplicationActivity *_currentAppActivity;
    MRDMediaRemoteClient *_localNowPlayingClient;
    MRDMediaRemoteClient *_systemMediaClient;
    MRDMediaRemoteClient *_frontmostClient;
    MRDMediaRemoteClient *_daemonClient;
    NSArray *_originClients;
    MROrigin *_activeOrigin;
    MRPlayerPath *_electedPlayer;
    NSString *_electedPlayerReason;
    MRPlayerPath *_lockScreenPlayerPath;
    NSDictionary *_enqueuedCommands;
    NSArray *_remoteControlContexts;
    NSArray *_queuedInitiatePlaybackMessages;
    NSArray *_connectedExternalDevices;
    NSArray *_televisionEndpoints;
    MROutputContextDataSource *_localOutputContextDataSource;
    _MRAVAirPlaySecuritySettingsProtobuf *_airplaySecuritySettings;
    NSString *_localReceiverPairingIdentity;
    NSDictionary *_systemActiveEndpoints;
    NSArray *_autoConnectedEndpoints;
    NSArray *_autoConnectingEndpoints;
    NSArray *_migrationEvents;
    NSArray *_nearbyDevices;
    NSArray *_mediumDevices;
    NSArray *_promptingDevices;
    NSArray *_immediateDevices;
    NSArray *_migratingDevices;
    NSString *_advertisingReasonDescription;
    MRDCompanionConnectionController *_companionEndpoint;
    NSArray *_hostedDiscoverySessions;
    NSArray *_endpoints;
    NSDictionary *_hostedExternalDevices;
    NSArray *_recordingEndpointClients;
    NSArray *_registeredVirtualAudioDevices;
    NSArray *_transactions;
    unsigned long long _usedTransactionMemory;
    unsigned long long _allowedTransactionMemory;
    double _transactionWaitDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double transactionWaitDuration; // @synthesize transactionWaitDuration=_transactionWaitDuration;
@property(nonatomic) unsigned long long allowedTransactionMemory; // @synthesize allowedTransactionMemory=_allowedTransactionMemory;
@property(nonatomic) unsigned long long usedTransactionMemory; // @synthesize usedTransactionMemory=_usedTransactionMemory;
@property(copy, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(copy, nonatomic) NSArray *registeredVirtualAudioDevices; // @synthesize registeredVirtualAudioDevices=_registeredVirtualAudioDevices;
@property(copy, nonatomic) NSArray *recordingEndpointClients; // @synthesize recordingEndpointClients=_recordingEndpointClients;
@property(copy, nonatomic) NSDictionary *hostedExternalDevices; // @synthesize hostedExternalDevices=_hostedExternalDevices;
@property(copy, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(copy, nonatomic) NSArray *hostedDiscoverySessions; // @synthesize hostedDiscoverySessions=_hostedDiscoverySessions;
@property(nonatomic) unsigned int hostedRouteDiscoveryMode; // @synthesize hostedRouteDiscoveryMode=_hostedRouteDiscoveryMode;
@property(retain, nonatomic) MRDCompanionConnectionController *companionEndpoint; // @synthesize companionEndpoint=_companionEndpoint;
@property(copy, nonatomic) NSString *advertisingReasonDescription; // @synthesize advertisingReasonDescription=_advertisingReasonDescription;
@property(nonatomic) _Bool isAdvertisingProximity; // @synthesize isAdvertisingProximity=_isAdvertisingProximity;
@property(copy, nonatomic) NSArray *migratingDevices; // @synthesize migratingDevices=_migratingDevices;
@property(copy, nonatomic) NSArray *immediateDevices; // @synthesize immediateDevices=_immediateDevices;
@property(copy, nonatomic) NSArray *promptingDevices; // @synthesize promptingDevices=_promptingDevices;
@property(copy, nonatomic) NSArray *mediumDevices; // @synthesize mediumDevices=_mediumDevices;
@property(copy, nonatomic) NSArray *nearbyDevices; // @synthesize nearbyDevices=_nearbyDevices;
@property(copy, nonatomic) NSArray *migrationEvents; // @synthesize migrationEvents=_migrationEvents;
@property(copy, nonatomic) NSArray *autoConnectingEndpoints; // @synthesize autoConnectingEndpoints=_autoConnectingEndpoints;
@property(copy, nonatomic) NSArray *autoConnectedEndpoints; // @synthesize autoConnectedEndpoints=_autoConnectedEndpoints;
@property(copy, nonatomic) NSDictionary *systemActiveEndpoints; // @synthesize systemActiveEndpoints=_systemActiveEndpoints;
@property(copy, nonatomic) NSString *localReceiverPairingIdentity; // @synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity;
@property(retain, nonatomic) _MRAVAirPlaySecuritySettingsProtobuf *airplaySecuritySettings; // @synthesize airplaySecuritySettings=_airplaySecuritySettings;
@property(nonatomic) unsigned int systemDiscoveryMode; // @synthesize systemDiscoveryMode=_systemDiscoveryMode;
@property(retain, nonatomic) MROutputContextDataSource *localOutputContextDataSource; // @synthesize localOutputContextDataSource=_localOutputContextDataSource;
@property(copy, nonatomic) NSArray *televisionEndpoints; // @synthesize televisionEndpoints=_televisionEndpoints;
@property(copy, nonatomic) NSArray *connectedExternalDevices; // @synthesize connectedExternalDevices=_connectedExternalDevices;
@property(copy, nonatomic) NSArray *queuedInitiatePlaybackMessages; // @synthesize queuedInitiatePlaybackMessages=_queuedInitiatePlaybackMessages;
@property(copy, nonatomic) NSArray *remoteControlContexts; // @synthesize remoteControlContexts=_remoteControlContexts;
@property(copy, nonatomic) NSDictionary *enqueuedCommands; // @synthesize enqueuedCommands=_enqueuedCommands;
@property(retain, nonatomic) MRPlayerPath *lockScreenPlayerPath; // @synthesize lockScreenPlayerPath=_lockScreenPlayerPath;
@property(nonatomic) _Bool lockScreenWidgetVisible; // @synthesize lockScreenWidgetVisible=_lockScreenWidgetVisible;
@property(nonatomic) _Bool lockScreenWidgetActive; // @synthesize lockScreenWidgetActive=_lockScreenWidgetActive;
@property(retain, nonatomic) NSString *electedPlayerReason; // @synthesize electedPlayerReason=_electedPlayerReason;
@property(retain, nonatomic) MRPlayerPath *electedPlayer; // @synthesize electedPlayer=_electedPlayer;
@property(retain, nonatomic) MROrigin *activeOrigin; // @synthesize activeOrigin=_activeOrigin;
@property(copy, nonatomic) NSArray *originClients; // @synthesize originClients=_originClients;
@property(retain, nonatomic) MRDMediaRemoteClient *daemonClient; // @synthesize daemonClient=_daemonClient;
@property(retain, nonatomic) MRDMediaRemoteClient *frontmostClient; // @synthesize frontmostClient=_frontmostClient;
@property(retain, nonatomic) MRDMediaRemoteClient *systemMediaClient; // @synthesize systemMediaClient=_systemMediaClient;
@property(retain, nonatomic) MRDMediaRemoteClient *localNowPlayingClient; // @synthesize localNowPlayingClient=_localNowPlayingClient;
@property(copy, nonatomic) MRApplicationActivity *currentAppActivity; // @synthesize currentAppActivity=_currentAppActivity;
@property(copy, nonatomic) NSArray *activeTransactions; // @synthesize activeTransactions=_activeTransactions;
@property(copy, nonatomic) NSArray *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 indentLevel:(unsigned int)arg4 usingDebugDescription:(_Bool)arg5;
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 indentLevel:(unsigned int)arg4;
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3;
- (void)_appendNullableObjectDescription:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 usingDebugDescription:(_Bool)arg4;
- (void)_appendNullableObjectDescription:(id)arg1 toString:(id)arg2 withTitle:(id)arg3;
- (void)_appendSubheader:(id)arg1 toString:(id)arg2;
- (id)createDiagnosticInfo;
- (id)init;

@end

