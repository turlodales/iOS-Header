//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSAppLink, LSApplicationProxy, NSURL;

@interface WBSAppLink : NSObject
{
    struct os_unfair_lock_s _ivarLock;
    _Bool _didResolveAppLink;
    LSAppLink *_cachedAppLink;
    NSURL *_url;
}

+ (void)clearSavedSettings;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)_isApplicationProxyAppleNews:(id)arg1;
- (void)_appLink:(id)arg1 getAppLinkLabel:(id *)arg2 name:(id *)arg3 icon:(id *)arg4;
- (long long)_openStrategyForAppLink:(id)arg1;
- (id)_synchronouslyFetchAppLinkWithError:(id *)arg1;
- (void)_getAppLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disable;
- (void)openExternally;
- (void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAppLinkLabel:(id *)arg1 name:(id *)arg2 icon:(id *)arg3;
- (void)getAppLinkAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)synchronouslyDecideOpenStrategy;
- (void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)decideOpenStrategyWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isAppleNewsLink) _Bool isAppleNewsLink;
@property(readonly, nonatomic) LSApplicationProxy *synchronousTargetApplicationProxy;
- (id)initWithURL:(id)arg1;

@end

