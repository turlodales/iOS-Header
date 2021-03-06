//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@interface ATXMPBHomeScreenAppPanelLaunchRatioTracker : PBCodable <NSCopying>
{
    int _location;
    int _ratioType;
    struct {
        unsigned int location:1;
        unsigned int ratioType:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsRatioType:(id)arg1;
- (id)ratioTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRatioType;
@property(nonatomic) int ratioType; // @synthesize ratioType=_ratioType;
- (int)StringAsLocation:(id)arg1;
- (id)locationAsString:(int)arg1;
@property(nonatomic) _Bool hasLocation;
@property(nonatomic) int location; // @synthesize location=_location;

@end

