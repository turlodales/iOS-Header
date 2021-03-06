//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneCreditAccountCredential, NPKProtoStandalonePaymentRemoteCredential, NSString;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable <NSCopying>
{
    NPKProtoStandaloneCreditAccountCredential *_creditAccountCredential;
    NSString *_flowIdentifier;
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential; // @synthesize creditAccountCredential=_creditAccountCredential;
@property(retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(retain, nonatomic) NSString *flowIdentifier; // @synthesize flowIdentifier=_flowIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasCreditAccountCredential;
@property(readonly, nonatomic) _Bool hasRemoteCredential;
@property(readonly, nonatomic) _Bool hasFlowIdentifier;

@end

