//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/WFScanMachineReadableCodeActionUserInterface-Protocol.h>

@class NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface WFScanMachineReadableCodeActionUIKitUserInterface : WFActionUserInterface <WFScanMachineReadableCodeActionUserInterface>
{
    CDUnknownBlockType _completionHandler;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)finishWithCode:(id)arg1 error:(id)arg2;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

