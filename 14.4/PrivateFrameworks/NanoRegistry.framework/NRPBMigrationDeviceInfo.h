//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NRPBMigrationDeviceInfo : PBCodable <NSCopying>
{
    NSString *_advertisedName;
    NSData *_iD;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *advertisedName; // @synthesize advertisedName=_advertisedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *iD; // @synthesize iD=_iD;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAdvertisedName;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasID;

@end

