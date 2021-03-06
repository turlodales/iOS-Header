//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableSyncAnchorRangeMap, NSMutableArray;

@interface HDCloudSyncCodableSequence : PBCodable <NSCopying>
{
    long long _changeIndex;
    long long _childRecordCount;
    long long _epoch;
    long long _protocolVersion;
    HDCodableSyncAnchorRangeMap *_anchorMap;
    HDCodableSyncAnchorRangeMap *_frozenAnchorMap;
    NSMutableArray *_includedStoreIdentifiers;
    int _slot;
    NSMutableArray *_unfrozenChangeRecordNames;
    _Bool _active;
    struct {
        unsigned int changeIndex:1;
        unsigned int childRecordCount:1;
        unsigned int epoch:1;
        unsigned int protocolVersion:1;
        unsigned int slot:1;
        unsigned int active:1;
    } _has;
}

+ (Class)unfrozenChangeRecordNamesType;
+ (Class)includedStoreIdentifiersType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *unfrozenChangeRecordNames; // @synthesize unfrozenChangeRecordNames=_unfrozenChangeRecordNames;
@property(nonatomic) long long childRecordCount; // @synthesize childRecordCount=_childRecordCount;
@property(nonatomic) long long changeIndex; // @synthesize changeIndex=_changeIndex;
@property(retain, nonatomic) HDCodableSyncAnchorRangeMap *frozenAnchorMap; // @synthesize frozenAnchorMap=_frozenAnchorMap;
@property(retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorMap; // @synthesize anchorMap=_anchorMap;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSMutableArray *includedStoreIdentifiers; // @synthesize includedStoreIdentifiers=_includedStoreIdentifiers;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)unfrozenChangeRecordNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)unfrozenChangeRecordNamesCount;
- (void)addUnfrozenChangeRecordNames:(id)arg1;
- (void)clearUnfrozenChangeRecordNames;
@property(nonatomic) _Bool hasChildRecordCount;
@property(nonatomic) _Bool hasChangeIndex;
@property(readonly, nonatomic) _Bool hasFrozenAnchorMap;
@property(readonly, nonatomic) _Bool hasAnchorMap;
@property(nonatomic) _Bool hasProtocolVersion;
- (id)includedStoreIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)includedStoreIdentifiersCount;
- (void)addIncludedStoreIdentifiers:(id)arg1;
- (void)clearIncludedStoreIdentifiers;
@property(nonatomic) _Bool hasEpoch;
@property(nonatomic) _Bool hasActive;
- (int)StringAsSlot:(id)arg1;
- (id)slotAsString:(int)arg1;
@property(nonatomic) _Bool hasSlot;
@property(nonatomic) int slot; // @synthesize slot=_slot;

@end

