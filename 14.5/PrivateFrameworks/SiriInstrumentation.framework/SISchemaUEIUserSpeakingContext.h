//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSData, SISchemaUEIUserSpeakingEnded, SISchemaUEIUserSpeakingStarted;

@interface SISchemaUEIUserSpeakingContext : SISchemaInstrumentationMessage
{
    SISchemaUEIUserSpeakingStarted *_startedOrChanged;
    SISchemaUEIUserSpeakingEnded *_ended;
    _Bool _hasStartedOrChanged;
    _Bool _hasEnded;
    unsigned long long _whichContextevent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) SISchemaUEIUserSpeakingEnded *ended; // @synthesize ended=_ended;
@property(retain, nonatomic) SISchemaUEIUserSpeakingStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;

@end

