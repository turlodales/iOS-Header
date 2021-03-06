//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadVPNUUID;
    NSArray *_payloadSafariDomains;
    NSNumber *_payloadOnDemandMatchAppEnabled;
    NSArray *_payloadSMBDomains;
    NSString *_payloadProviderType;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withSafariDomains:(id)arg3 withOnDemandMatchAppEnabled:(id)arg4 withSMBDomains:(id)arg5 withProviderType:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadProviderType; // @synthesize payloadProviderType=_payloadProviderType;
@property(copy, nonatomic) NSArray *payloadSMBDomains; // @synthesize payloadSMBDomains=_payloadSMBDomains;
@property(copy, nonatomic) NSNumber *payloadOnDemandMatchAppEnabled; // @synthesize payloadOnDemandMatchAppEnabled=_payloadOnDemandMatchAppEnabled;
@property(copy, nonatomic) NSArray *payloadSafariDomains; // @synthesize payloadSafariDomains=_payloadSafariDomains;
@property(copy, nonatomic) NSString *payloadVPNUUID; // @synthesize payloadVPNUUID=_payloadVPNUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

