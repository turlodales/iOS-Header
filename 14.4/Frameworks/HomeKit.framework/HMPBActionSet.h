//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMPBActionSet : PBCodable <NSCopying>
{
    NSString *_actionSetType;
    NSMutableArray *_actions;
    NSData *_homeUUID;
    NSString *_name;
    NSData *_uuid;
}

+ (Class)actionsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHomeUUID;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasActionSetType;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;
@property(readonly, nonatomic) _Bool hasName;

@end

