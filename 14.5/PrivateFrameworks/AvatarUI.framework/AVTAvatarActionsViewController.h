//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarActionsControllerDelegate-Protocol.h>
#import <AvatarUI/AVTToolBarDelegate-Protocol.h>
#import <AvatarUI/AVTUIControllerPresentationDelegate-Protocol.h>
#import <AvatarUI/UINavigationControllerDelegate-Protocol.h>

@class AVTAvatarEditorViewController, AVTAvatarInlineActionsController, AVTImageTransitioningContainerView, AVTToolBar, AVTUIEnvironment, AVTViewSession, AVTViewSessionProvider, NSString, UIImageView, UIStackView, UITapGestureRecognizer;
@protocol AVTAvatarActionsViewControllerDelegate, AVTAvatarActionsViewControllerLayout;

@interface AVTAvatarActionsViewController : UIViewController <AVTAvatarActionsControllerDelegate, UINavigationControllerDelegate, AVTToolBarDelegate, AVTUIControllerPresentationDelegate>
{
    _Bool _isAnimating;
    _Bool _allowFacetracking;
    id <AVTAvatarActionsViewControllerDelegate> _delegate;
    id <AVTAvatarActionsViewControllerLayout> _currentLayout;
    UIStackView *_buttonsView;
    AVTImageTransitioningContainerView *_avatarContainer;
    AVTToolBar *_toolbar;
    AVTAvatarInlineActionsController *_actionsController;
    AVTViewSessionProvider *_sessionProvider;
    AVTViewSession *_avtViewSession;
    CDUnknownBlockType _postSessionDidBecomeActiveHandler;
    UIImageView *_transitionImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    AVTUIEnvironment *_environment;
    AVTAvatarEditorViewController *_editorViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AVTAvatarEditorViewController *editorViewController; // @synthesize editorViewController=_editorViewController;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool allowFacetracking; // @synthesize allowFacetracking=_allowFacetracking;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
@property(copy, nonatomic) CDUnknownBlockType postSessionDidBecomeActiveHandler; // @synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(readonly, nonatomic) AVTViewSessionProvider *sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) AVTAvatarInlineActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) AVTToolBar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) AVTImageTransitioningContainerView *avatarContainer; // @synthesize avatarContainer=_avatarContainer;
@property(retain, nonatomic) UIStackView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain, nonatomic) id <AVTAvatarActionsViewControllerLayout> currentLayout; // @synthesize currentLayout=_currentLayout;
@property(nonatomic) __weak id <AVTAvatarActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)controllerPresentationWillObstructView:(id)arg1;
- (long long)interfaceOrientationForFaceTrackingManager:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)performTransitionAfterDeleteToRecord:(id)arg1 fromLeft:(_Bool)arg2 previousRecordImage:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (double)deleteMoveInDelay;
- (double)deleteMoveInDuration;
- (void)performTransitionAfterDuplicateToRecord:(id)arg1 previousRecordImage:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (double)duplicateScaleDelay;
- (double)duplicateScaleDuration;
- (void)actionsController:(id)arg1 presentAlertController:(id)arg2;
- (void)actionsControllerDidFinish:(id)arg1;
- (void)actionsControllerDidUpdateActions:(id)arg1;
- (void)actionsController:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)actionsController:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)actionsController:(id)arg1 didCancelEditingRecord:(id)arg2;
- (void)actionsController:(id)arg1 didEditRecord:(id)arg2;
- (void)actionsController:(id)arg1 didAddRecord:(id)arg2;
- (void)dismissEditorViewController:(id)arg1 forActionsController:(id)arg2 wasCreate:(_Bool)arg3 didEdit:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentEditorViewController:(id)arg1 forActionsController:(id)arg2 isCreate:(_Bool)arg3;
- (void)toolbar:(id)arg1 didSelectButton:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didTapDone:(id)arg1;
- (void)didTapAvatarView:(id)arg1;
- (void)createTransitionImageViewIfNeeded;
- (void)applyLayout:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)rebuildLayout;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets)additionalSafeAreaInsets;
- (void)beginUsingAVTViewFromSession:(id)arg1;
- (void)beginAVTViewSessionWithDidBeginBlock:(CDUnknownBlockType)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)configureNavigationItems;
- (void)layoutViewForActionsController;
- (void)viewDidLoad;
- (void)loadView;
- (void)configureAVTViewSession:(id)arg1 withAvatarRecord:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithAVTViewSessionProvider:(id)arg1 actionsController:(id)arg2 environment:(id)arg3;
- (void)performEdit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

