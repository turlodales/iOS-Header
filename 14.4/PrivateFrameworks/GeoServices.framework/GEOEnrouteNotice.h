//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteAnnotation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOEnrouteNotice : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guidances;
    NSString *_objectIdentifier;
    GEORouteAnnotation *_routeAnnotation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _groupItemHorizontalDisplayOrder;
    unsigned int _groupItemVerticalDisplayOrder;
    unsigned int _highlightDistance;
    unsigned int _objectGroupId;
    unsigned int _priority;
    int _type;
    unsigned int _zilchPathIndex;
    struct {
        unsigned int has_groupItemHorizontalDisplayOrder:1;
        unsigned int has_groupItemVerticalDisplayOrder:1;
        unsigned int has_highlightDistance:1;
        unsigned int has_objectGroupId:1;
        unsigned int has_priority:1;
        unsigned int has_type:1;
        unsigned int has_zilchPathIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_guidances:1;
        unsigned int read_objectIdentifier:1;
        unsigned int read_routeAnnotation:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)guidanceType;
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
@property(nonatomic) _Bool hasGroupItemVerticalDisplayOrder;
@property(nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property(nonatomic) _Bool hasGroupItemHorizontalDisplayOrder;
@property(nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property(nonatomic) _Bool hasZilchPathIndex;
@property(nonatomic) unsigned int zilchPathIndex;
@property(retain, nonatomic) GEORouteAnnotation *routeAnnotation;
@property(readonly, nonatomic) _Bool hasRouteAnnotation;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) unsigned int priority;
@property(nonatomic) _Bool hasObjectGroupId;
@property(nonatomic) unsigned int objectGroupId;
@property(nonatomic) _Bool hasHighlightDistance;
@property(nonatomic) unsigned int highlightDistance;
- (id)guidanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidancesCount;
- (void)addGuidance:(id)arg1;
- (void)clearGuidances;
@property(retain, nonatomic) NSMutableArray *guidances;
@property(retain, nonatomic) NSString *objectIdentifier;
@property(readonly, nonatomic) _Bool hasObjectIdentifier;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithData:(id)arg1;
- (id)init;

@end

