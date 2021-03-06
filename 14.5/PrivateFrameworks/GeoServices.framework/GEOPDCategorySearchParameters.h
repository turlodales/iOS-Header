//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDETAFilter, GEOPDRecentRouteInfo, GEOPDSSearchEvChargingParameters, GEOPDViewportInfo, NSData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedRelatedEntitySectionTypes;
    CDStruct_95bda58d _supportedSearchTierTypes;
    GEOPDETAFilter *_etaFilter;
    GEOPDSSearchEvChargingParameters *_evChargingParameters;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSData *_suggestionEntryMetadata;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _auxiliaryTierNumResults;
    unsigned int _blurredHourOfDay;
    unsigned int _dayOfWeek;
    unsigned int _maxResults;
    int _searchType;
    _Bool _supportCategorySearchResultSection;
    struct {
        unsigned int has_auxiliaryTierNumResults:1;
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxResults:1;
        unsigned int has_searchType:1;
        unsigned int has_supportCategorySearchResultSection:1;
        unsigned int read_unknownFields:1;
        unsigned int read_supportedRelatedEntitySectionTypes:1;
        unsigned int read_supportedSearchTierTypes:1;
        unsigned int read_etaFilter:1;
        unsigned int read_evChargingParameters:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(nonatomic) _Bool hasAuxiliaryTierNumResults;
@property(nonatomic) unsigned int auxiliaryTierNumResults;
- (int)StringAsSupportedSearchTierTypes:(id)arg1;
- (id)supportedSearchTierTypesAsString:(int)arg1;
- (void)setSupportedSearchTierTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedSearchTierTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedSearchTierType:(int)arg1;
- (void)clearSupportedSearchTierTypes;
@property(readonly, nonatomic) int *supportedSearchTierTypes;
@property(readonly, nonatomic) unsigned long long supportedSearchTierTypesCount;
@property(retain, nonatomic) GEOPDETAFilter *etaFilter;
@property(readonly, nonatomic) _Bool hasEtaFilter;
- (int)StringAsSupportedRelatedEntitySectionTypes:(id)arg1;
- (id)supportedRelatedEntitySectionTypesAsString:(int)arg1;
- (void)setSupportedRelatedEntitySectionTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedRelatedEntitySectionTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedRelatedEntitySectionType:(int)arg1;
- (void)clearSupportedRelatedEntitySectionTypes;
@property(readonly, nonatomic) int *supportedRelatedEntitySectionTypes;
@property(readonly, nonatomic) unsigned long long supportedRelatedEntitySectionTypesCount;
@property(retain, nonatomic) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property(readonly, nonatomic) _Bool hasEvChargingParameters;
@property(nonatomic) _Bool hasSupportCategorySearchResultSection;
@property(nonatomic) _Bool supportCategorySearchResultSection;
@property(retain, nonatomic) GEOPDRecentRouteInfo *recentRouteInfo;
@property(readonly, nonatomic) _Bool hasRecentRouteInfo;
- (int)StringAsSearchType:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType;
@property(nonatomic) _Bool hasDayOfWeek;
@property(nonatomic) unsigned int dayOfWeek;
@property(nonatomic) _Bool hasBlurredHourOfDay;
@property(nonatomic) unsigned int blurredHourOfDay;
@property(retain, nonatomic) NSData *suggestionEntryMetadata;
@property(readonly, nonatomic) _Bool hasSuggestionEntryMetadata;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) unsigned int maxResults;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

