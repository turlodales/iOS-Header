//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKitUI/RemoteUIControllerDelegate-Protocol.h>

@class AAUICDPStingrayRemoteUIController, AKAppleIDAuthenticationInAppContext, AKAppleIDServerUIContextController, NSHTTPURLResponse, NSString, RUIObjectModel, UINavigationController, UIViewController;

@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate>
{
    AKAppleIDAuthenticationInAppContext *_context;
    UIViewController *_topViewControllerOnLoadStart;
    NSHTTPURLResponse *_deferredResponse;
    _Bool _navBarButtonOverridden;
    _Bool _overrideFirstActionSignal;
    AKAppleIDServerUIContextController *_serverUIContextController;
    RUIObjectModel *_currentRemoteOM;
    UINavigationController *_modalRemoteUINavController;
    AAUICDPStingrayRemoteUIController *_stingrayController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AAUICDPStingrayRemoteUIController *stingrayController; // @synthesize stingrayController=_stingrayController;
@property(nonatomic) _Bool overrideFirstActionSignal; // @synthesize overrideFirstActionSignal=_overrideFirstActionSignal;
@property(readonly, nonatomic) UINavigationController *modalRemoteUINavController; // @synthesize modalRemoteUINavController=_modalRemoteUINavController;
@property(readonly, nonatomic) RUIObjectModel *currentRemoteOM; // @synthesize currentRemoteOM=_currentRemoteOM;
@property(retain, nonatomic) AKAppleIDServerUIContextController *serverUIContextController; // @synthesize serverUIContextController=_serverUIContextController;
- (void)_showAlert:(id)arg1;
- (_Bool)_isDeferrableFinalResponseHarvested;
- (void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;
- (void)_handleBackButtonTap:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;
- (void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)clearObjectModel;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

