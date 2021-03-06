//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveExperimentsInternals/PREResponsesProtocol-Protocol.h>

@class NSString, _PASBundleIdResolver;
@protocol PREResponsesProtocol;

@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol>
{
    id <PREResponsesProtocol> _clientProxy;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;
- (id)preResponseItemArrayFromQuickResponses:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(_Bool)arg12 completion:(CDUnknownBlockType)arg13;
- (void)setRemoteObjectProxy:(id)arg1;

@end

