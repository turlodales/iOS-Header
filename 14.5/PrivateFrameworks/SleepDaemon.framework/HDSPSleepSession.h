//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/BSDescriptionProviding-Protocol.h>
#import <SleepDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSDictionary, NSString;

@interface HDSPSleepSession : NSObject <BSDescriptionProviding, NSSecureCoding>
{
    _Bool _requiresFirstUnlock;
    NSDateInterval *_interval;
    NSArray *_sleepIntervals;
    unsigned long long _endReason;
    NSDictionary *_metadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)sleepSessionWithDateInterval:(id)arg1 sleepIntervals:(id)arg2 endReason:(unsigned long long)arg3 metadata:(id)arg4 requiresFirstUnlock:(_Bool)arg5;
+ (id)testSleepSession;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requiresFirstUnlock; // @synthesize requiresFirstUnlock=_requiresFirstUnlock;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long endReason; // @synthesize endReason=_endReason;
@property(readonly, nonatomic) NSArray *sleepIntervals; // @synthesize sleepIntervals=_sleepIntervals;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 sleepIntervals:(id)arg2 endReason:(unsigned long long)arg3 metadata:(id)arg4 requiresFirstUnlock:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

