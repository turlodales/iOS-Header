//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDAWDSubmissionManager, HDActivityCacheManager, HDAppSubscriptionManager, HDAssertionManager, HDAuthorizationManager, HDBackgroundObservationServerExtensionManager, HDCloudSharingInviteRequestManager, HDCloudSyncManager, HDContributorManager, HDCurrentActivitySummaryHelper, HDDaemon, HDDaemonSyncEngine, HDDataCollectionManager, HDDataManager, HDDataProvenanceManager, HDDatabase, HDDatabasePruningManager, HDDeviceManager, HDFitnessMachineManager, HDHealthServiceManager, HDMedicalIDDataManager, HDMetadataManager, HDMigrationManager, HDNanoSyncManager, HDNotificationManager, HDOnboardingCompletionManager, HDOntologyLifecycleManager, HDRestorableAlarmScheduler, HDServiceConnectionManager, HDSharingEntryManager, HDSourceManager, HDSourceOrderManager, HDTinkerPrivacyAlertCoordinator, HDUnitPreferencesManager, HDUserCharacteristicsManager, HDWorkoutCondenser, HDWorkoutManager, HKProfileIdentifier, NSDictionary, NSString, NSURL;
@protocol HDHealthDaemon, HDSyncEngine;

@interface HDProfile : NSObject <HDHealthDaemonReadyObserver>
{
    HDDatabase *_database;
    HDSourceManager *_sourceManager;
    HDDeviceManager *_deviceManager;
    HDAuthorizationManager *_authorizationManager;
    HDOntologyLifecycleManager *_ontologyLifecycleManager;
    HDBackgroundObservationServerExtensionManager *_extensionManager;
    NSString *_directoryPath;
    HDDaemonSyncEngine *_syncEngine;
    NSDictionary *_profileExtensionsByIdentifier;
    struct os_unfair_lock_s _profileLock;
    _Bool _testModeEnabled;
    HDDaemon *_daemon;
    HDCloudSyncManager *_cloudSyncManager;
    HDContributorManager *_contributorManager;
    HDDataManager *_dataManager;
    HDDataProvenanceManager *_dataProvenanceManager;
    HDMetadataManager *_metadataManager;
    HDOnboardingCompletionManager *_onboardingCompletionManager;
    HDAssertionManager *_sessionAssertionManager;
    HDSharingEntryManager *_sharingEntryManager;
    HDSourceOrderManager *_sourceOrderManager;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDWorkoutCondenser *_workoutCondenser;
    HDCloudSharingInviteRequestManager *_cloudSharingInviteRequestManager;
    HKProfileIdentifier *_profileIdentifier;
    NSString *_medicalIDDirectoryPath;
    HDUnitPreferencesManager *_unitPreferencesManager;
    HDRestorableAlarmScheduler *_alarmScheduler;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDDatabasePruningManager *_databasePruningManager;
    HDMedicalIDDataManager *_medicalIDDataManager;
    HDMigrationManager *_migrationManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property(readonly, nonatomic) HDMedicalIDDataManager *medicalIDDataManager; // @synthesize medicalIDDataManager=_medicalIDDataManager;
@property(readonly, nonatomic) HDDatabasePruningManager *databasePruningManager; // @synthesize databasePruningManager=_databasePruningManager;
@property(readonly, nonatomic) HDAWDSubmissionManager *awdSubmissionManager; // @synthesize awdSubmissionManager=_awdSubmissionManager;
@property(readonly, nonatomic) HDRestorableAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property(nonatomic) _Bool testModeEnabled; // @synthesize testModeEnabled=_testModeEnabled;
@property(readonly, nonatomic) HDUnitPreferencesManager *unitPreferencesManager; // @synthesize unitPreferencesManager=_unitPreferencesManager;
@property(readonly, copy, nonatomic) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
@property(readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(readonly, nonatomic) HDCloudSharingInviteRequestManager *cloudSharingInviteRequestManager; // @synthesize cloudSharingInviteRequestManager=_cloudSharingInviteRequestManager;
@property(readonly, nonatomic) HDWorkoutCondenser *workoutCondenser; // @synthesize workoutCondenser=_workoutCondenser;
@property(readonly, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager; // @synthesize userCharacteristicsManager=_userCharacteristicsManager;
@property(readonly, nonatomic) HDSourceOrderManager *sourceOrderManager; // @synthesize sourceOrderManager=_sourceOrderManager;
@property(readonly, nonatomic) HDSourceManager *sourceManager; // @synthesize sourceManager=_sourceManager;
@property(readonly, nonatomic) HDSharingEntryManager *sharingEntryManager; // @synthesize sharingEntryManager=_sharingEntryManager;
@property(readonly, nonatomic) HDAssertionManager *sessionAssertionManager; // @synthesize sessionAssertionManager=_sessionAssertionManager;
@property(readonly, nonatomic) HDOnboardingCompletionManager *onboardingCompletionManager; // @synthesize onboardingCompletionManager=_onboardingCompletionManager;
@property(readonly, nonatomic) HDMetadataManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property(readonly, nonatomic) HDDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(readonly, nonatomic) HDDataProvenanceManager *dataProvenanceManager; // @synthesize dataProvenanceManager=_dataProvenanceManager;
@property(readonly, nonatomic) HDDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) HDContributorManager *contributorManager; // @synthesize contributorManager=_contributorManager;
@property(readonly, nonatomic) HDCloudSyncManager *cloudSyncManager; // @synthesize cloudSyncManager=_cloudSyncManager;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
- (id)_newContributorManager;
- (id)_newCloudSyncManager;
- (id)_newUserCharacteristicsManager;
- (id)_newAWDSubmissionManager;
- (id)_newDatabase;
- (id)_testModeIndicatorURL;
- (_Bool)setDisplayImageData:(id)arg1 error:(id *)arg2;
- (id)fetchDisplayImageDataWithError:(id *)arg1;
- (id)allProfileExtensions;
- (id)profileExtensionsConformingToProtocol:(id)arg1;
- (id)profileExtensionWithIdentifier:(id)arg1;
- (_Bool)setDisplayFirstName:(id)arg1 lastName:(id)arg2 error:(id *)arg3;
- (id)_lastNameWithError:(id *)arg1;
- (id)_displayNameWithError:(id *)arg1;
- (_Bool)fetchDisplayFirstName:(id *)arg1 lastName:(id *)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *description;
- (void)terminationCleanup;
- (void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateAndWait;
- (void)awakeFromDisk;
- (void)_createExtensionsIfNeeded;
- (void)daemonReady:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *directoryURL;
@property(readonly, copy, nonatomic) NSString *directoryPath;
@property(readonly, nonatomic) HDBackgroundObservationServerExtensionManager *extensionManager;
@property(readonly, nonatomic) HDTinkerPrivacyAlertCoordinator *tinkerPrivacyAlertCoordinator;
@property(readonly, nonatomic) HDOntologyLifecycleManager *ontologyLifecycleManager;
@property(readonly, nonatomic) HDFitnessMachineManager *fitnessMachineManager;
@property(readonly, nonatomic) HDWorkoutManager *workoutManager;
@property(readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property(readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property(readonly, nonatomic) HDNotificationManager *notificationManager;
@property(readonly, nonatomic) HDNanoSyncManager *nanoSyncManager;
@property(readonly, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property(readonly, nonatomic) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property(readonly, nonatomic) HDAppSubscriptionManager *appSubscriptionManager;
@property(readonly, nonatomic) HDActivityCacheManager *activityCacheManager;
@property(readonly, nonatomic) id <HDSyncEngine> syncEngine;
@property(readonly, nonatomic) HDAuthorizationManager *authorizationManager;
- (id)healthDeviceManager;
- (id)healthSourceManager;
@property(readonly, nonatomic) HDDatabase *database;
@property(readonly, nonatomic) __weak id <HDHealthDaemon> healthDaemon;
@property(readonly, nonatomic) long long profileType;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileIdentifier:(id)arg4;
- (id)pairedGuardianUserInfoWithError:(id *)arg1;
- (_Bool)setPairedGuardianUserInfo:(id)arg1 error:(id *)arg2;
- (id)pairedGuardianParticipantWithError:(id *)arg1;
- (_Bool)setPairedGuardianParticipant:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasHealthRecordsAccounts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

