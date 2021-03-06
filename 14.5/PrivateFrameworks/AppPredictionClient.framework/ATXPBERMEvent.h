//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface ATXPBERMEvent : PBCodable <NSCopying>
{
    double _dateEngaged;
    unsigned long long _engagementType;
    double _eventDate;
    NSMutableArray *_clientModelIds;
    int _eventType;
    NSData *_executable;
    int _executableType;
    struct {
        unsigned int dateEngaged:1;
        unsigned int engagementType:1;
        unsigned int eventDate:1;
        unsigned int eventType:1;
        unsigned int executableType:1;
    } _has;
}

+ (Class)clientModelIdType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *clientModelIds; // @synthesize clientModelIds=_clientModelIds;
@property(retain, nonatomic) NSData *executable; // @synthesize executable=_executable;
@property(nonatomic) unsigned long long engagementType; // @synthesize engagementType=_engagementType;
@property(nonatomic) double dateEngaged; // @synthesize dateEngaged=_dateEngaged;
@property(nonatomic) double eventDate; // @synthesize eventDate=_eventDate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)clientModelIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientModelIdsCount;
- (void)addClientModelId:(id)arg1;
- (void)clearClientModelIds;
@property(readonly, nonatomic) _Bool hasExecutable;
- (int)StringAsExecutableType:(id)arg1;
- (id)executableTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasExecutableType;
@property(nonatomic) int executableType; // @synthesize executableType=_executableType;
@property(nonatomic) _Bool hasEngagementType;
@property(nonatomic) _Bool hasDateEngaged;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) _Bool hasEventDate;

@end

