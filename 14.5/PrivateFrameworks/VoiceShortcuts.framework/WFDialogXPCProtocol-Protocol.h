//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/NSObject-Protocol.h>

@class WFDialogAttribution, WFDialogRequest, WFWorkflowRunningContext;

@protocol WFDialogXPCProtocol <NSObject>
- (void)dismissPersistentChromeWithSuccess:(_Bool)arg1 customAttribution:(WFDialogAttribution *)arg2 completionHandler:(void (^)(void))arg3;
- (void)dismissPresentedContentWithCompletionHandler:(void (^)(void))arg1;
- (void)showDialogRequest:(WFDialogRequest *)arg1 completionHandler:(void (^)(WFDialogResponse *))arg2;
- (void)preparePersistentChromeWithContext:(WFWorkflowRunningContext *)arg1 attribution:(WFDialogAttribution *)arg2;
@end

