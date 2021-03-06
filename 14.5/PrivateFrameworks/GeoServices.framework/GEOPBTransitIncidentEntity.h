//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitIncidentEntity-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitIncidentEntityFilter, NSSet, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    struct {
        unsigned int has_affectedMuid:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
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
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOPBTransitIncidentEntityFilter *filter;
@property(readonly, nonatomic) _Bool hasFilter;
@property(nonatomic) _Bool hasAffectedMuid;
@property(nonatomic) unsigned long long affectedMuid;
@property(readonly, nonatomic) NSSet *nextStopIDs;
@property(readonly, nonatomic) _Bool hasNextStopIDs;
@property(readonly, nonatomic) unsigned long long muid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

