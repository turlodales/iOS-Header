//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/SFSafariViewControllerDelegate-Protocol.h>
#import <ActionKitUI/WFShowWebPageActionUserInterface-Protocol.h>
#import <ActionKitUI/WFWebViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFShowWebPageActionUIKitUserInterface : WFActionUserInterface <WFWebViewControllerDelegate, SFSafariViewControllerDelegate, WFShowWebPageActionUserInterface>
{
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)webViewControllerDidFinish:(id)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showRichText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showURL:(id)arg1 readerView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

