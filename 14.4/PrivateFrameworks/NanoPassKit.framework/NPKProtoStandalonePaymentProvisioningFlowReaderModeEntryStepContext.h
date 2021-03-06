//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentSetupProduct, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentSetupProduct *_product;
    NSMutableArray *_setupFields;
    NSString *_subtitle;
    NSString *_title;
}

+ (Class)setupFieldsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NPKProtoStandalonePaymentSetupProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSMutableArray *setupFields; // @synthesize setupFields=_setupFields;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProduct;
- (id)setupFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)setupFieldsCount;
- (void)addSetupFields:(id)arg1;
- (void)clearSetupFields;
@property(readonly, nonatomic) _Bool hasSubtitle;
@property(readonly, nonatomic) _Bool hasTitle;

@end

