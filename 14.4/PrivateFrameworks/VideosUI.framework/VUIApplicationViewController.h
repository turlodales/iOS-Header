//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVApplicationControllerDelegate-Protocol.h>
#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TVApplicationController, UINavigationController, VUIBootURLController;

@interface VUIApplicationViewController : UIViewController <TVApplicationControllerDelegate, UIGestureRecognizerDelegate>
{
    TVApplicationController *_applicationController;
    VUIBootURLController *_bootURLController;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) VUIBootURLController *bootURLController; // @synthesize bootURLController=_bootURLController;
@property(retain, nonatomic) TVApplicationController *applicationController; // @synthesize applicationController=_applicationController;
- (void)_startApplicationControllerWithBootURL:(id)arg1;
- (id)_initialViewControllerWithAppContext:(id)arg1;
- (void)_exposeObjectsInJSContext:(id)arg1;
- (id)_launchOptions;
- (Class)_applicationControllerClass;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

