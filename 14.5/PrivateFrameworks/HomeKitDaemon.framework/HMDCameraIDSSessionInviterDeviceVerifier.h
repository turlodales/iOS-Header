//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSString;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject
{
    NSString *_sessionID;
    HMDDevice *_expectedInviter;
}

- (void).cxx_destruct;
@property(readonly) HMDDevice *expectedInviter; // @synthesize expectedInviter=_expectedInviter;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (_Bool)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2;
- (id)initWithSessionID:(id)arg1 expectedInviter:(id)arg2;

@end

