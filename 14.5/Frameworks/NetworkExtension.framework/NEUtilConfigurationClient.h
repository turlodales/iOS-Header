//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationCommandHandling-Protocol.h>

@class NEAppPush, NEConfiguration, NEConfigurationManager, NEDNSProxyProviderProtocol, NEDNSSettingsBundle, NEFilterProviderConfiguration, NSArray, NSMutableArray, NSString;

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling>
{
    _Bool _isAlwaysOn;
    NSString *_clientName;
    NEConfigurationManager *_manager;
    NSMutableArray *_createdConfigurations;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    NEConfiguration *_currentConfiguration;
}

+ (void)removeClientWithName:(id)arg1;
+ (id)clientWithName:(id)arg1;
+ (id)allClients;
- (void).cxx_destruct;
@property(readonly) _Bool isAlwaysOn; // @synthesize isAlwaysOn=_isAlwaysOn;
@property(retain) NEConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
@property(retain) NSMutableArray *identities; // @synthesize identities=_identities;
@property(retain) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
@property(retain) NSMutableArray *createdConfigurations; // @synthesize createdConfigurations=_createdConfigurations;
@property(readonly) NEConfigurationManager *manager; // @synthesize manager=_manager;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)unsetProxyServer:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProxyServer:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetProxyParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProxyParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetAppPushParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setAppPushParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetDNSParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setDNSParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetAlwaysOnParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setAlwaysOnParameters:(id)arg1 errorStr:(id *)arg2;
- (void)reloadIdentityListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addIdentityProperties:(id)arg1 withDomain:(long long)arg2;
- (void)loadFromDiskForGivenPath:(id)arg1 configName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)decodeConfigurationWithIdentifier:(id)arg1 andDecoder:(id)arg2;
- (id)readIndexFromDiskForGivenPatahWithError:(id)arg1 returnError:(id *)arg2 fileDecoder:(id *)arg3;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadConfigurationsForceRefresh:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeAppRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addAppRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)removePathRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addPathRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setPathControllerWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetPPPParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setPPPParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetIPSecParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setIPSecParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetCommonParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setCommonParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetDNSProxyWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setDNSProxyWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetFilterPluginParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setFilterPluginWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProtocolWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)swapConfigurationTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)createConfigurationWithParameters:(id)arg1 errorStr:(id *)arg2;
@property(readonly) NEAppPush *appPush;
@property(readonly) NEDNSSettingsBundle *dnsSettingsBundle;
@property(readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property(readonly) NEFilterProviderConfiguration *filterConfiguration;
- (id)protocolForParameters:(id)arg1;
- (_Bool)isIsAlwaysOn;
@property(copy) NSArray *onDemandRules;
@property(nonatomic) _Bool disconnectOnDemandEnabled;
@property _Bool onDemandUserOverrideDisabled;
@property _Bool onDemandEnabled;
@property _Bool enabled;
- (void)dealloc;
- (id)initWithClientName:(id)arg1;
- (id)initInternalWithClientName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

