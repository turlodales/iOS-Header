//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdCore/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer : ADSingleton <NSURLSessionDelegate>
{
    int _configurationExpirationTime;
    NSDictionary *_configurations;
    NSString *_resourceConnectProxyURL;
    NSURLSession *_session;
}

+ (id)workQueue;
+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property int configurationExpirationTime; // @synthesize configurationExpirationTime=_configurationExpirationTime;
@property(retain) NSDictionary *configurations; // @synthesize configurations=_configurations;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;
- (id)deserializeMessage:(id)arg1 error:(id *)arg2;
- (id)serializeMessage:(id)arg1;
- (void)saveProxyURL;
- (void)saveConfig;
- (void)restoreConfiguration;
- (void)buildConfigurationDictionary:(id)arg1;
- (_Bool)shouldRestoreConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

