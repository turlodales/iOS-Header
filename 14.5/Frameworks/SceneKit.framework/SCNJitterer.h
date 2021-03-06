//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, SCNJittererDelegate;

__attribute__((visibility("hidden")))
@interface SCNJitterer : NSObject
{
    _Bool _enabled;
    unsigned long long _state;
    unsigned long long _iteration;
    _Bool _restartSourceIsSuspended;
    id <SCNJittererDelegate> _delegate;
    NSObject<OS_dispatch_source> *_restartSource;
}

+ (void)initialize;
- (void)restart;
- (void)stopIfNeeded;
- (void)jitter;
- (id)loadDelegate;
- (void)update;
- (_Bool)isAborting;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)delegateWillDie;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

