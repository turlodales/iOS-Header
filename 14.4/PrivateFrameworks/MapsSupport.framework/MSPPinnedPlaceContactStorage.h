//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface MSPPinnedPlaceContactStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_contactIdentifier;
    NSString *_handleValue;
    NSString *_labeledValueIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *handleValue; // @synthesize handleValue=_handleValue;
@property(retain, nonatomic) NSString *labeledValueIdentifier; // @synthesize labeledValueIdentifier=_labeledValueIdentifier;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHandleValue;
@property(readonly, nonatomic) _Bool hasLabeledValueIdentifier;
@property(readonly, nonatomic) _Bool hasContactIdentifier;

@end

