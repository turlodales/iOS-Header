//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreAnalyticsClient-Protocol.h>

@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>
{
}

- (void)ADClientPushValueForDistributionKey:(id)arg1:(double)arg2;
- (void)ADClientAddValueForScalarKey:(id)arg1:(long long)arg2;
- (void)ADClientSetValueForScalarKey:(id)arg1:(long long)arg2;
- (void)sendEventForKey:(id)arg1 payload:(id)arg2;

@end

