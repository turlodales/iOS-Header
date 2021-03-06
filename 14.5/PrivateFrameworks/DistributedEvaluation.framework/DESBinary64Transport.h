//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@interface DESBinary64Transport : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _datas;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setDatas:(double *)arg1 count:(unsigned long long)arg2;
- (double)dataAtIndex:(unsigned long long)arg1;
- (void)addData:(double)arg1;
- (void)clearDatas;
@property(readonly, nonatomic) double *datas;
@property(readonly, nonatomic) unsigned long long datasCount;
- (void)dealloc;

@end

