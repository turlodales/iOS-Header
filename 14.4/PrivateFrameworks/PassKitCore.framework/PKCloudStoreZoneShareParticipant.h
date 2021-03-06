//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CKDeviceToDeviceShareInvitationToken, CKUserIdentityLookupInfo, NSString;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_participantHandle;
    CKUserIdentityLookupInfo *_lookupInfo;
    CKDeviceToDeviceShareInvitationToken *_invitationToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // @synthesize lookupInfo=_lookupInfo;
@property(copy, nonatomic) NSString *participantHandle; // @synthesize participantHandle=_participantHandle;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)lookupInfoData;
- (id)invitationTokenData;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipant:(id)arg1;

@end

