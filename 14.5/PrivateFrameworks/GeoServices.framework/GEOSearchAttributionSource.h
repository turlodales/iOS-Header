//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _attributionRequirements;
    CDStruct_95bda58d _suppressAttributionLogos;
    NSString *_appAdamID;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _sourceVersion;
    _Bool _enforceAppStore;
    struct {
        unsigned int has_enforceAppStore:1;
        unsigned int read_attributionRequirements:1;
        unsigned int read_suppressAttributionLogos:1;
        unsigned int read_appAdamID:1;
        unsigned int read_attributionApps:1;
        unsigned int read_localizedAttributions:1;
        unsigned int read_sourceIdentifier:1;
        unsigned int read_supportedComponentActions:1;
        unsigned int read_webBaseActionURL:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)supportedComponentActionsType;
+ (Class)attributionAppsType;
+ (Class)localizedAttributionType;
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
- (int)StringAsSuppressAttributionLogos:(id)arg1;
- (id)suppressAttributionLogosAsString:(int)arg1;
- (void)setSuppressAttributionLogos:(int *)arg1 count:(unsigned long long)arg2;
- (int)suppressAttributionLogosAtIndex:(unsigned long long)arg1;
- (void)addSuppressAttributionLogos:(int)arg1;
- (void)clearSuppressAttributionLogos;
@property(readonly, nonatomic) int *suppressAttributionLogos;
@property(readonly, nonatomic) unsigned long long suppressAttributionLogosCount;
@property(retain, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) _Bool hasAppAdamID;
@property(nonatomic) _Bool hasEnforceAppStore;
@property(nonatomic) _Bool enforceAppStore;
- (id)supportedComponentActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedComponentActionsCount;
- (void)addSupportedComponentActions:(id)arg1;
- (void)clearSupportedComponentActions;
@property(retain, nonatomic) NSMutableArray *supportedComponentActions;
@property(retain, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) _Bool hasWebBaseActionURL;
- (id)attributionAppsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionAppsCount;
- (void)addAttributionApps:(id)arg1;
- (void)clearAttributionApps;
@property(retain, nonatomic) NSMutableArray *attributionApps;
- (int)StringAsAttributionRequirements:(id)arg1;
- (id)attributionRequirementsAsString:(int)arg1;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributionRequirementsAtIndex:(unsigned long long)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (void)clearAttributionRequirements;
@property(readonly, nonatomic) int *attributionRequirements;
@property(readonly, nonatomic) unsigned long long attributionRequirementsCount;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAttributionsCount;
- (void)addLocalizedAttribution:(id)arg1;
- (void)clearLocalizedAttributions;
@property(retain, nonatomic) NSMutableArray *localizedAttributions;
@property(nonatomic) unsigned int sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)bestLocalizedAttribution;
- (_Bool)canSuppressActionForComponent:(int)arg1;
- (_Bool)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2;
- (_Bool)supportsAction:(int)arg1 forComponent:(int)arg2;

@end

