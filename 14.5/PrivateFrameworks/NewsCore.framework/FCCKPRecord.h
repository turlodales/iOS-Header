//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPDateStatistics, FCCKPIdentifier, FCCKPRecordIdentifier, FCCKPRecordType, NSMutableArray, NSString;

@interface FCCKPRecord : PBCodable <NSCopying>
{
    NSMutableArray *_conflictLoserEtags;
    FCCKPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    FCCKPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPDateStatistics *_timeStatistics;
    FCCKPRecordType *_type;
}

+ (Class)conflictLoserEtagsType;
+ (Class)fieldsType;
@property(retain, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) FCCKPIdentifier *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) FCCKPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) FCCKPIdentifier *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) FCCKPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasModifiedByDevice;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)addConflictLoserEtags:(id)arg1;
- (void)clearConflictLoserEtags;
@property(readonly, nonatomic) _Bool hasModifiedBy;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (void)addFields:(id)arg1;
- (void)clearFields;
@property(readonly, nonatomic) _Bool hasTimeStatistics;
@property(readonly, nonatomic) _Bool hasCreatedBy;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
@property(readonly, nonatomic) _Bool hasEtag;
- (void)dealloc;

@end

