//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSpokenGuidance : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_announcements;
    NSMutableArray *_timeGaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _alignment;
    unsigned int _endDesiredTime;
    unsigned int _exclusiveSetIdentifier;
    unsigned int _numChainedVariants;
    unsigned int _priority;
    unsigned int _repetitionInterval;
    unsigned int _startDesiredTime;
    _Bool _tapBeforeAnnouncement;
    struct {
        unsigned int has_alignment:1;
        unsigned int has_endDesiredTime:1;
        unsigned int has_exclusiveSetIdentifier:1;
        unsigned int has_numChainedVariants:1;
        unsigned int has_priority:1;
        unsigned int has_repetitionInterval:1;
        unsigned int has_startDesiredTime:1;
        unsigned int has_tapBeforeAnnouncement:1;
        unsigned int read_unknownFields:1;
        unsigned int read_announcements:1;
        unsigned int read_timeGaps:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)timeGapType;
+ (Class)announcementType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExclusiveSetIdentifier;
@property(nonatomic) unsigned int exclusiveSetIdentifier;
- (id)timeGapAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeGapsCount;
- (void)addTimeGap:(id)arg1;
- (void)clearTimeGaps;
@property(retain, nonatomic) NSMutableArray *timeGaps;
@property(nonatomic) _Bool hasTapBeforeAnnouncement;
@property(nonatomic) _Bool tapBeforeAnnouncement;
@property(nonatomic) _Bool hasNumChainedVariants;
@property(nonatomic) unsigned int numChainedVariants;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) unsigned int priority;
@property(nonatomic) _Bool hasRepetitionInterval;
@property(nonatomic) unsigned int repetitionInterval;
- (int)StringAsAlignment:(id)arg1;
- (id)alignmentAsString:(int)arg1;
@property(nonatomic) _Bool hasAlignment;
@property(nonatomic) int alignment;
@property(nonatomic) _Bool hasEndDesiredTime;
@property(nonatomic) unsigned int endDesiredTime;
@property(nonatomic) _Bool hasStartDesiredTime;
@property(nonatomic) unsigned int startDesiredTime;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsCount;
- (void)addAnnouncement:(id)arg1;
- (void)clearAnnouncements;
@property(retain, nonatomic) NSMutableArray *announcements;
- (id)initWithData:(id)arg1;
- (id)init;

@end

