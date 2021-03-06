//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCMediaStreamMultiwayConfig, VCMediaStreamRateControlConfig, VCNetworkAddress;

__attribute__((visibility("hidden")))
@interface VCMediaStreamConfig : NSObject
{
    long long _direction;
    VCNetworkAddress *_localAddress;
    NSString *_cName;
    unsigned int _localSSRC;
    VCNetworkAddress *_remoteAddress;
    unsigned int _remoteSSRC;
    unsigned long long _recommendedMTU;
    NSData *_sendMasterKey;
    NSMutableDictionary *_txPayloadMap;
    NSData *_receiveMasterKey;
    NSMutableDictionary *_rxPayloadMap;
    _Bool _latencySensitiveModeEnabled;
    long long _SRTPCipherSuite;
    _Bool _rtpTimeOutEnabled;
    double _rtpTimeOutInterval;
    _Bool _decryptionTimeOutEnabled;
    double _decryptionMKMRecoveryInterval;
    double _decryptionTimeOutInterval;
    unsigned int _cellularUniqueTag;
    _Bool _rtcpEnabled;
    double _rtcpSendInterval;
    long long _SRTCPCipherSuite;
    _Bool _rtcpTimeOutEnabled;
    double _rtcpTimeOutInterval;
    _Bool _rtcpReceiveCallbackEnabled;
    unsigned short _rtcpRemotePort;
    _Bool _rateAdaptationEnabled;
    VCMediaStreamMultiwayConfig *_multiwayConfig;
    VCMediaStreamRateControlConfig *_rateControlConfig;
}

@property(retain, nonatomic) VCMediaStreamRateControlConfig *rateControlConfig; // @synthesize rateControlConfig=_rateControlConfig;
@property(nonatomic, getter=isLatencySensitiveModeEnabled) _Bool latencySensitiveModeEnabled; // @synthesize latencySensitiveModeEnabled=_latencySensitiveModeEnabled;
@property(nonatomic, getter=isRTCPReceiveCallbackEnabled) _Bool rtcpReceiveCallbackEnabled; // @synthesize rtcpReceiveCallbackEnabled=_rtcpReceiveCallbackEnabled;
@property(retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig; // @synthesize multiwayConfig=_multiwayConfig;
@property(nonatomic, getter=isRateAdaptationEnabled) _Bool rateAdaptationEnabled; // @synthesize rateAdaptationEnabled=_rateAdaptationEnabled;
@property(readonly, nonatomic) NSDictionary *txPayloadMap; // @synthesize txPayloadMap=_txPayloadMap;
@property(readonly, nonatomic) NSDictionary *rxPayloadMap; // @synthesize rxPayloadMap=_rxPayloadMap;
@property(nonatomic) long long SRTCPCipherSuite; // @synthesize SRTCPCipherSuite=_SRTCPCipherSuite;
@property(nonatomic) long long SRTPCipherSuite; // @synthesize SRTPCipherSuite=_SRTPCipherSuite;
@property(retain, nonatomic) NSData *receiveMasterKey; // @synthesize receiveMasterKey=_receiveMasterKey;
@property(retain, nonatomic) NSData *sendMasterKey; // @synthesize sendMasterKey=_sendMasterKey;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(nonatomic) double decryptionMKMRecoveryInterval; // @synthesize decryptionMKMRecoveryInterval=_decryptionMKMRecoveryInterval;
@property(nonatomic) double decryptionTimeOutInterval; // @synthesize decryptionTimeOutInterval=_decryptionTimeOutInterval;
@property(nonatomic) double rtcpTimeOutInterval; // @synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval;
@property(nonatomic) double rtpTimeOutInterval; // @synthesize rtpTimeOutInterval=_rtpTimeOutInterval;
@property(nonatomic, getter=isDecryptionTimeOutEnabled) _Bool decryptionTimeOutEnabled; // @synthesize decryptionTimeOutEnabled=_decryptionTimeOutEnabled;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled; // @synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled; // @synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled;
@property(nonatomic) double rtcpSendInterval; // @synthesize rtcpSendInterval=_rtcpSendInterval;
@property(nonatomic) unsigned short rtcpRemotePort; // @synthesize rtcpRemotePort=_rtcpRemotePort;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled; // @synthesize rtcpEnabled=_rtcpEnabled;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *cName; // @synthesize cName=_cName;
@property(retain, nonatomic) VCNetworkAddress *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain, nonatomic) VCNetworkAddress *localAddress; // @synthesize localAddress=_localAddress;
- (void)applyMediaStreamClientDictionary:(id)arg1;
- (void)setupMediaStreamConfig;
@property(readonly, nonatomic) long long primaryTxCodecType;
- (void)addTxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)addTxPayloadType:(int)arg1;
- (void)addRxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)addRxPayloadType:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (id)init;

@end

