//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostProtocol-Protocol.h>

@class NSDictionary;

@protocol NEFilterControlExtensionProviderHostProtocol <NEFilterExtensionProviderHostProtocol>
- (void)provideURLAppendStringMap:(NSDictionary *)arg1;
- (void)provideRemediationMap:(NSDictionary *)arg1;
- (void)notifyRulesChanged;
@end

