//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedNames;
    int _level;
    struct {
        unsigned int has_level:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)localizedNameType;
+ (_Bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
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
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)addLocalizedName:(id)arg1;
- (void)clearLocalizedNames;
@property(retain, nonatomic) NSMutableArray *localizedNames;
@property(nonatomic) _Bool hasLevel;
@property(nonatomic) int level;

@end

