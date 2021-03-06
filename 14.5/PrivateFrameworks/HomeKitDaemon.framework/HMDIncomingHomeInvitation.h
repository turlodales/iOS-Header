//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDAccount, HMFPairingIdentity, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation
{
    HMDAccount *_inviterAccount;
    HMFPairingIdentity *_inviterIdentity;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) HMFPairingIdentity *inviterIdentity; // @synthesize inviterIdentity=_inviterIdentity;
@property(readonly) HMDAccount *inviterAccount; // @synthesize inviterAccount=_inviterAccount;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)refreshDisplayName;
@property(readonly, copy, nonatomic) NSString *inviterUserID;
@property(readonly, copy, nonatomic) NSUUID *homeUUID;
@property(readonly, copy, nonatomic) NSString *homeName;
- (id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 expiryDate:(id)arg7;
@property(readonly, nonatomic) NSDictionary *bulletinContext;

@end

