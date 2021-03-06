//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SISchemaSiriUISettings, SISchemaVoiceSettings;

@interface SISchemaDeviceFixedContext : PBCodable
{
    NSString *_deviceType;
    NSString *_systemBuild;
    NSString *_siriInputLanguage;
    NSString *_siriVoiceLanguage;
    NSString *_systemLocale;
    NSString *_siriDeviceID;
    NSString *_speechID;
    SISchemaSiriUISettings *_siriUISettings;
    _Bool _isSatellitePaired;
    SISchemaVoiceSettings *_voiceSettings;
    struct {
        unsigned int isSatellitePaired:1;
    } _has;
    _Bool _hasDeviceType;
    _Bool _hasSystemBuild;
    _Bool _hasSiriInputLanguage;
    _Bool _hasSiriVoiceLanguage;
    _Bool _hasSystemLocale;
    _Bool _hasSiriDeviceID;
    _Bool _hasSpeechID;
    _Bool _hasSiriUISettings;
    _Bool _hasVoiceSettings;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasVoiceSettings; // @synthesize hasVoiceSettings=_hasVoiceSettings;
@property(nonatomic) _Bool hasSiriUISettings; // @synthesize hasSiriUISettings=_hasSiriUISettings;
@property(nonatomic) _Bool hasSpeechID; // @synthesize hasSpeechID=_hasSpeechID;
@property(nonatomic) _Bool hasSiriDeviceID; // @synthesize hasSiriDeviceID=_hasSiriDeviceID;
@property(nonatomic) _Bool hasSystemLocale; // @synthesize hasSystemLocale=_hasSystemLocale;
@property(nonatomic) _Bool hasSiriVoiceLanguage; // @synthesize hasSiriVoiceLanguage=_hasSiriVoiceLanguage;
@property(nonatomic) _Bool hasSiriInputLanguage; // @synthesize hasSiriInputLanguage=_hasSiriInputLanguage;
@property(nonatomic) _Bool hasSystemBuild; // @synthesize hasSystemBuild=_hasSystemBuild;
@property(nonatomic) _Bool hasDeviceType; // @synthesize hasDeviceType=_hasDeviceType;
@property(retain, nonatomic) SISchemaVoiceSettings *voiceSettings; // @synthesize voiceSettings=_voiceSettings;
@property(nonatomic) _Bool isSatellitePaired; // @synthesize isSatellitePaired=_isSatellitePaired;
@property(retain, nonatomic) SISchemaSiriUISettings *siriUISettings; // @synthesize siriUISettings=_siriUISettings;
@property(copy, nonatomic) NSString *speechID; // @synthesize speechID=_speechID;
@property(copy, nonatomic) NSString *siriDeviceID; // @synthesize siriDeviceID=_siriDeviceID;
@property(copy, nonatomic) NSString *systemLocale; // @synthesize systemLocale=_systemLocale;
@property(copy, nonatomic) NSString *siriVoiceLanguage; // @synthesize siriVoiceLanguage=_siriVoiceLanguage;
@property(copy, nonatomic) NSString *siriInputLanguage; // @synthesize siriInputLanguage=_siriInputLanguage;
@property(copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsSatellitePaired;

@end

