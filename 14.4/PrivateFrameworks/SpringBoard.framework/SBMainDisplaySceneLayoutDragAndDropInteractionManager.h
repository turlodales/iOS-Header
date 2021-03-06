//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSTransactionObserver-Protocol.h>
#import <SpringBoard/SBApplicationDropSessionSceneProviding-Protocol.h>
#import <SpringBoard/SBDragAndDropAppActivationWorkspaceTransactionDelegate-Protocol.h>
#import <SpringBoard/UIDragInteractionDelegate_ForWebKitOnly-Protocol.h>
#import <SpringBoard/UIDragInteractionDelegate_Private-Protocol.h>
#import <SpringBoard/UIDropInteractionDelegate_Private-Protocol.h>

@class NSMapTable, NSString, SBDragAndDropAppActivationWorkspaceTransaction, SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, SBWindowDragInteraction, UIDropInteraction;
@protocol SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, UIDragSession;

@interface SBMainDisplaySceneLayoutDragAndDropInteractionManager : NSObject <BSTransactionObserver, SBApplicationDropSessionSceneProviding, UIDropInteractionDelegate_Private, UIDragInteractionDelegate_Private, UIDragInteractionDelegate_ForWebKitOnly, SBDragAndDropAppActivationWorkspaceTransactionDelegate>
{
    _Bool _windowDragHandledByDruid;
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    id <SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
    SBDragAndDropAppActivationWorkspaceTransaction *_activeTransaction;
    NSMapTable *_activeDropSessions;
    SBWindowDragInteraction *_windowDragInteraction;
    id <UIDragSession> _windowDragSession;
    CDUnknownBlockType _windowDragSessionPrepareCompletionBlock;
    NSString *_windowDragSceneIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool windowDragHandledByDruid; // @synthesize windowDragHandledByDruid=_windowDragHandledByDruid;
@property(retain, nonatomic) NSString *windowDragSceneIdentifier; // @synthesize windowDragSceneIdentifier=_windowDragSceneIdentifier;
@property(copy, nonatomic) CDUnknownBlockType windowDragSessionPrepareCompletionBlock; // @synthesize windowDragSessionPrepareCompletionBlock=_windowDragSessionPrepareCompletionBlock;
@property(retain, nonatomic) id <UIDragSession> windowDragSession; // @synthesize windowDragSession=_windowDragSession;
@property(retain, nonatomic) SBWindowDragInteraction *windowDragInteraction; // @synthesize windowDragInteraction=_windowDragInteraction;
@property(retain, nonatomic) NSMapTable *activeDropSessions; // @synthesize activeDropSessions=_activeDropSessions;
@property(retain, nonatomic) SBDragAndDropAppActivationWorkspaceTransaction *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(readonly, nonatomic) __weak id <SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property(readonly, nonatomic) __weak SBFluidSwitcherViewController *mainSwitcherContentController; // @synthesize mainSwitcherContentController=_mainSwitcherContentController;
- (void)transactionDidComplete:(id)arg1;
- (_Bool)_workspaceWouldAllowTransitionToApplication:(id)arg1;
- (void)_dismissInlineAppExposeIfNeeded;
- (void)_beginTrackingDropSessionIfNeeded:(id)arg1;
- (_Bool)_anyActiveAndVisibleSceneEntityMatches:(CDUnknownBlockType)arg1;
- (id)_activeAndVisibleSceneIdentifiersForApplication:(id)arg1;
- (id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_windowDragSessionDidEnd;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)preferredSceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 preferNewScene:(_Bool)arg3;
- (id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)arg1;
- (id)newSceneIdentityForApplication:(id)arg1;
- (_Bool)isApplicationActiveAndVisible:(id)arg1;
- (void)dragAndDropTransaction:(id)arg1 didEndGesture:(id)arg2;
- (void)dragAndDropTransaction:(id)arg1 didUpdateGesture:(id)arg2;
- (void)dragAndDropTransaction:(id)arg1 didBeginGesture:(id)arg2;
- (void)handleWindowDragGestureRecognizer:(id)arg1;
- (_Bool)shouldBeginWindowDragGesture;
- (void)dealloc;
- (id)initWithMainSwitcherContentController:(id)arg1 sceneLayoutViewController:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

