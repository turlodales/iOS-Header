//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class GEOStorageRouteRequestStorage, PBUnknownFields;

@interface MSPDirectionsSearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    _Bool _navigationInterrupted;
    struct {
        unsigned int navigationInterrupted:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool navigationInterrupted; // @synthesize navigationInterrupted=_navigationInterrupted;
@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNavigationInterrupted;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end

