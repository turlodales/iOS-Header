//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKConnection;

@interface WKWebProcessPlugInController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundle> _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn>> _principalClassInstance;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
- (void)extendClassesForParameterCoder:(id)arg1;
@property(readonly) id parameters;
@property(readonly) WKConnection *connection;
- (void)_setPrincipalClassInstance:(id)arg1;
- (void)dealloc;
@property(readonly) struct OpaqueWKBundle *_bundleRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

