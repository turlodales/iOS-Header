//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIWindowSceneDelegate-Protocol.h"

@class NSSet, NSString, NSUserActivity, UIApplicationShortcutItem, UIWindow;
@protocol WFRootView;

@interface WFMainSceneDelegate : NSObject <UIWindowSceneDelegate>
{
    UIWindow *_window;
    id <WFRootView> _rootViewController;
    UIApplicationShortcutItem *_pendingShortcutItem;
    NSSet *_pendingOpenURLContexts;
    NSUserActivity *_pendingUserActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUserActivity *pendingUserActivity; // @synthesize pendingUserActivity=_pendingUserActivity;
@property(copy, nonatomic) NSSet *pendingOpenURLContexts; // @synthesize pendingOpenURLContexts=_pendingOpenURLContexts;
@property(retain, nonatomic) UIApplicationShortcutItem *pendingShortcutItem; // @synthesize pendingShortcutItem=_pendingShortcutItem;
@property(readonly, nonatomic) id <WFRootView> rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)showAlertWithError:(id)arg1;
- (id)topViewController;
- (_Bool)handleOpenURL:(id)arg1 options:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (_Bool)openFile:(id)arg1 sourceApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)openWorkflow:(id)arg1;
- (_Bool)scene:(id)arg1 handleUserActivityWithType:(id)arg2 webpageURL:(id)arg3 userInfo:(id)arg4 interaction:(id)arg5;
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (_Bool)handleShortcutItem:(id)arg1;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

