//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, SSSDittoDebugViewController, SSSViewControllerManager, UIWindow;

@interface SSSAppDelegate : UIResponder <UIApplicationDelegate>
{
    SSSDittoDebugViewController *_debugViewController;
    SSSViewControllerManager *_viewControllerManager;
    _Bool _didLaunchSuspended;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didLaunchSuspended; // @synthesize didLaunchSuspended=_didLaunchSuspended;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
@property(readonly, nonatomic) SSSViewControllerManager *viewControllerManager;
- (void)_setUpDevelopmentUI;
- (_Bool)_shouldSetUpDevelopmentUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

