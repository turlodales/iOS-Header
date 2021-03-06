//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSData, NSMutableArray;

@interface CLPAppCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_appLocations;
    CLPMeta *_meta;
    NSData *_signature;
}

+ (Class)appLocationType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSMutableArray *appLocations; // @synthesize appLocations=_appLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSignature;
- (id)appLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)appLocationsCount;
- (void)addAppLocation:(id)arg1;
- (void)clearAppLocations;

@end

