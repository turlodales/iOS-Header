//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORoutingSettingsCyclingPrefs, GEORoutingSettingsDrivingPrefs, GEORoutingSettingsVirtualGarageSetttings, PBDataReader;

@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEORoutingSettingsCyclingPrefs *_cyclingPrefs;
    GEORoutingSettingsDrivingPrefs *_drivingPrefs;
    GEORoutingSettingsVirtualGarageSetttings *_virtualGarageSettings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_cyclingPrefs:1;
        unsigned int read_drivingPrefs:1;
        unsigned int read_virtualGarageSettings:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) GEORoutingSettingsDrivingPrefs *drivingPrefs;
@property(readonly, nonatomic) _Bool hasDrivingPrefs;
@property(retain, nonatomic) GEORoutingSettingsCyclingPrefs *cyclingPrefs;
@property(readonly, nonatomic) _Bool hasCyclingPrefs;
@property(retain, nonatomic) GEORoutingSettingsVirtualGarageSetttings *virtualGarageSettings;
@property(readonly, nonatomic) _Bool hasVirtualGarageSettings;
- (id)initWithData:(id)arg1;
- (id)init;

@end

