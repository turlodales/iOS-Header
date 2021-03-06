//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>
{
    _Bool _fullAccessLAN;
    _Bool _fullAccessWAN;
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
    NSDate *_lastModifiedTime;
    NSArray *_lanRules;
    NSArray *_wanRules;
}

+ (id)__decodeRulesFromNetworkDeclarations:(id)arg1 key:(id)arg2 class:(Class)arg3 required:(_Bool)arg4;
+ (_Bool)__decodeFullAccessFromNetworkDeclarations:(id)arg1 key:(id)arg2 fullAccess:(_Bool *)arg3;
+ (_Bool)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg1 networkDeclarations:(id *)arg2;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=hasFullAccessToWAN) _Bool fullAccessWAN; // @synthesize fullAccessWAN=_fullAccessWAN;
@property(readonly, nonatomic) NSArray *wanRules; // @synthesize wanRules=_wanRules;
@property(readonly, nonatomic, getter=hasFullAccessToLAN) _Bool fullAccessLAN; // @synthesize fullAccessLAN=_fullAccessLAN;
@property(readonly, nonatomic) NSArray *lanRules; // @synthesize lanRules=_lanRules;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(_Bool)arg3 lanRules:(id)arg4 fullAccessWAN:(_Bool)arg5 wanRules:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

