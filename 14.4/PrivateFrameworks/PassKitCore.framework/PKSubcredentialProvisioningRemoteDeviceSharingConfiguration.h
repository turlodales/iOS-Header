//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration.h>

@class PKAppletSubcredentialSharingRequest, PKAppletSubcredentialSharingSession;
@protocol PKSubcredentialProvisioningUserAuthDelegate;

@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration : PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration
{
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKAppletSubcredentialSharingSession *_sharingSession;
    id <PKSubcredentialProvisioningUserAuthDelegate> _userAuthDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PKSubcredentialProvisioningUserAuthDelegate> userAuthDelegate; // @synthesize userAuthDelegate=_userAuthDelegate;
@property(readonly, nonatomic) PKAppletSubcredentialSharingSession *sharingSession; // @synthesize sharingSession=_sharingSession;
@property(readonly, nonatomic) PKAppletSubcredentialSharingRequest *sharingRequest; // @synthesize sharingRequest=_sharingRequest;
- (id)description;
- (long long)startingState;
- (id)transitionTable;
- (id)initWithSharingRequest:(id)arg1 sharingSession:(id)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 userAuthDelegate:(id)arg5;

@end

