//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSException, NSInvocation;

@interface NSInvocationOperation : NSOperation
{
    NSInvocation *_inv;
    NSException *_exception;
}

@property(readonly, retain) id result;
- (void)main;
@property(readonly, retain) NSInvocation *invocation;
- (void)dealloc;
- (id)initWithInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)init;

@end

