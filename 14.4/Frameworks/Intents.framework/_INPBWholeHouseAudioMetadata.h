//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWholeHouseAudioMetadata-Protocol.h>

@class NSArray, NSString;

@interface _INPBWholeHouseAudioMetadata : PBCodable <_INPBWholeHouseAudioMetadata, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int hasExcept:1;
        unsigned int isAllSpeakers:1;
        unsigned int isInHere:1;
        unsigned int isParticipatingSpeaker:1;
        unsigned int isPauseOrStop:1;
        unsigned int isWholeHouseAudioCommand:1;
        unsigned int numberOfHomeAutomationWords:1;
    } _has;
    _Bool _hasExcept;
    _Bool _isAllSpeakers;
    _Bool _isInHere;
    _Bool _isParticipatingSpeaker;
    _Bool _isPauseOrStop;
    _Bool _isWholeHouseAudioCommand;
    int _numberOfHomeAutomationWords;
    NSArray *_intentDestinationSpeakers;
    NSArray *_intentPermanentNames;
    NSArray *_intentSpeakerNames;
    NSArray *_intentSpeakerRooms;
    NSArray *_permanentNames;
    NSArray *_speakerNames;
    NSArray *_speakerRooms;
    NSArray *_spokenEntityNames;
    NSArray *_spokenEntityTypes;
}

+ (_Bool)supportsSecureCoding;
+ (Class)spokenEntityTypeType;
+ (Class)spokenEntityNameType;
+ (Class)speakerRoomsType;
+ (Class)speakerNamesType;
+ (Class)permanentNamesType;
+ (Class)intentSpeakerRoomsType;
+ (Class)intentSpeakerNamesType;
+ (Class)intentPermanentNamesType;
+ (Class)intentDestinationSpeakersType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *spokenEntityTypes; // @synthesize spokenEntityTypes=_spokenEntityTypes;
@property(copy, nonatomic) NSArray *spokenEntityNames; // @synthesize spokenEntityNames=_spokenEntityNames;
@property(copy, nonatomic) NSArray *speakerRooms; // @synthesize speakerRooms=_speakerRooms;
@property(copy, nonatomic) NSArray *speakerNames; // @synthesize speakerNames=_speakerNames;
@property(copy, nonatomic) NSArray *permanentNames; // @synthesize permanentNames=_permanentNames;
@property(nonatomic) int numberOfHomeAutomationWords; // @synthesize numberOfHomeAutomationWords=_numberOfHomeAutomationWords;
@property(nonatomic) _Bool isWholeHouseAudioCommand; // @synthesize isWholeHouseAudioCommand=_isWholeHouseAudioCommand;
@property(nonatomic) _Bool isPauseOrStop; // @synthesize isPauseOrStop=_isPauseOrStop;
@property(nonatomic) _Bool isParticipatingSpeaker; // @synthesize isParticipatingSpeaker=_isParticipatingSpeaker;
@property(nonatomic) _Bool isInHere; // @synthesize isInHere=_isInHere;
@property(nonatomic) _Bool isAllSpeakers; // @synthesize isAllSpeakers=_isAllSpeakers;
@property(copy, nonatomic) NSArray *intentSpeakerRooms; // @synthesize intentSpeakerRooms=_intentSpeakerRooms;
@property(copy, nonatomic) NSArray *intentSpeakerNames; // @synthesize intentSpeakerNames=_intentSpeakerNames;
@property(copy, nonatomic) NSArray *intentPermanentNames; // @synthesize intentPermanentNames=_intentPermanentNames;
@property(copy, nonatomic) NSArray *intentDestinationSpeakers; // @synthesize intentDestinationSpeakers=_intentDestinationSpeakers;
@property(nonatomic) _Bool hasExcept; // @synthesize hasExcept=_hasExcept;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)spokenEntityTypeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long spokenEntityTypesCount;
- (void)addSpokenEntityType:(id)arg1;
- (void)clearSpokenEntityTypes;
- (id)spokenEntityNameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long spokenEntityNamesCount;
- (void)addSpokenEntityName:(id)arg1;
- (void)clearSpokenEntityNames;
- (id)speakerRoomsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long speakerRoomsCount;
- (void)addSpeakerRooms:(id)arg1;
- (void)clearSpeakerRooms;
- (id)speakerNamesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long speakerNamesCount;
- (void)addSpeakerNames:(id)arg1;
- (void)clearSpeakerNames;
- (id)permanentNamesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long permanentNamesCount;
- (void)addPermanentNames:(id)arg1;
- (void)clearPermanentNames;
@property(nonatomic) _Bool hasNumberOfHomeAutomationWords;
@property(nonatomic) _Bool hasIsWholeHouseAudioCommand;
@property(nonatomic) _Bool hasIsPauseOrStop;
@property(nonatomic) _Bool hasIsParticipatingSpeaker;
@property(nonatomic) _Bool hasIsInHere;
@property(nonatomic) _Bool hasIsAllSpeakers;
- (id)intentSpeakerRoomsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSpeakerRoomsCount;
- (void)addIntentSpeakerRooms:(id)arg1;
- (void)clearIntentSpeakerRooms;
- (id)intentSpeakerNamesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSpeakerNamesCount;
- (void)addIntentSpeakerNames:(id)arg1;
- (void)clearIntentSpeakerNames;
- (id)intentPermanentNamesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentPermanentNamesCount;
- (void)addIntentPermanentNames:(id)arg1;
- (void)clearIntentPermanentNames;
- (id)intentDestinationSpeakersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentDestinationSpeakersCount;
- (void)addIntentDestinationSpeakers:(id)arg1;
- (void)clearIntentDestinationSpeakers;
@property(nonatomic) _Bool hasHasExcept;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

