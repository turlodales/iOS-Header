//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebService.h>

#import <PassKitCore/NSURLSessionDownloadDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMutableDictionary, NSObject, NSOperationQueue, NSString, NSURL, NSURLSession, PKPaymentDevice, PKPaymentWebServiceBackgroundContext, PKPaymentWebServiceContext;
@protocol OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate>
{
    NSURLSession *_backgroundSession;
    PKPaymentDevice *_paymentDevice;
    NSMutableDictionary *_passesByLocalURL;
    int _paymentSupportInRegion;
    int _registrationSupportInRegion;
    struct os_unfair_lock_s _supportInRegionLock;
    struct os_unfair_lock_s _delegateLock;
    NSObject<OS_dispatch_queue> *_backgroundDownloadQueue;
    NSOperationQueue *_backgroundSessionDelegateQueue;
    NSHashTable *_delegates;
    PKPaymentWebServiceContext *_context;
    struct os_unfair_lock_s _contextLock;
    _Bool _handlingApplePayTrustReRegister;
    _Bool _sharedService;
    PKPaymentWebServiceBackgroundContext *_backgroundContext;
    id <PKPaymentWebServiceArchiver> _archiver;
    id <PKPaymentWebServiceBackgroundDelegate> _backgroundDelegate;
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedService;
- (void).cxx_destruct;
@property(nonatomic) _Bool sharedService; // @synthesize sharedService=_sharedService;
@property(readonly, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
@property __weak id <PKPaymentWebServiceBackgroundDelegate> backgroundDelegate; // @synthesize backgroundDelegate=_backgroundDelegate;
@property(retain) id <PKPaymentWebServiceArchiver> archiver; // @synthesize archiver=_archiver;
@property(retain) PKPaymentWebServiceBackgroundContext *backgroundContext; // @synthesize backgroundContext=_backgroundContext;
- (void)_archiveBackgroundContext;
- (void)_archiveContext;
- (void)_cleanupPassDownloadCache;
- (id)_downloadCacheLocation;
- (id)_movePassToDownloadCache:(id)arg1;
- (id)_paymentDevice;
- (id)_errorWithResult:(unsigned long long)arg1 data:(id)arg2;
- (unsigned long long)_resultForUnexpectedStatusCode:(long long)arg1;
- (unsigned long long)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(CDUnknownBlockType)arg3;
- (void)_storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)_passOwnershipTokenForPaymentCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_downloadPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deviceProvisioningDataIncludingDeviceMetadata:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_deviceRegistrationDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deviceConfigurationDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_downloadPassesWithURLs:(id)arg1;
- (void)_applePayTrustPublicKeyHashWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleRetryAfterApplePayTrustEnrollmentWithOriginalRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withRequest:(id)arg2 taskIdentifier:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleDeviceCheckInTask:(id)arg1 downloadRecord:(id)arg2 data:(id)arg3;
- (void)_handlePassDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRemoteCloudStoreAssetForRecordName:(id)arg1 taskRecord:(id)arg2 data:(id)arg3 shouldWriteData:(_Bool)arg4;
- (void)_handleRemoteURLAssetDownloadTask:(id)arg1 data:(id)arg2;
- (void)_handleRemoteAssetDownloadForManifestItem:(id)arg1 taskPassURL:(id)arg2 data:(id)arg3 shouldWriteData:(_Bool)arg4;
- (void)_backgroundDownloadCloudStoreAssetsforItem:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2;
- (id)_passWithFileURL:(id)arg1;
- (void)_updateRequestWithCurrentTargetDevice:(id)arg1;
- (_Bool)_hasConfiguration;
- (void)_startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (unsigned long long)networkManifestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)performAction:(id)arg1 onServiceProviderPurchase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)serviceProviderPurchaseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)serviceProviderPurchasesWithRequest:(id)arg1 inRegion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)performServiceProviderPayment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)serviceProviderAugmentSessionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)serviceProviderNonceWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)prepareTransactionDetailsForMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)checkMerchantStatus:(id)arg1 forDomain:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)availableDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_performRewrapRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)completeSessionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)completeSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)rewrapInAppPaymentWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 merchantSession:(id)arg3 hostApplicationIdentifier:(id)arg4 applicationData:(id)arg5 pass:(id)arg6 paymentApplication:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (unsigned long long)_augmentSessionWithRequest:(id)arg1 serviceURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)augmentSessionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_nonceWithRequest:(id)arg1 serviceURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)inAppPaymentNonceWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)credentialAccountAttesationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)revokeSharedCredentialWithRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)registerCredentialWithRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)transactionReceiptWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)transactionReceiptAuthorizationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)cardInfoForMerchantIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)moreInfoItemAtURL:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)passActionWithRemoteContentPassAction:(id)arg1 forPass:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)paymentProvisioningNonceOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)passUpgradeWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provisioningMethodWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)browseableBankAppsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)availableProductsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)contactInformationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provideEncryptedPushProvisioningTargetWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)pushProvisioningSharingStatusRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)pushProvisioningSharingIdentifiersWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)backgroundRegisterCredentialWithRequest:(id)arg1;
- (void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3;
- (void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2;
- (void)backgroundDownloadRemotePassAssets:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2;
- (void)backgroundDownloadRemotePassAssets:(id)arg1;
- (void)backgroundDownloadPassAtURL:(id)arg1;
- (unsigned long long)passAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHasBackgroundDownloadTaskPassesForPushTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(_Bool)arg2;
- (void)backgroundDownloadPassesSinceLastUpdatedTag:(_Bool)arg1;
- (unsigned long long)performNotificationActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)notifyIssuerAppletStateDirtyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)passesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)devicePassesSinceLastUpdatedTag:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)verificationChannelsForPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_removeVerificationRequestRecord:(id)arg1;
- (void)_addVerificationRequestRecord:(id)arg1;
- (id)verificationRecordForPass:(id)arg1;
- (id)_fakeVerificationChannelsWithRealChannels:(id)arg1;
- (id)removeRedundantChannelsFromChannels:(id)arg1;
- (void)_performVerificationRequest:(id)arg1 selectedChannel:(id)arg2 paymentPass:(id)arg3 taskID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)updateVerification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)verificationOptionsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deprovisionForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provisionForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)provisionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)eligibilityForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)requirementsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)remotePaymentCredentialsUpdateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)remotePaymentCredentialsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)unregisterDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)updateRegistrationDataAtBrokerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)backgroundPerformDeviceCheckInForRegion:(id)arg1 identifier:(id)arg2;
- (unsigned long long)sendOwnershipTokensForReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deviceCheckInDeviceCheckInForRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_updateContextWithRegistrationResponse:(id)arg1;
- (_Bool)_isValidResponse:(id)arg1 error:(id)arg2;
- (unsigned long long)_performApplePayTrustRegistrationWithURL:(id)arg1 pushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)performApplePayTrustRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createApplePayTrustKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)_shouldPerformApplePayTrustRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyCheckResults:(id)arg2 retries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)registerDeviceAtBrokerURL:(id)arg1 consistencyCheckResults:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)registerDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)configurePaymentServiceWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isChinaRegionIdentifier:(id)arg1;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(CDUnknownBlockType)arg3;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_appleAccountInformation;
- (_Bool)_isSandboxAccount;
- (void)signNonce:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)logFacility;
- (id)forbiddenErrorWithResponse:(id)arg1;
@property(readonly) NSArray *delegates;
- (void)invalidateBackgroundSession;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3;
- (void)_recentConfiguration:(CDUnknownBlockType)arg1;
- (void)_canRegisterForPeerPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_canRegisterForPeerPayment;
- (_Bool)_supportsAccounts;
@property(readonly) NSURL *primaryBrokerURL;
@property(readonly) _Bool needsConfiguration;
- (_Bool)_needsRegistrationShouldCheckSecureElementOwnership:(_Bool)arg1;
@property(readonly) _Bool needsRegistration;
@property(readonly) _Bool registrationSetupSupportedInRegion;
@property(readonly) int paymentSetupSupportedInRegion;
- (void)_resetSupportInRegionCache;
- (void)_regionChanged;
- (void)sharedPaymentServiceAccountChanged:(id)arg1;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(retain, nonatomic) PKPaymentWebServiceContext *context;
- (void)dealloc;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 tapToRadarDelegate:(id)arg4;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3;
- (id)initWithContext:(id)arg1 targetDevice:(id)arg2 tapToRadarDelegate:(id)arg3;
- (id)initWithTapToRadarDelegate:(id)arg1;
- (_Bool)canBypassTrustExtendedValidation;
- (void)handleAuthenticationFailureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)fetchBarcodesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)registerAuxiliaryCapabilityWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)discoveryBundleForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)discoveryManifestWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)createdZoneWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)sharedAccountCloudStoreWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)updateAccountUserPreferencesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deleteAccountUserWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountUsersWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)exportTransactionDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)performInstallmentAuthorizationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)performInstallmentBindWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)applePayTrustSignatureRequestWithRequest:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)applePayTrustSignatureRequestWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountTransactionAnswerWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)virtualCardLegacyCredentialsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)virtualCardListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)virtualCardActionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)createVirtualCardWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountUpdateUserInfoWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountUserInfoWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)physicalCardsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)physicalCardActionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)requestPhysicalCardWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)customizePhysicalCardWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountServiceCertificatesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deleteFundingSourceWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)addFundingSourceWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)fundingSourcesWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)cancelPaymentWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)paymentsWithRequest:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)schedulePaymentWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountStatementActionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountStatementsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountBankLookupWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountPassDetailsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountTermsDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountTermsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountActionWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deleteAccountWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)accountsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_performAccountRequest:(id)arg1 account:(id)arg2 responseClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_performAccountRequest:(id)arg1 responseClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)_performAccountRequest:(id)arg1 account:(id)arg2 taskID:(unsigned long long)arg3 responseClass:(Class)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)_performAccountRequest:(id)arg1 taskID:(unsigned long long)arg2 responseClass:(Class)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_performOptionalAccountApplePayTrustProtocolRequest:(id)arg1 originalRequest:(id)arg2 taskID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_performAccountApplePayTrustProtocolRequest:(id)arg1 originalRequest:(id)arg2 taskID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)submitTermsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)shownTermsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)featureTermsDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)termsDataWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)submitDocumentsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)applyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)createWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)deleteApplicationWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)applicationsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_performApplyRequest:(id)arg1 responseClass:(Class)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

