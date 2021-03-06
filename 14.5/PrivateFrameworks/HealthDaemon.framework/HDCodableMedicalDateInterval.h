//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMedicalDate;

@interface HDCodableMedicalDateInterval : PBCodable <NSCopying>
{
    HDCodableMedicalDate *_endDate;
    HDCodableMedicalDate *_startDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableMedicalDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) HDCodableMedicalDate *startDate; // @synthesize startDate=_startDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEndDate;
@property(readonly, nonatomic) _Bool hasStartDate;

@end

