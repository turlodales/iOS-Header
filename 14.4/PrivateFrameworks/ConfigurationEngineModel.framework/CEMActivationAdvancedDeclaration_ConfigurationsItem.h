//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSString;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase
{
    NSString *_payloadIdentifier;
    CEMAnyPayload *_payloadOverrides;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) CEMAnyPayload *payloadOverrides; // @synthesize payloadOverrides=_payloadOverrides;
@property(copy, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

