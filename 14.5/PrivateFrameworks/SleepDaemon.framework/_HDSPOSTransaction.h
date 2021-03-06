//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/BSDescriptionProviding-Protocol.h>
#import <SleepDaemon/HDSPAssertion-Protocol.h>

@class NSString;
@protocol OS_dispatch_source, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface _HDSPOSTransaction : NSObject <BSDescriptionProviding, HDSPAssertion>
{
    struct os_unfair_lock_s _transactionLock;
    NSString *_identifier;
    unsigned long long _signpost_id;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2;
+ (id)assertionWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) struct os_unfair_lock_s transactionLock; // @synthesize transactionLock=_transactionLock;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) unsigned long long signpost_id; // @synthesize signpost_id=_signpost_id;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_locked_release;
- (void)releaseAssertion;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

