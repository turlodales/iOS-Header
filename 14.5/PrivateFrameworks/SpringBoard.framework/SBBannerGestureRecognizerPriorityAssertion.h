//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString;

@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable>
{
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _enablementChangeHandler;
    _Bool _enabled;
    long long _priority;
    NSString *_reason;
}

+ (_Bool)isValidBannerGestureRecognizerPriority:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, copy) NSString *description;
- (id)initWithPriority:(long long)arg1 reason:(id)arg2 invalidationHandler:(CDUnknownBlockType)arg3 enablementChangeHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

