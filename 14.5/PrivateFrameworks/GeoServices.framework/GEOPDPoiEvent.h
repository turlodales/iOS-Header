//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _expectedAttendance;
    struct {
        unsigned int has_expectedAttendance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventCategorys:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_name:1;
        unsigned int read_performers:1;
        unsigned int read_poiIds:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)performerType;
+ (Class)eventDateTimeType;
+ (Class)poiIdType;
+ (Class)eventCategoryType;
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
@property(nonatomic) _Bool hasExpectedAttendance;
@property(nonatomic) int expectedAttendance;
- (id)performerAtIndex:(unsigned long long)arg1;
- (unsigned long long)performersCount;
- (void)addPerformer:(id)arg1;
- (void)clearPerformers;
@property(retain, nonatomic) NSMutableArray *performers;
@property(retain, nonatomic) GEOTimezone *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDateTimesCount;
- (void)addEventDateTime:(id)arg1;
- (void)clearEventDateTimes;
@property(retain, nonatomic) NSMutableArray *eventDateTimes;
- (id)poiIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)poiIdsCount;
- (void)addPoiId:(id)arg1;
- (void)clearPoiIds;
@property(retain, nonatomic) NSMutableArray *poiIds;
- (id)eventCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventCategorysCount;
- (void)addEventCategory:(id)arg1;
- (void)clearEventCategorys;
@property(retain, nonatomic) NSMutableArray *eventCategorys;
@property(retain, nonatomic) GEOLocalizedString *name;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property(readonly, nonatomic) _Bool hasEventId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

