//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCUIViewController.h>

#import <ManagedConfigurationUI/DevicePINControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCInstallationConsentDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCInstallationWarningDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCProfileQuestionsControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCProfileViewControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCUISignInViewControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class MCInstallProfileQuestionViewController, MCProfile, MCProfileViewController, NSArray, NSData, NSSManager, NSString;
@protocol MCInstallProfileDelegate;

@interface MCInstallProfileViewController : MCUIViewController <MCInstallationConsentDelegate, DevicePINControllerDelegate, MCProfileQuestionsControllerDelegate, MCInstallationWarningDelegate, MCProfileViewControllerDelegate, MCUISignInViewControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    _Bool _processingPayload;
    _Bool _userCancelledInstall;
    _Bool _secondaryProfileReceived;
    _Bool _installHasFailed;
    _Bool _questionsAlreadyAsked;
    _Bool _waitingForNextQuestion;
    _Bool _delayNextQuesion;
    int _installState;
    id <MCInstallProfileDelegate> _delegate;
    MCProfile *_originalProfile;
    NSData *_profileData;
    NSData *_originalProfileData;
    CDUnknownBlockType _signInCompletionHandler;
    NSString *_enrollmentPersonaID;
    NSSManager *_nssManager;
    MCProfile *_profile;
    MCProfileViewController *_profileViewController;
    MCInstallProfileQuestionViewController *_questionsController;
    NSString *_pin;
    NSArray *_warnings;
    CDUnknownBlockType _didAppearBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didAppearBlock; // @synthesize didAppearBlock=_didAppearBlock;
@property(retain, nonatomic) NSArray *warnings; // @synthesize warnings=_warnings;
@property(retain, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(nonatomic) _Bool delayNextQuesion; // @synthesize delayNextQuesion=_delayNextQuesion;
@property(nonatomic) _Bool waitingForNextQuestion; // @synthesize waitingForNextQuestion=_waitingForNextQuestion;
@property(nonatomic) _Bool questionsAlreadyAsked; // @synthesize questionsAlreadyAsked=_questionsAlreadyAsked;
@property(nonatomic) _Bool installHasFailed; // @synthesize installHasFailed=_installHasFailed;
@property(nonatomic) int installState; // @synthesize installState=_installState;
@property(retain, nonatomic) MCInstallProfileQuestionViewController *questionsController; // @synthesize questionsController=_questionsController;
@property(retain, nonatomic) MCProfileViewController *profileViewController; // @synthesize profileViewController=_profileViewController;
@property(retain, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property(copy, nonatomic) NSString *enrollmentPersonaID; // @synthesize enrollmentPersonaID=_enrollmentPersonaID;
@property(copy, nonatomic) CDUnknownBlockType signInCompletionHandler; // @synthesize signInCompletionHandler=_signInCompletionHandler;
@property(nonatomic) _Bool secondaryProfileReceived; // @synthesize secondaryProfileReceived=_secondaryProfileReceived;
@property(nonatomic) _Bool userCancelledInstall; // @synthesize userCancelledInstall=_userCancelledInstall;
@property(nonatomic) _Bool processingPayload; // @synthesize processingPayload=_processingPayload;
@property(retain, nonatomic) NSData *originalProfileData; // @synthesize originalProfileData=_originalProfileData;
@property(retain, nonatomic) NSData *profileData; // @synthesize profileData=_profileData;
@property(retain, nonatomic) MCProfile *originalProfile; // @synthesize originalProfile=_originalProfile;
@property(nonatomic) __weak id <MCInstallProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)_signInMAID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeWatchProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removePhoneProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)profileRemovalDidFinish;
- (void)performRemoveAfterFinalVerification;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (_Bool)profileViewControllerIsProfileInstalled;
- (void)_showAlertForError:(id)arg1 suggestedTitle:(id)arg2 suggestedMessage:(id)arg3;
- (void)addCancelActionToAlert:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addInstallActionWithTitle:(id)arg1 style:(long long)arg2 toAlert:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showReEnrollFailureAlert;
- (void)showMDMFinalInstallationAlert:(CDUnknownBlockType)arg1;
- (void)showFinalInstallationAlert:(CDUnknownBlockType)arg1;
- (void)_cancelInstallDueToApplicationExit;
- (void)_handleInstallationError:(id)arg1;
- (_Bool)_installErrorIsUserCancelledError:(id)arg1;
- (void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)cancelInstallWhilePresentingConsentAndWarningsUponDidAppear;
- (void)cancelInstallWhilePresentingConsentAndWarningsAnimated:(_Bool)arg1;
- (void)_cancelInstallAfterMAIDAuthenticationAnimated:(_Bool)arg1;
- (void)cancelInstallWhilePresentingQuestionsAnimated:(_Bool)arg1;
- (void)submitQuestionAnswers:(id)arg1;
- (void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)_installProfileOnWatchWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_attemptRemoteInstallAfterCompletingPrecheck;
- (void)continueInstallFlowAfterCompletingPrecheck;
- (void)continueInstallFlowAfterPINVerification;
- (void)_beginInstallFlow;
- (id)_newRightBarButtonItem;
- (void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(_Bool)arg2;
- (void)updateTitleForProfileInstallationState:(int)arg1;
- (void)_hideProgressIndicatorIfNeeded;
- (void)hideProgressIndicatorWithShowButtons:(_Bool)arg1;
- (void)showProgressIndicator;
- (void)_resetInstallationVariables;
- (void)setInstallState:(int)arg1 animated:(_Bool)arg2;
- (void)queueNextProfileData:(id)arg1;
- (void)_takeMeBack;
- (void)_returnToSender;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (_Bool)displayedAsSheet;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 viewMode:(long long)arg2;
- (id)initWithInstallableProfileData:(id)arg1 fromSource:(unsigned long long)arg2;
- (id)initWithProfileDataFromSettingsJump:(id)arg1;
- (void)_didFinishPresentingConsent:(id)arg1;
- (void)_presentConsent:(id)arg1;
- (void)installationConsentViewController:(id)arg1 finishedWithUserContinueResponse:(_Bool)arg2;
- (void)consentExtensionShowConsentAndWarnings:(id)arg1;
- (void)_didFinishEnteringPINWithCompletion:(CDUnknownBlockType)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)pinExtensionShowPINSheet;
- (void)_finishWaitingForMoreQuestions;
- (void)_waitForNextQuestion;
- (void)_promptUserWithQuestionsAfterDelay:(id)arg1;
- (void)_promptUserWithQuestions:(id)arg1;
- (_Bool)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (void)setCurrentQuestionsController:(id)arg1;
- (void)questionsExtensionInstallFinished;
- (void)questionsExtensionDidFinishPreflightWithError:(id)arg1;
- (void)questionsExtensionDidRequestAnswersForQuestions:(id)arg1;
- (id)_localizedCPLFinalWarningString;
- (void)_showCPLFinalInstallationWarning:(CDUnknownBlockType)arg1 withMDMWarning:(_Bool)arg2;
- (void)installationWarningViewController:(id)arg1 finishedWithUserContinueResponse:(_Bool)arg2;
- (void)warningsExtensionPushWarningsControllerWithWarnings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

