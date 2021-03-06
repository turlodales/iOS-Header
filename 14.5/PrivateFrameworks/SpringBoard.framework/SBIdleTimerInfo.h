//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBIdleTimerProxy;
@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerProviding;

@interface SBIdleTimerInfo : NSObject
{
    id <SBIdleTimerProviding> _provider;
    id <SBFIdleTimerBehaviorProviding> _behavior;
    NSString *_reason;
    SBIdleTimerProxy *_idleTimerProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBIdleTimerProxy *idleTimerProxy; // @synthesize idleTimerProxy=_idleTimerProxy;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) id <SBFIdleTimerBehaviorProviding> behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) __weak id <SBIdleTimerProviding> provider; // @synthesize provider=_provider;
- (id)initWithProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 idleTimerProxy:(id)arg4;

@end

