//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _containerType;
    int _rebuildStatus;
    int _zoneType;
    struct {
        unsigned int timestamp:1;
        unsigned int containerType:1;
        unsigned int rebuildStatus:1;
        unsigned int zoneType:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsZoneType:(id)arg1;
- (id)zoneTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasZoneType;
@property(nonatomic) int zoneType; // @synthesize zoneType=_zoneType;
- (int)StringAsContainerType:(id)arg1;
- (id)containerTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasContainerType;
@property(nonatomic) int containerType; // @synthesize containerType=_containerType;
- (int)StringAsRebuildStatus:(id)arg1;
- (id)rebuildStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasRebuildStatus;
@property(nonatomic) int rebuildStatus; // @synthesize rebuildStatus=_rebuildStatus;
@property(nonatomic) _Bool hasTimestamp;

@end

