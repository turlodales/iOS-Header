//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBApiResults-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding>
{
    int _status;
    int _resultType;
    NSArray *_flights;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *flights; // @synthesize flights=_flights;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)flightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)flightsCount;
- (void)addFlights:(id)arg1;
- (void)clearFlights;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

