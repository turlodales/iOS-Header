//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class NSString, SiriUIKeyboardView;

@protocol SiriUIKeyboardViewDelegate <NSObject>
- (void)keyboardViewDidReceiveAudioRouteAction:(SiriUIKeyboardView *)arg1;
- (void)keyboardViewDidReceiveBugButtonLongPress:(SiriUIKeyboardView *)arg1;
- (void)keyboardViewDidReceiveReportBugAction:(SiriUIKeyboardView *)arg1;
- (void)keyboardViewDidReceiveHelpButtonAction:(SiriUIKeyboardView *)arg1;
- (void)keyboardView:(SiriUIKeyboardView *)arg1 didReceiveText:(NSString *)arg2;
@end

