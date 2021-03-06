//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCBackoff-Protocol.h>

@class JEUnfairLock, NSString;

__attribute__((visibility("hidden")))
@interface ASCExponentialBackoff : NSObject <ASCBackoff>
{
    double _baseSleepTimeInterval;
    double _maxSleepTimeInterval;
    JEUnfairLock *_attemptLock;
    long long _attemptsMade;
}

- (void).cxx_destruct;
@property(nonatomic) long long attemptsMade; // @synthesize attemptsMade=_attemptsMade;
@property(readonly, nonatomic) JEUnfairLock *attemptLock; // @synthesize attemptLock=_attemptLock;
@property(readonly, nonatomic) double maxSleepTimeInterval; // @synthesize maxSleepTimeInterval=_maxSleepTimeInterval;
@property(readonly, nonatomic) double baseSleepTimeInterval; // @synthesize baseSleepTimeInterval=_baseSleepTimeInterval;
- (void)reset;
- (double)nextSleepTimeInterval;
- (id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

