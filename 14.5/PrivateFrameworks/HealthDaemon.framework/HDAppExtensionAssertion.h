//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAppAssertionManager, HDProfile, NSMutableDictionary, NSString;
@protocol HDAppExtensionAssertionDelegate, OS_dispatch_source;

@interface HDAppExtensionAssertion : NSObject
{
    _Bool _unitTest_timersWithShortTimeout;
    _Bool _pendingAssertion;
    _Bool _invalidated;
    struct os_unfair_lock_s _lock;
    id <HDAppExtensionAssertionDelegate> _delegate;
    NSString *_bundleIdentifier;
    CDUnknownBlockType _unitTest_errorCountDidIncrement;
    CDUnknownBlockType _unitTest_extensionWillTimeout;
    HDProfile *_profile;
    HDAppAssertionManager *_assertionManager;
    NSMutableDictionary *_pendingAssertionCompletions;
    NSMutableDictionary *_pendingDataTypeCodesToAnchors;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_source> *_graceTimer;
    double _lastAssertionAttempt;
    long long _connectionErrorCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long connectionErrorCount; // @synthesize connectionErrorCount=_connectionErrorCount;
@property(nonatomic) double lastAssertionAttempt; // @synthesize lastAssertionAttempt=_lastAssertionAttempt;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) _Bool pendingAssertion; // @synthesize pendingAssertion=_pendingAssertion;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *graceTimer; // @synthesize graceTimer=_graceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSMutableDictionary *pendingDataTypeCodesToAnchors; // @synthesize pendingDataTypeCodesToAnchors=_pendingDataTypeCodesToAnchors;
@property(retain, nonatomic) NSMutableDictionary *pendingAssertionCompletions; // @synthesize pendingAssertionCompletions=_pendingAssertionCompletions;
@property(nonatomic) __weak HDAppAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(nonatomic) _Bool unitTest_timersWithShortTimeout; // @synthesize unitTest_timersWithShortTimeout=_unitTest_timersWithShortTimeout;
@property(copy, nonatomic) CDUnknownBlockType unitTest_extensionWillTimeout; // @synthesize unitTest_extensionWillTimeout=_unitTest_extensionWillTimeout;
@property(copy, nonatomic) CDUnknownBlockType unitTest_errorCountDidIncrement; // @synthesize unitTest_errorCountDidIncrement=_unitTest_errorCountDidIncrement;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <HDAppExtensionAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_unitTest_invalidated;
- (double)_unitTest_lastAssertionAttempt;
- (long long)_unitTest_connectionErrorCount;
- (id)_unitTest_pendingDataTypeCodesToAnchors;
- (unsigned long long)_unitTest_pendingAssertionCompletionsCount;
- (void)_lock_cancelTimeoutTimers;
- (void)_invalidate;
- (void)_notifyAppExtensionForDataType:(long long)arg1;
- (void)_notifyAppExtensionOfUpcomingTimeout;
@property(readonly, nonatomic) double nextAssertionAttempt;
@property(readonly, nonatomic) _Bool shouldAssert;
- (void)incrementErrorCount;
- (id)extension;
- (void)invalidateForDataType:(long long)arg1 anchor:(id)arg2;
- (void)assertAndUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)extendForDataType:(long long)arg1 anchor:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithBundleIdentifier:(id)arg1 assertionManager:(id)arg2 profile:(id)arg3;
- (id)init;

@end

