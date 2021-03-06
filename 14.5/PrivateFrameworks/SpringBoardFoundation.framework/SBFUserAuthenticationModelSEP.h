//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFUserAuthenticationModel-Protocol.h>

@class MCProfileConnection, NSString, SBFMobileKeyBag, SBSecurityDefaults;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel>
{
    SBFMobileKeyBag *_keybag;
    double _unblockTime;
    _Bool _permanentlyBlocked;
    _Bool _pendingWipe;
    _Bool _userRequestedEraseEnabled;
    SBSecurityDefaults *_securityDefaults;
    MCProfileConnection *_profileConnection;
    id <SBFUserAuthenticationModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <SBFUserAuthenticationModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_refreshStateForMkbState:(id)arg1 notify:(_Bool)arg2;
- (_Bool)_isDeviceWipePreferenceEnabled;
- (void)_refreshStateAndNotify:(_Bool)arg1;
- (id)descriptionBuilder;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property(readonly, nonatomic, getter=isUserRequestedEraseEnabled) _Bool userRequestedEraseEnabled;
@property(readonly, nonatomic, getter=isPermanentlyBlocked) _Bool permanentlyBlocked;
@property(readonly, nonatomic, getter=isTemporarilyBlocked) _Bool temporarilyBlocked;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)refreshBlockedState;
- (void)clearBlockedState;
- (void)performPasswordTest:(CDUnknownBlockType)arg1;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeEntryBegan;
- (void)synchronize;
- (id)initWithKeyBag:(id)arg1;
- (id)_initWithKeyBag:(id)arg1 profileConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

