//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSString;

@interface RMRemoteManagementScreenTimeViewUsage : PBCodable <NSCopying>
{
    unsigned long long _daysSinceLastView;
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    _Bool _hasPasscode;
    _Bool _isManaged;
    _Bool _remoteUser;
    struct {
        unsigned int daysSinceLastView:1;
        unsigned int timestamp:1;
        unsigned int hasPasscode:1;
        unsigned int isManaged:1;
        unsigned int remoteUser:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long daysSinceLastView; // @synthesize daysSinceLastView=_daysSinceLastView;
@property(nonatomic) _Bool remoteUser; // @synthesize remoteUser=_remoteUser;
@property(nonatomic) _Bool hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property(nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(retain, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDaysSinceLastView;
@property(nonatomic) _Bool hasRemoteUser;
@property(nonatomic) _Bool hasHasPasscode;
@property(nonatomic) _Bool hasIsManaged;
@property(readonly, nonatomic) _Bool hasFamilyMemberType;
@property(nonatomic) _Bool hasTimestamp;

@end

