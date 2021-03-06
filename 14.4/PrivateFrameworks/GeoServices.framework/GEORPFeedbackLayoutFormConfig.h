//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying>
{
    NSMutableArray *_layoutFields;
    int _formType;
    unsigned int _ttl;
    _Bool _enabled;
    struct {
        unsigned int has_formType:1;
        unsigned int has_ttl:1;
        unsigned int has_enabled:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)layoutFieldType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEnabled;
@property(nonatomic) _Bool enabled;
- (id)layoutFieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)layoutFieldsCount;
- (void)addLayoutField:(id)arg1;
- (void)clearLayoutFields;
@property(retain, nonatomic) NSMutableArray *layoutFields;
- (int)StringAsFormType:(id)arg1;
- (id)formTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFormType;
@property(nonatomic) int formType;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) unsigned int ttl;

@end

