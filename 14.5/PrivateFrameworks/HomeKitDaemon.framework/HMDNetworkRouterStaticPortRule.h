//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterRuleDirection, NSString;

@interface HMDNetworkRouterStaticPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;
    HMDNetworkRouterProtocol *_protocol;
    HMDNetworkRouterIPAddress *_destinationIPAddress;
    HAPTLVUnsignedNumberValue *_destinationPortStart;
    HAPTLVUnsignedNumberValue *_destinationPortEnd;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ruleFromFirewallRuleLAN:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPortEnd; // @synthesize destinationPortEnd=_destinationPortEnd;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPortStart; // @synthesize destinationPortStart=_destinationPortStart;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 destinationIPAddress:(id)arg4 destinationPortStart:(id)arg5 destinationPortEnd:(id)arg6;
- (id)init;
- (void)addTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

