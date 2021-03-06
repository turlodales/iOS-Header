//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BCCoreAnalytics : NSObject
{
    NSString *_lastActionTaken;
    long long _lastActionLatency;
}

+ (void)logEventForChatSuggestDidNotAppearForBizItem:(id)arg1 error:(id)arg2 isVisible:(_Bool)arg3 isMessageable:(_Bool)arg4 latency:(long long)arg5;
+ (void)logEventForView:(id)arg1 bizItem:(id)arg2 bizItemReturnedAfterAction:(_Bool)arg3 latency:(long long)arg4;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) long long lastActionLatency; // @synthesize lastActionLatency=_lastActionLatency;
@property(retain, nonatomic) NSString *lastActionTaken; // @synthesize lastActionTaken=_lastActionTaken;
- (void)setLastActionTaken:(id)arg1 withLatency:(long long)arg2;

@end

