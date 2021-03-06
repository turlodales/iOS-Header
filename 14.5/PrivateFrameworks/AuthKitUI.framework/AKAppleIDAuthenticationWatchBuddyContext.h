//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

#import <AuthKitUI/RemoteUIControllerDelegate-Protocol.h>

@class NSString, RUIStyle;

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate>
{
    NSString *_password;
    RUIStyle *_remoteUIStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RUIStyle *remoteUIStyle; // @synthesize remoteUIStyle=_remoteUIStyle;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void)willPresentModalNavigationController:(id)arg1;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

