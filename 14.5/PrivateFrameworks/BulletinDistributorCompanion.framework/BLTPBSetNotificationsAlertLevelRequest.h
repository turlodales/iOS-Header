//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSString;

@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying>
{
    int _level;
    NSString *_sectionID;
    _Bool _mirror;
    struct {
        unsigned int level:1;
        unsigned int mirror:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMirror;
@property(readonly, nonatomic) _Bool hasSectionID;
- (int)StringAsLevel:(id)arg1;
- (id)levelAsString:(int)arg1;
@property(nonatomic) _Bool hasLevel;
@property(nonatomic) int level; // @synthesize level=_level;

@end

