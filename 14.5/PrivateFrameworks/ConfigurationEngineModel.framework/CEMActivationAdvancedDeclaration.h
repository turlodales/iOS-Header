//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAnyPayload, NSArray, NSString;

@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadRequiredConfigurations;
    NSArray *_payloadStandardConfigurations;
    CEMAnyPayload *_payloadActivationPredicate;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3 withActivationPredicate:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) CEMAnyPayload *payloadActivationPredicate; // @synthesize payloadActivationPredicate=_payloadActivationPredicate;
@property(copy, nonatomic) NSArray *payloadStandardConfigurations; // @synthesize payloadStandardConfigurations=_payloadStandardConfigurations;
@property(copy, nonatomic) NSArray *payloadRequiredConfigurations; // @synthesize payloadRequiredConfigurations=_payloadRequiredConfigurations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

