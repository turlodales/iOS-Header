//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    _Bool _started;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    double _timeout;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_timeoutFired;
- (void)_invalidated;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_start;
- (void)start;
- (void)_invalidate;
- (void)invalidate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

