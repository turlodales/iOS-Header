//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICPrivacyInfo : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s _lock;
}

+ (_Bool)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg1;
+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg1;
+ (id)sharedPrivacyInfo;
- (void).cxx_destruct;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_updateForPrivacyAcknowledgementChanged;
- (_Bool)_privacyAcknowledgementRequiredForIdentifier:(id)arg1;
- (void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg1 withToken:(id)arg2;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)acknowledgePrivacyPolicyForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg1;
- (_Bool)privacyAcknowledgementRequiredForIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForMusic;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForMedia;
- (id)init;

@end

