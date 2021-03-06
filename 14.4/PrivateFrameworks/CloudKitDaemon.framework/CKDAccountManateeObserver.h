//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue;

@interface CKDAccountManateeObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_statusQueue;
    long long _manateeAvailableForLoggedInAccount;
    NSError *_lastCDPError;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
@property(copy, nonatomic) NSError *lastCDPError; // @synthesize lastCDPError=_lastCDPError;
@property(nonatomic, setter=_lockedSetManateeAvailableForLoggedInAccount:) long long manateeAvailableForLoggedInAccount; // @synthesize manateeAvailableForLoggedInAccount=_manateeAvailableForLoggedInAccount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue; // @synthesize statusQueue=_statusQueue;
- (_Bool)accountSupportsManatee:(id)arg1;
- (_Bool)isManateeAvailable:(id *)arg1;
- (void)statusForCurrentlyLoggedInAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lockedFetchAndUpdateManateeAvailability;
- (void)handleUpdateNotificationWithAvailability:(id)arg1;
- (long long)_fetchManateeAvailability:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

