//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/UNUserNotificationClientProtocol-Protocol.h>
#import <UserNotifications/UNUserNotificationServerProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNUserNotificationServiceConnection : NSObject <UNUserNotificationClientProtocol, UNUserNotificationServerProtocol>
{
    NSMutableDictionary *_observersByBundleIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableDictionary *observersByBundleIdentifier; // @synthesize observersByBundleIdentifier=_observersByBundleIdentifier;
- (void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (id)_queue_ensureConnection;
- (void)_invalidate;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)performBlockOnConnectionQueue:(CDUnknownBlockType)arg1;
- (id)clearedInfoForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)notificationTopicsForBundleIdentifier:(id)arg1;
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)badgeNumberForBundleIdentifier:(id)arg1;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)deliveredNotificationsForBundleIdentifier:(id)arg1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)pendingNotificationRequestsForBundleIdentifier:(id)arg1;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)notificationCategoriesForBundleIdentifier:(id)arg1;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setObservingUserNotifications:(_Bool)arg1 forBundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

