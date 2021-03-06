//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@interface ICIAMSerialCheckResponse : PBCodable <NSCopying>
{
    long long _commandSerialNumber;
    struct {
        unsigned int commandSerialNumber:1;
    } _has;
}

@property(nonatomic) long long commandSerialNumber; // @synthesize commandSerialNumber=_commandSerialNumber;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCommandSerialNumber;

@end

