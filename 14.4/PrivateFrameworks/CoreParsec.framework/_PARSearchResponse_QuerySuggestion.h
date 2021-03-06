//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARSearchResponse_QuerySuggestion-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_QuerySuggestion : PBCodable <_PARSearchResponse_QuerySuggestion, NSSecureCoding>
{
    _Bool _previouslyEngaged;
    float _score;
    NSString *_suggestion;
    NSString *_query;
    NSData *_feedback;
    NSArray *_entities;
    NSString *_detailText;
    NSDictionary *_serverFeatures;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) _Bool previouslyEngaged; // @synthesize previouslyEngaged=_previouslyEngaged;
@property(copy, nonatomic) NSData *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(id)arg2;
- (_Bool)getServerFeatures:(double *)arg1 forKey:(id)arg2;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

