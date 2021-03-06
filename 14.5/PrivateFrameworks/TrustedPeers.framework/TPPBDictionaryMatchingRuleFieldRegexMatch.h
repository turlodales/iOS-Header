//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying>
{
    NSString *_fieldName;
    NSString *_regex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *regex; // @synthesize regex=_regex;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRegex;
@property(readonly, nonatomic) _Bool hasFieldName;
- (_Bool)matches:(id)arg1 error:(id *)arg2;

@end

