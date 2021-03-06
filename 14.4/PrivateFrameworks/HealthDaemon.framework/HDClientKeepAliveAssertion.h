//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HDClientKeepAliveAssertion : HDAssertion
{
    long long _launchCount;
    NSDate *_lastLaunchAttempt;
    NSString *_clientBundleIdentifier;
    NSDictionary *_payloadOptions;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *payloadOptions; // @synthesize payloadOptions=_payloadOptions;
@property(readonly, copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(copy, nonatomic) NSDate *lastLaunchAttempt; // @synthesize lastLaunchAttempt=_lastLaunchAttempt;
@property(nonatomic) long long launchCount; // @synthesize launchCount=_launchCount;
- (id)initWithOwnerIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 payloadOptions:(id)arg3;

@end

