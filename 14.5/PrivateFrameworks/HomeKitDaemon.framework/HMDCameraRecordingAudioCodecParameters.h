//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface HMDCameraRecordingAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_audioChannelCount;
    NSArray *_bitRateModes;
    NSArray *_audioSampleRates;
    NSNumber *_maxAudioBitRate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *maxAudioBitRate; // @synthesize maxAudioBitRate=_maxAudioBitRate;
@property(readonly, copy, nonatomic) NSArray *audioSampleRates; // @synthesize audioSampleRates=_audioSampleRates;
@property(readonly, copy, nonatomic) NSArray *bitRateModes; // @synthesize bitRateModes=_bitRateModes;
@property(readonly, copy, nonatomic) NSNumber *audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithChannelCount:(id)arg1 bitRateModes:(id)arg2 audioSampleRates:(id)arg3 maxAudioBitRate:(id)arg4;

@end

