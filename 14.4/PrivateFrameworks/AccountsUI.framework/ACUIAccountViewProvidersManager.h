//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ACUIAccountViewProvidersManager : NSObject
{
    NSDictionary *_accountTypeToPluginNameMap;
    NSMutableDictionary *_pluginCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)setDelegate:(id)arg1 forSignInController:(id)arg2 forAccountWithType:(id)arg3;
- (id)_loadAccountViewProviderPluginWithName:(id)arg1;
- (id)_accountViewProviderPluginForAccountTypeID:(id)arg1;
- (id)configurationInfoForViewingAccount:(id)arg1;
- (id)configurationInfoForCreatingAccountWithType:(id)arg1;
- (Class)controllerClassForCreatingAccountWithType:(id)arg1;
- (Class)viewControllerClassForViewingAccount:(id)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
- (id)init;

@end

