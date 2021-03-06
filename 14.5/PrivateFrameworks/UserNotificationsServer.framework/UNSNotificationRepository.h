//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, UNSBundleLibrarian, UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue, UNSNotificationRepositoryDelegate, UNSNotificationRepositorySettingsProvider;

@interface UNSNotificationRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSMutableSet *_unlimitedBodyBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
    id <UNSNotificationRepositoryDelegate> _delegate;
    id <UNSNotificationRepositorySettingsProvider> _settingsProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <UNSNotificationRepositorySettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(nonatomic) id <UNSNotificationRepositoryDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldPersistNotificationRecord:(id)arg1 forBundleSettings:(id)arg2 perTopicSettings:(id)arg3;
- (void)_queue_performValidation;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (void)_queue_performMigrationForPushStoreAtPath:(id)arg1;
- (void)_queue_performMigrationForPushStore;
- (void)_queue_triggerInvalidationForFirstUnlock;
- (void)_queue_performMigrationForUserNotificationsStore;
- (void)_queue_performMigration;
- (void)_logNotification:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_queue_badgeNumberForBundleIdentifier:(id)arg1;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)badgeNumberForBundleIdentifier:(id)arg1;
- (void)_queue_removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)_queue_saveNotificationRecord:(id)arg1 shouldRepost:(_Bool)arg2 withOptions:(unsigned long long)arg3 forBundleIdentifier:(id)arg4;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)arg1 replaceNotifications:(id)arg2 replacementNotifications:(id)arg3 removedNotifications:(id)arg4 shouldRepost:(_Bool)arg5 forBundleIdentifier:(id)arg6;
- (id)_queue_notificationRecordForForIdentifier:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)arg1;
- (id)_notificationsForObjects:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;
- (void)performValidation;
- (void)performMigration;
- (id)allBundleIdentifiers;
- (void)removeNotificationRepository;
- (void)removeStoreForBundleIdentifier:(id)arg1;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)saveNotificationRecord:(id)arg1 shouldRepost:(_Bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)notificationRecordForForIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)notificationRecordsForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 librarian:(id)arg3;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (long long)_maxObjectsPerKey;

@end

