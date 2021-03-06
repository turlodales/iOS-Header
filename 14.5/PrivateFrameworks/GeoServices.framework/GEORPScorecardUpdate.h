//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPScorecard;

@interface GEORPScorecardUpdate : PBCodable <NSCopying>
{
    GEORPScorecard *_scorecard;
    int _action;
    struct {
        unsigned int has_action:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action;
@property(retain, nonatomic) GEORPScorecard *scorecard;
@property(readonly, nonatomic) _Bool hasScorecard;

@end

