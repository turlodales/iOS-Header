//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFVariable, WFVariableShortcutsBar;

@protocol WFVariableShortcutsBarDelegate <NSObject>
- (void)shortcutsBarDidSelectCustomButton:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBarDidSelectMagicVariable:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBar:(WFVariableShortcutsBar *)arg1 didSelectVariable:(WFVariable *)arg2;
- (void)shortcutsBarDidOpenTray:(WFVariableShortcutsBar *)arg1;
- (void)shortcutsBarDidDismiss:(WFVariableShortcutsBar *)arg1;
@end

