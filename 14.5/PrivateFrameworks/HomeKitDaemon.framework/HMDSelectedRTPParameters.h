//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDSelectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_payloadType;
    NSNumber *_synchronizationSource;
    NSNumber *_maximumBitrate;
    NSNumber *_minimumBitrate;
    NSNumber *_rtcpInterval;
    NSNumber *_maxMTU;
    NSNumber *_comfortNoisePayloadType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *comfortNoisePayloadType; // @synthesize comfortNoisePayloadType=_comfortNoisePayloadType;
@property(copy, nonatomic) NSNumber *maxMTU; // @synthesize maxMTU=_maxMTU;
@property(readonly, copy, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, copy, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, copy, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
@property(retain, nonatomic) NSNumber *synchronizationSource; // @synthesize synchronizationSource=_synchronizationSource;
@property(readonly, copy, nonatomic) NSNumber *payloadType; // @synthesize payloadType=_payloadType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithPayloadType:(id)arg1 maximumBitrate:(id)arg2 minimumBitrate:(id)arg3 rtcpInterval:(id)arg4 maxMTU:(id)arg5 comfortNoisePayloadType:(id)arg6;

@end

