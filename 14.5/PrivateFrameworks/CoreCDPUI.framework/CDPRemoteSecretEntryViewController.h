//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>

#import <CoreCDPUI/DevicePINControllerDelegate-Protocol.h>

@class CDPDevice, CDPRemoteDeviceSecretValidator, CDPRemoteValidationEscapeOffer, NSNumber, NSString;
@protocol CDPRemoteSecretEntryDelegate;

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate>
{
    _Bool _hasNumericSecret;
    NSNumber *_numericSecretLength;
    CDPDevice *_remoteRecoveryDevice;
    long long _remainingAttempts;
    CDPRemoteDeviceSecretValidator *_validator;
    id <CDPRemoteSecretEntryDelegate> _delegate;
    unsigned long long _validationState;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // @synthesize escapeOffer=_escapeOffer;
@property(readonly, nonatomic) CDPRemoteDeviceSecretValidator *validator; // @synthesize validator=_validator;
- (void)enableUserInteractionAndStopSpinner;
- (void)disableUserInteractionAndStartSpinner;
- (void)didCancelEnteringPIN;
- (void)didEnterValidRemoteSecret:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)showIncorrectRemoteSecretAlertForPasscode:(id)arg1 withRecoveryError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)validatePIN:(id)arg1;
- (_Bool)simplePIN;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (id)pinInstructionsPrompt;
- (id)title;
- (void)setPane:(id)arg1;
- (_Bool)useProgressiveDelays;
- (id)initWithValidator:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithIsNumeric:(_Bool)arg1 numericLength:(id)arg2 validator:(id)arg3 delegate:(id)arg4;
- (id)initWithDevice:(id)arg1 validator:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

