//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShazamKit/SHSignature.h>

@class AVAudioFormat, SigX;

@interface SHMutableSignature : SHSignature
{
    unsigned int _currentFrameCount;
    double _maximumSeconds;
    long long _clipStyle;
    AVAudioFormat *_format;
    SigX *_sigX;
}

+ (_Bool)supportsSecureCoding;
+ (id)entitlements;
- (void).cxx_destruct;
@property(nonatomic) unsigned int currentFrameCount; // @synthesize currentFrameCount=_currentFrameCount;
@property(retain, nonatomic) SigX *sigX; // @synthesize sigX=_sigX;
@property(retain, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) long long clipStyle; // @synthesize clipStyle=_clipStyle;
@property(readonly, nonatomic) double maximumSeconds; // @synthesize maximumSeconds=_maximumSeconds;
- (id)debugDescription;
- (double)secondsFromFrameCount:(unsigned int)arg1 forFormat:(id)arg2;
- (double)length;
- (id)dataRepresentation;
- (id)generate:(id *)arg1;
- (long long)currentPosition;
- (_Bool)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id *)arg3;
- (void)performSignatureGenerationEntitlementCheck;
- (_Bool)append:(id)arg1 atTime:(id)arg2 error:(id *)arg3;
- (id)clipExcessAudio:(id)arg1;
- (void)configureWithFormat:(id)arg1;
- (int)signatureType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumSeconds:(double)arg1 clipStyle:(long long)arg2;
- (id)init;

@end

