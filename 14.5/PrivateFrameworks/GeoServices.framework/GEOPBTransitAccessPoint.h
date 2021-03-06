//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_entranceNameDisplayString;
    NSMutableArray *_entranceZoomNames;
    NSString *_exitNameDisplayString;
    NSMutableArray *_exitZoomNames;
    GEOLatLng *_location;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _accessPointIndex;
    unsigned int _stationIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_accessPointIndex:1;
        unsigned int has_stationIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entranceNameDisplayString:1;
        unsigned int read_entranceZoomNames:1;
        unsigned int read_exitNameDisplayString:1;
        unsigned int read_exitZoomNames:1;
        unsigned int read_location:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)exitZoomNameType;
+ (Class)entranceZoomNameType;
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
@property(retain, nonatomic) NSString *exitNameDisplayString;
@property(readonly, nonatomic) _Bool hasExitNameDisplayString;
@property(retain, nonatomic) NSString *entranceNameDisplayString;
@property(readonly, nonatomic) _Bool hasEntranceNameDisplayString;
- (id)exitZoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)exitZoomNamesCount;
- (void)addExitZoomName:(id)arg1;
- (void)clearExitZoomNames;
@property(retain, nonatomic) NSMutableArray *exitZoomNames;
- (id)entranceZoomNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)entranceZoomNamesCount;
- (void)addEntranceZoomName:(id)arg1;
- (void)clearEntranceZoomNames;
@property(retain, nonatomic) NSMutableArray *entranceZoomNames;
@property(nonatomic) _Bool hasStationIndex;
@property(nonatomic) unsigned int stationIndex;
@property(retain, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasMuid;
@property(nonatomic) unsigned long long muid;
@property(nonatomic) _Bool hasAccessPointIndex;
@property(nonatomic) unsigned int accessPointIndex;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)identifier;
- (id)bestExitNameWithLocale:(out id *)arg1;
- (id)bestExitName;
- (id)bestEntranceNameWithLocale:(out id *)arg1;
- (id)bestEntranceName;

@end

