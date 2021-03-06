//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying>
{
    struct Token _quasarToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Token quasarToken; // @synthesize quasarToken=_quasarToken;
- (id)description;
@property(readonly, nonatomic) NSString *ipaPhoneSequence;
@property(readonly, nonatomic) NSString *phoneSequence;
@property(readonly, nonatomic) _Bool hasSpaceBefore;
@property(readonly, nonatomic) _Bool hasSpaceAfter;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double silenceStart;
@property(readonly, nonatomic) double end;
@property(readonly, nonatomic) double start;
@property(readonly, copy, nonatomic) NSString *tokenName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithQuasarToken:(const struct Token *)arg1;
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(_Bool)arg6 hasSpaceBefore:(_Bool)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

