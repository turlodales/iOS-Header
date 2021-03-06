//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMSystemXsanSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadSanName;
    NSArray *_payloadSanConfigURLs;
    NSArray *_payloadFsnameservers;
    NSString *_payloadSanAuthMethod;
    NSString *_payloadSharedSecret;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSharedSecret:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 withSanName:(id)arg2 withSanConfigURLs:(id)arg3 withFsnameservers:(id)arg4 withSanAuthMethod:(id)arg5 withSharedSecret:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadSharedSecret; // @synthesize payloadSharedSecret=_payloadSharedSecret;
@property(copy, nonatomic) NSString *payloadSanAuthMethod; // @synthesize payloadSanAuthMethod=_payloadSanAuthMethod;
@property(copy, nonatomic) NSArray *payloadFsnameservers; // @synthesize payloadFsnameservers=_payloadFsnameservers;
@property(copy, nonatomic) NSArray *payloadSanConfigURLs; // @synthesize payloadSanConfigURLs=_payloadSanConfigURLs;
@property(copy, nonatomic) NSString *payloadSanName; // @synthesize payloadSanName=_payloadSanName;
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

