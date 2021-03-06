//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKInvalidatable-Protocol.h>

@class NSString, PKNotifyRegistration;

@interface PKNotifySubregistration : NSObject <PKInvalidatable>
{
    struct os_unfair_lock_s _lock;
    PKNotifyRegistration *_parent;
    CDUnknownBlockType _handler;
    _Bool _invalidated;
}

- (void).cxx_destruct;
- (void)invokeHandler;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)_invalidateFromParent:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithParent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

