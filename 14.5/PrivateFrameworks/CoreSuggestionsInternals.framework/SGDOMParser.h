//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView;
@protocol OS_dispatch_semaphore;

@interface SGDOMParser : NSObject <WKNavigationDelegate>
{
    NSObject<OS_dispatch_semaphore> *_loadedSem;
    WKWebView *_webView;
    NSString *_html;
}

- (void).cxx_destruct;
- (void)runJavascriptOnWebView:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)_parseDocument:(id)arg1;
- (id)webView;
- (id)parseHTML:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

