//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase
{
    NSString *_payloadLDAPSearchSettingDescription;
    NSString *_payloadLDAPSearchSettingSearchBase;
    NSString *_payloadLDAPSearchSettingScope;
}

+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg1;
+ (id)buildWithLDAPSearchSettingDescription:(id)arg1 withLDAPSearchSettingSearchBase:(id)arg2 withLDAPSearchSettingScope:(id)arg3;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadLDAPSearchSettingScope; // @synthesize payloadLDAPSearchSettingScope=_payloadLDAPSearchSettingScope;
@property(copy, nonatomic) NSString *payloadLDAPSearchSettingSearchBase; // @synthesize payloadLDAPSearchSettingSearchBase=_payloadLDAPSearchSettingSearchBase;
@property(copy, nonatomic) NSString *payloadLDAPSearchSettingDescription; // @synthesize payloadLDAPSearchSettingDescription=_payloadLDAPSearchSettingDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

