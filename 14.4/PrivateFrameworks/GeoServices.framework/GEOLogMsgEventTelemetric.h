//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying>
{
    NSMutableArray *_telemetricEntitys;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)telemetricEntityType;
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
- (id)telemetricEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)telemetricEntitysCount;
- (void)addTelemetricEntity:(id)arg1;
- (void)clearTelemetricEntitys;
@property(retain, nonatomic) NSMutableArray *telemetricEntitys;

@end

