//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class PDSProtoGSTokenAuth;

@interface PDSProtoUserAuth : PBCodable <NSCopying>
{
    PDSProtoGSTokenAuth *_gsAuthToken;
    int _userauthOneof;
    struct {
        unsigned int userauthOneof:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDSProtoGSTokenAuth *gsAuthToken; // @synthesize gsAuthToken=_gsAuthToken;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)clearOneofValuesForUserauthOneof;
- (int)StringAsUserauthOneof:(id)arg1;
- (id)userauthOneofAsString:(int)arg1;
@property(nonatomic) _Bool hasUserauthOneof;
@property(nonatomic) int userauthOneof; // @synthesize userauthOneof=_userauthOneof;
@property(readonly, nonatomic) _Bool hasGsAuthToken;

@end

