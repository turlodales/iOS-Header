//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDAssertionManager, NSString, NSUUID;

@interface HDAssertion : NSObject
{
    HDAssertionManager *_manager;
    long long _state;
    double _remainingBudget;
    double _budgetIntervalStartTime;
    struct os_unfair_lock_s _lock;
    NSUUID *_UUID;
    NSString *_assertionIdentifier;
    NSString *_ownerIdentifier;
    double _budget;
}

- (void).cxx_destruct;
@property(nonatomic) double budget; // @synthesize budget=_budget;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, copy, nonatomic) NSString *assertionIdentifier; // @synthesize assertionIdentifier=_assertionIdentifier;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (long long)_lock_consumeBudgetThroughTime:(double)arg1 error:(id *)arg2;
- (id)_lock_setBudgetIntervalStartTime:(double)arg1;
- (_Bool)_lock_setBudget:(double)arg1 error:(id *)arg2;
- (double)_lock_remainingBudget;
- (long long)_lock_state;
- (id)_lock_cloneWithOwnerIdentifier:(id)arg1;
- (id)_lock_description;
- (_Bool)_consumeFromBudgetThroughTime:(double)arg1;
- (void)_setBudgetIntervalStartTime:(double)arg1;
- (void)_invalidateAndRelease:(_Bool)arg1;
- (long long)_takeWithManager:(id)arg1;
@property(readonly) long long rawState;
@property(readonly) double remainingBudget;
@property(readonly) long long state;
- (void)invalidate;
- (id)cloneWithOwnerIdentifier:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2;

@end

