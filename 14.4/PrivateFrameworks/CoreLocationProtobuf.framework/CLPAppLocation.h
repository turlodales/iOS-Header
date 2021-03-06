//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPLocation, NSString;

@interface CLPAppLocation : PBCodable <NSCopying>
{
    double _age;
    NSString *_appBundleId;
    int _appState;
    CLPLocation *_location;
    int _loiType;
    int _routineMode;
    int _serverHash;
    struct {
        unsigned int age:1;
        unsigned int loiType:1;
        unsigned int routineMode:1;
        unsigned int serverHash:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int appState; // @synthesize appState=_appState;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLoiType;
@property(nonatomic) int loiType; // @synthesize loiType=_loiType;
@property(nonatomic) _Bool hasRoutineMode;
@property(nonatomic) int routineMode; // @synthesize routineMode=_routineMode;
@property(nonatomic) _Bool hasServerHash;
@property(nonatomic) _Bool hasAge;

@end

