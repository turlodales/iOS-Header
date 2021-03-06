//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/WBUFormDataController.h>

#import <SafariServices/_SFAuthenticationContextDelegate-Protocol.h>

@class NSString, SFAppAutoFillOneTimeCodeProvider, _SFAuthenticationContext;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate>
{
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
    _SFAuthenticationContext *_autoFillAuthenticationContext;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext; // @synthesize autoFillAuthenticationContext=_autoFillAuthenticationContext;
- (id)oneTimeCodeProvider;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (id)initWithAggressiveKeychainCaching:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

