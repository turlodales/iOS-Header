//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject
{
    _Bool _unlockedByTouchID;
    id <SASLockStateMonitorDelegate> _delegate;
    unsigned long long _lockState;
    NSNumber *_assistantIsEnabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *assistantIsEnabled; // @synthesize assistantIsEnabled=_assistantIsEnabled;
@property(nonatomic) _Bool unlockedByTouchID; // @synthesize unlockedByTouchID=_unlockedByTouchID;
@property(nonatomic) unsigned long long lockState; // @synthesize lockState=_lockState;
@property(nonatomic) __weak id <SASLockStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_currentLockState;
- (_Bool)isScreenOn;
- (_Bool)hasUnlockedSinceBoot;
- (_Bool)isBlocked;
- (void)dealloc;
- (id)init;

@end

