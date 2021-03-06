//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufShareableCredential : PBCodable <NSCopying>
{
    NSString *_cardConfigurationIdentifier;
    NSString *_credentialIdentifier;
    NSString *_credentialIdentifierHash;
    NSString *_encryptedPushProvisioningTarget;
    NSString *_nonce;
    NSString *_ownerDisplayName;
    NSString *_sharingInstanceIdentifier;
    int _status;
    CDStruct_47fe53f2 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *sharingInstanceIdentifier; // @synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier;
@property(retain, nonatomic) NSString *cardConfigurationIdentifier; // @synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier;
@property(retain, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property(retain, nonatomic) NSString *ownerDisplayName; // @synthesize ownerDisplayName=_ownerDisplayName;
@property(retain, nonatomic) NSString *credentialIdentifierHash; // @synthesize credentialIdentifierHash=_credentialIdentifierHash;
@property(retain, nonatomic) NSString *encryptedPushProvisioningTarget; // @synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasSharingInstanceIdentifier;
@property(readonly, nonatomic) _Bool hasCardConfigurationIdentifier;
@property(readonly, nonatomic) _Bool hasCredentialIdentifier;
@property(readonly, nonatomic) _Bool hasOwnerDisplayName;
@property(readonly, nonatomic) _Bool hasCredentialIdentifierHash;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasEncryptedPushProvisioningTarget;

@end

