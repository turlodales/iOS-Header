//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFWorkflowControllerDelegate-Protocol.h>

@class NSString, WFWorkflowController;

@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate>
{
    WFWorkflowController *_workflowController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WFWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
- (id)targetContentAttribution;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (_Bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finishRunningWithError:(id)arg1;
- (void)cancel;
- (void)stop;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)getHandoffWorkflowControllerState:(CDUnknownBlockType)arg1;
- (void)setHandoffWorkflowControllerState:(id)arg1;
- (id)getWorkflowWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

