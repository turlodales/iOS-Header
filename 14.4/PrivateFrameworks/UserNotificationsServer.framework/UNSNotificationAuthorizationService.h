//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRCarPlayAppPolicyEvaluator, UNSCriticalAlertAuthorizationAlertController, UNSDefaultDataProviderFactory, UNSNotificationAuthorizationAlertController;
@protocol OS_dispatch_queue;

@interface UNSNotificationAuthorizationService : NSObject
{
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
    CRCarPlayAppPolicyEvaluator *_policyEvaluator;
}

- (void).cxx_destruct;
- (void)_queue_requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_queue_isSpokenAvailableForApplication:(id)arg1;
- (_Bool)_queue_isCarPlayAvailableForApplication:(id)arg1;
- (void)_queue_requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 withExpirationDate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_didForegroundApplicationWithBundleIdentifier:(id)arg1;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)requestCriticalAlertAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestRemoveAuthorizationForNotificationSourceDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 expirationDate:(id)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDataProviderFactory:(id)arg1;

@end

