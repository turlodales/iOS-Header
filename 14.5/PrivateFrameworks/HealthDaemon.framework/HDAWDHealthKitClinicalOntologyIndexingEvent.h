//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDAWDHealthKitClinicalOntologyIndexingEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_failingAction;
    NSString *_failingKeyPath;
    CDStruct_b5306035 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *failingAction; // @synthesize failingAction=_failingAction;
@property(retain, nonatomic) NSString *failingKeyPath; // @synthesize failingKeyPath=_failingKeyPath;
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
@property(readonly, nonatomic) _Bool hasFailingAction;
@property(readonly, nonatomic) _Bool hasFailingKeyPath;
@property(nonatomic) _Bool hasTimestamp;

@end

