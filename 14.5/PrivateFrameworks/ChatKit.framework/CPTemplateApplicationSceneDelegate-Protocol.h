//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/UISceneDelegate-Protocol.h>

@class CPInterfaceController, CPManeuver, CPNavigationAlert, CPTemplateApplicationScene, CPWindow;

@protocol CPTemplateApplicationSceneDelegate <UISceneDelegate>

@optional
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectManeuver:(CPManeuver *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didSelectNavigationAlert:(CPNavigationAlert *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didDisconnectInterfaceController:(CPInterfaceController *)arg2 fromWindow:(CPWindow *)arg3;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2;
- (void)templateApplicationScene:(CPTemplateApplicationScene *)arg1 didConnectInterfaceController:(CPInterfaceController *)arg2 toWindow:(CPWindow *)arg3;
@end

