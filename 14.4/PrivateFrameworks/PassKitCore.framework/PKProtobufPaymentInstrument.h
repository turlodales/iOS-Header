//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying>
{
    double _ingestedDate;
    long long _peerPaymentAccountBalance;
    NSMutableArray *_associatedWebDomains;
    NSString *_displayName;
    NSString *_issuerCountryCode;
    NSData *_manifestHash;
    NSString *_organizationName;
    NSString *_passID;
    NSMutableArray *_paymentApplications;
    NSString *_peerPaymentAccountCurrency;
    unsigned int _peerPaymentAccountState;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    _Bool _hasAssociatedPeerPaymentAccount;
    _Bool _supportsAutomaticSelection;
    struct {
        unsigned int ingestedDate:1;
        unsigned int peerPaymentAccountBalance:1;
        unsigned int peerPaymentAccountState:1;
        unsigned int hasAssociatedPeerPaymentAccount:1;
        unsigned int supportsAutomaticSelection:1;
    } _has;
}

+ (Class)associatedWebDomainsType;
+ (Class)paymentApplicationsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) unsigned int peerPaymentAccountState; // @synthesize peerPaymentAccountState=_peerPaymentAccountState;
@property(nonatomic) long long peerPaymentAccountBalance; // @synthesize peerPaymentAccountBalance=_peerPaymentAccountBalance;
@property(retain, nonatomic) NSString *peerPaymentAccountCurrency; // @synthesize peerPaymentAccountCurrency=_peerPaymentAccountCurrency;
@property(nonatomic) _Bool hasAssociatedPeerPaymentAccount; // @synthesize hasAssociatedPeerPaymentAccount=_hasAssociatedPeerPaymentAccount;
@property(retain, nonatomic) NSString *issuerCountryCode; // @synthesize issuerCountryCode=_issuerCountryCode;
@property(nonatomic) _Bool supportsAutomaticSelection; // @synthesize supportsAutomaticSelection=_supportsAutomaticSelection;
@property(retain, nonatomic) NSMutableArray *associatedWebDomains; // @synthesize associatedWebDomains=_associatedWebDomains;
@property(retain, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSString *primaryAccountNumberSuffix; // @synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix;
@property(nonatomic) double ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(retain, nonatomic) NSMutableArray *paymentApplications; // @synthesize paymentApplications=_paymentApplications;
@property(retain, nonatomic) NSString *passID; // @synthesize passID=_passID;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(nonatomic) _Bool hasPeerPaymentAccountState;
@property(nonatomic) _Bool hasPeerPaymentAccountBalance;
@property(readonly, nonatomic) _Bool hasPeerPaymentAccountCurrency;
@property(nonatomic) _Bool hasHasAssociatedPeerPaymentAccount;
@property(readonly, nonatomic) _Bool hasIssuerCountryCode;
@property(nonatomic) _Bool hasSupportsAutomaticSelection;
- (id)associatedWebDomainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedWebDomainsCount;
- (void)addAssociatedWebDomains:(id)arg1;
- (void)clearAssociatedWebDomains;
@property(readonly, nonatomic) _Bool hasPrimaryAccountIdentifier;
@property(readonly, nonatomic) _Bool hasManifestHash;
@property(readonly, nonatomic) _Bool hasPrimaryAccountNumberSuffix;
@property(nonatomic) _Bool hasIngestedDate;
- (id)paymentApplicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentApplicationsCount;
- (void)addPaymentApplications:(id)arg1;
- (void)clearPaymentApplications;
@property(readonly, nonatomic) _Bool hasPassID;
@property(readonly, nonatomic) _Bool hasDisplayName;

@end

