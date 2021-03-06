//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARSearchResponse_Correction-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_Correction : PBCodable <_PARSearchResponse_Correction, NSSecureCoding>
{
    float _score;
    NSString *_prefix;
    NSString *_completion;
}

- (void).cxx_destruct;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

