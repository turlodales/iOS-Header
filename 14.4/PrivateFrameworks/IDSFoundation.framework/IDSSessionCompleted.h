//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isQREnabled;
    _Bool _isUsingQRDirectly;
    _Bool _isInitiator;
    _Bool _isScreenSharingSessionType;
    _Bool _isWithDefaultPairedDevice;
    _Bool _isNetworkEnabled;
    _Bool _isNetworkActive;
    _Bool _isNetworkReachable;
    _Bool _isWifiInterfaceDisallowed;
    _Bool _isCellularInterfaceDisallowed;
    unsigned int _clientType;
    unsigned int _transportType;
    unsigned int _linkType;
    unsigned int _linkProtocol;
    unsigned int _endedReason;
    unsigned int _destinationType;
    NSString *_guid;
    NSNumber *_protocolVersionNumber;
    NSString *_serviceName;
    NSNumber *_durationOfSession;
    NSNumber *_durationToConnect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCellularInterfaceDisallowed; // @synthesize isCellularInterfaceDisallowed=_isCellularInterfaceDisallowed;
@property(readonly, nonatomic) _Bool isWifiInterfaceDisallowed; // @synthesize isWifiInterfaceDisallowed=_isWifiInterfaceDisallowed;
@property(readonly, nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property(readonly, nonatomic) _Bool isNetworkActive; // @synthesize isNetworkActive=_isNetworkActive;
@property(readonly, nonatomic) _Bool isNetworkEnabled; // @synthesize isNetworkEnabled=_isNetworkEnabled;
@property(readonly, nonatomic) NSNumber *durationToConnect; // @synthesize durationToConnect=_durationToConnect;
@property(readonly, nonatomic) NSNumber *durationOfSession; // @synthesize durationOfSession=_durationOfSession;
@property(readonly, nonatomic) unsigned int destinationType; // @synthesize destinationType=_destinationType;
@property(readonly, nonatomic) unsigned int endedReason; // @synthesize endedReason=_endedReason;
@property(readonly, nonatomic) unsigned int linkProtocol; // @synthesize linkProtocol=_linkProtocol;
@property(readonly, nonatomic) unsigned int linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) _Bool isWithDefaultPairedDevice; // @synthesize isWithDefaultPairedDevice=_isWithDefaultPairedDevice;
@property(readonly, nonatomic) _Bool isScreenSharingSessionType; // @synthesize isScreenSharingSessionType=_isScreenSharingSessionType;
@property(readonly, nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(readonly, nonatomic) _Bool isUsingQRDirectly; // @synthesize isUsingQRDirectly=_isUsingQRDirectly;
@property(readonly, nonatomic) _Bool isQREnabled; // @synthesize isQREnabled=_isQREnabled;
@property(readonly, nonatomic) unsigned int clientType; // @synthesize clientType=_clientType;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, nonatomic) NSNumber *protocolVersionNumber; // @synthesize protocolVersionNumber=_protocolVersionNumber;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned int)arg4 isQREnabled:(_Bool)arg5 isUsingQRDirectly:(_Bool)arg6 isInitiator:(_Bool)arg7 isScreenSharingSessionType:(_Bool)arg8 isWithDefaultPairedDevice:(_Bool)arg9 transportType:(unsigned int)arg10 linkType:(unsigned int)arg11 linkProtocol:(unsigned int)arg12 endedReason:(unsigned int)arg13 destinationType:(unsigned int)arg14 durationOfSession:(id)arg15 durationToConnect:(id)arg16 isNetworkEnabled:(_Bool)arg17 isNetworkActive:(_Bool)arg18 isNetworkReachable:(_Bool)arg19 isWifiInterfaceDisallowed:(_Bool)arg20 isCellularInterfaceDisallowed:(_Bool)arg21;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

