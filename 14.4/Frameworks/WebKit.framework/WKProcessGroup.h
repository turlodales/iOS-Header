//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKGeolocationProviderIOS;
@protocol WKProcessGroupDelegate;

@interface WKProcessGroup : NSObject
{
    struct RefPtr<WebKit::WebProcessPool, WTF::DumbPtrTraits<WebKit::WebProcessPool>> _processPool;
    struct WeakObjCPtr<id<WKProcessGroupDelegate>> _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> _geolocationProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property id <WKProcessGroupDelegate> delegate;
- (id)initWithInjectedBundleURL:(id)arg1 andCustomClassesForParameterCoder:(id)arg2;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)init;
@property(readonly) WKGeolocationProviderIOS *_geolocationProvider;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
@property(readonly) struct OpaqueWKContext *_contextRef;

@end

