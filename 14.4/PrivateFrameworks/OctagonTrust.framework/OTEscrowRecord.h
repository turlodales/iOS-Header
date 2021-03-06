//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OctagonTrust/NSCopying-Protocol.h>

@class NSString, OTEscrowRecordMetadata;

@interface OTEscrowRecord : PBCodable <NSCopying>
{
    unsigned long long _coolOffEnd;
    unsigned long long _creationDate;
    unsigned long long _remainingAttempts;
    unsigned long long _silentAttemptAllowed;
    OTEscrowRecordMetadata *_escrowInformationMetadata;
    NSString *_label;
    NSString *_recordId;
    int _recordStatus;
    int _recordViability;
    int _recoveryStatus;
    NSString *_serialNumber;
    int _viabilityStatus;
    struct {
        unsigned int coolOffEnd:1;
        unsigned int creationDate:1;
        unsigned int remainingAttempts:1;
        unsigned int silentAttemptAllowed:1;
        unsigned int recordStatus:1;
        unsigned int recordViability:1;
        unsigned int recoveryStatus:1;
        unsigned int viabilityStatus:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(nonatomic) unsigned long long coolOffEnd; // @synthesize coolOffEnd=_coolOffEnd;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(nonatomic) unsigned long long silentAttemptAllowed; // @synthesize silentAttemptAllowed=_silentAttemptAllowed;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) OTEscrowRecordMetadata *escrowInformationMetadata; // @synthesize escrowInformationMetadata=_escrowInformationMetadata;
@property(nonatomic) unsigned long long remainingAttempts; // @synthesize remainingAttempts=_remainingAttempts;
@property(nonatomic) unsigned long long creationDate; // @synthesize creationDate=_creationDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsViabilityStatus:(id)arg1;
- (id)viabilityStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasViabilityStatus;
@property(nonatomic) int viabilityStatus; // @synthesize viabilityStatus=_viabilityStatus;
- (int)StringAsRecordViability:(id)arg1;
- (id)recordViabilityAsString:(int)arg1;
@property(nonatomic) _Bool hasRecordViability;
@property(nonatomic) int recordViability; // @synthesize recordViability=_recordViability;
@property(readonly, nonatomic) _Bool hasSerialNumber;
@property(nonatomic) _Bool hasCoolOffEnd;
- (int)StringAsRecoveryStatus:(id)arg1;
- (id)recoveryStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasRecoveryStatus;
@property(nonatomic) int recoveryStatus; // @synthesize recoveryStatus=_recoveryStatus;
@property(readonly, nonatomic) _Bool hasRecordId;
- (int)StringAsRecordStatus:(id)arg1;
- (id)recordStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasRecordStatus;
@property(nonatomic) int recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) _Bool hasSilentAttemptAllowed;
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasEscrowInformationMetadata;
@property(nonatomic) _Bool hasRemainingAttempts;
@property(nonatomic) _Bool hasCreationDate;

@end

