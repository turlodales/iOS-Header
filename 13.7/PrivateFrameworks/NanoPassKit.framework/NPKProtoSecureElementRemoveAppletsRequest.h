//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_cardAIDs;
}

+ (Class)cardAIDsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cardAIDs; // @synthesize cardAIDs=_cardAIDs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)cardAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardAIDsCount;
- (void)addCardAIDs:(id)arg1;
- (void)clearCardAIDs;

@end

