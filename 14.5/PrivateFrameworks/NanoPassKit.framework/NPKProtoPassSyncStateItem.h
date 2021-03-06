//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface NPKProtoPassSyncStateItem : PBCodable <NSCopying>
{
    NSMutableArray *_manifestEntrys;
    NSData *_manifestHash;
    NSString *_passTypeIdentifier;
    unsigned int _sequenceCounter;
    NSString *_serialNumber;
    struct {
        unsigned int sequenceCounter:1;
    } _has;
}

+ (Class)manifestEntryType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *manifestEntrys; // @synthesize manifestEntrys=_manifestEntrys;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(nonatomic) unsigned int sequenceCounter; // @synthesize sequenceCounter=_sequenceCounter;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)manifestEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestEntrysCount;
- (void)addManifestEntry:(id)arg1;
- (void)clearManifestEntrys;
@property(nonatomic) _Bool hasSequenceCounter;

@end

