//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2ContactDetailRejected : PBCodable <NSCopying>
{
    int _extracted;
    unsigned int _extractionModelVersion;
    NSString *_key;
    int _type;
    int _uiType;
    CDStruct_698c174b _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int extractionModelVersion; // @synthesize extractionModelVersion=_extractionModelVersion;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsUiType:(id)arg1;
- (id)uiTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasUiType;
@property(nonatomic) int uiType; // @synthesize uiType=_uiType;
@property(nonatomic) _Bool hasExtractionModelVersion;
- (int)StringAsExtracted:(id)arg1;
- (id)extractedAsString:(int)arg1;
@property(nonatomic) _Bool hasExtracted;
@property(nonatomic) int extracted; // @synthesize extracted=_extracted;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasKey;

@end

