//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <BusinessChat/WKNavigationDelegate-Protocol.h>

@class BCInvalidCertificatView, BCProgressIndicatorView, BCServerErrorView, NSString, NSURL, WKWebView;
@protocol BCWebViewControllerDelegate;

@interface BCWebViewController : UIViewController <WKNavigationDelegate>
{
    _Bool _wasCallbackCaptured;
    id <BCWebViewControllerDelegate> _delegate;
    WKWebView *_webkitView;
    NSString *_callbackURI;
    BCInvalidCertificatView *_invalidCertificatView;
    BCProgressIndicatorView *_progressIndicatorView;
    BCServerErrorView *_serverErrorView;
    NSURL *_originURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wasCallbackCaptured; // @synthesize wasCallbackCaptured=_wasCallbackCaptured;
@property(retain, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
@property(retain, nonatomic) BCServerErrorView *serverErrorView; // @synthesize serverErrorView=_serverErrorView;
@property(retain, nonatomic) BCProgressIndicatorView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(retain, nonatomic) BCInvalidCertificatView *invalidCertificatView; // @synthesize invalidCertificatView=_invalidCertificatView;
@property(retain, nonatomic) NSString *callbackURI; // @synthesize callbackURI=_callbackURI;
@property(retain, nonatomic) WKWebView *webkitView; // @synthesize webkitView=_webkitView;
@property(nonatomic) __weak id <BCWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCertificatRelatedError:(id)arg1;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)setupProgressIndicator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObservers;
- (void)setupObservers;
- (void)dismissErrorViews;
- (void)presentServerError;
- (void)presentCertificatErrorForHost:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)loadView;
- (void)reload;
- (void)loadURL:(id)arg1;
- (id)initWithCallbackURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

