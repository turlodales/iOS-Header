//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying>
{
    unsigned long long _epochTimestamp;
    unsigned long long _expiresAt;
    NSData *_ampEnrollmentPinning;
    NSString *_displayName;
    NSString *_domain;
    NSString *_initiative;
    NSString *_initiativeContext;
    NSString *_merchantIdentifier;
    NSString *_nonce;
    NSString *_operationalAnalyticsIdentifier;
    NSString *_retryNonce;
    NSString *_sessionIdentifier;
    NSData *_signature;
    NSMutableArray *_signedFields;
    struct {
        unsigned int epochTimestamp:1;
        unsigned int expiresAt:1;
    } _has;
}

+ (Class)signedFieldsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *operationalAnalyticsIdentifier; // @synthesize operationalAnalyticsIdentifier=_operationalAnalyticsIdentifier;
@property(retain, nonatomic) NSData *ampEnrollmentPinning; // @synthesize ampEnrollmentPinning=_ampEnrollmentPinning;
@property(retain, nonatomic) NSMutableArray *signedFields; // @synthesize signedFields=_signedFields;
@property(retain, nonatomic) NSString *initiative; // @synthesize initiative=_initiative;
@property(retain, nonatomic) NSString *initiativeContext; // @synthesize initiativeContext=_initiativeContext;
@property(nonatomic) unsigned long long expiresAt; // @synthesize expiresAt=_expiresAt;
@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperationalAnalyticsIdentifier;
@property(readonly, nonatomic) _Bool hasAmpEnrollmentPinning;
- (id)signedFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signedFieldsCount;
- (void)addSignedFields:(id)arg1;
- (void)clearSignedFields;
@property(readonly, nonatomic) _Bool hasInitiative;
@property(readonly, nonatomic) _Bool hasInitiativeContext;
@property(nonatomic) _Bool hasExpiresAt;
@property(readonly, nonatomic) _Bool hasRetryNonce;
@property(readonly, nonatomic) _Bool hasSignature;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasEpochTimestamp;
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasSessionIdentifier;
@property(readonly, nonatomic) _Bool hasMerchantIdentifier;

@end

