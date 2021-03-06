//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface MLTask : NSObject
{
    NSString *_taskIdentifier;
    long long _state;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(copy) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (id)taskStatesToString:(long long)arg1;
- (void)failWithError:(id)arg1 taskContext:(id)arg2;
- (void)completeWithTaskContext:(id)arg1;
- (void)suspendWithTaskContext:(id)arg1;
- (void)cancel;
- (void)resumeWithTaskContext:(id)arg1;
- (void)resume;
- (void)_resumeWithTaskContext:(id)arg1;
- (_Bool)_canFail;
- (_Bool)_canComplete;
- (_Bool)_canSuspend;
- (_Bool)_canCancel;
- (_Bool)_canResume;
- (id)initWithState:(long long)arg1;

@end

