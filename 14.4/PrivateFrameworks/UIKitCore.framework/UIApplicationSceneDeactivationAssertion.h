//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDescriptionProviding-Protocol.h>

@class NSString, UIApplicationSceneDeactivationManager;

@interface UIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding>
{
    long long _reason;
    CDUnknownBlockType _predicate;
    UIApplicationSceneDeactivationManager *_manager;
    _Bool _acquired;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIApplicationSceneDeactivationManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic, getter=isAcquired) _Bool acquired; // @synthesize acquired=_acquired;
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)relinquish;
- (void)acquireWithPredicate:(CDUnknownBlockType)arg1 transitionContext:(id)arg2;
- (void)acquire;
- (void)dealloc;
- (id)initWithReason:(long long)arg1 manager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

