//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UINavigationBarDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerCoordinatorDelegate-Protocol.h>
#import <WorkflowUI/WFComposeFlowControllerDelegate-Protocol.h>
#import <WorkflowUI/WFContentClassesViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFDragCoordinator-Protocol.h>
#import <WorkflowUI/WFDrawerControllerDelegate-Protocol.h>
#import <WorkflowUI/WFEditWorkflowViewControllerDelegate-Protocol.h>
#import <WorkflowUI/WFVariableUIDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowSettingsViewControllerDelegate-Protocol.h>

@class NSArray, NSHashTable, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, UINavigationController, UITraitCollection, UIView, WFActionDrawerCoordinator, WFComposeFlowController, WFComposeUserActivityManager, WFDatabase, WFDrawerController, WFEditWorkflowViewController, WFEditorViewController, WFRunWorkflowToolbar, WFWorkflow, WFWorkflowSettingsLayoutMetrics;
@protocol WFComposeViewControllerDelegate, WFComposeViewControllerPresenter, WFModuleDelegate;

@interface WFComposeViewController : UIViewController <WFVariableUIDelegate, WFDrawerControllerDelegate, WFComposeFlowControllerDelegate, WFWorkflowSettingsViewControllerDelegate, WFContentClassesViewControllerDelegate, WFActionDrawerCoordinatorDelegate, UINavigationBarDelegate, WFEditWorkflowViewControllerDelegate, WFDragCoordinator>
{
    _Bool _actionsHidden;
    _Bool _shouldShowShareButton;
    _Bool _observingSharingEnabledUserDefault;
    _Bool _isNewShortcutFlow;
    unsigned long long _visibleToolbarPlacement;
    WFWorkflow *_workflow;
    WFEditWorkflowViewController *_workflowViewController;
    double _bottomContentInset;
    id <WFComposeViewControllerPresenter> _presenter;
    id <WFComposeViewControllerDelegate> _delegate;
    WFDatabase *_database;
    UIButton *_settingsButton;
    UIView *_separatorView;
    NSHashTable *_movedDragControllers;
    UITraitCollection *_upcomingTraitCollection;
    WFComposeUserActivityManager *_userActivityManager;
    NSMutableArray *_editingStates;
    WFRunWorkflowToolbar *_toolbar;
    NSLayoutConstraint *_bottomToolbarBottomAnchor;
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    WFActionDrawerCoordinator *_drawerCoordinator;
    UILabel *_titleViewLabel;
    UIButton *_titleViewSettingsButton;
    UIButton *_titleAccessorySettingsButton;
    UINavigationController *_drawerNavigationController;
    unsigned long long _preHideVisibility;
    WFComposeFlowController *_flowController;
    WFEditorViewController *_editorViewController;
    WFDrawerController *_drawerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFDrawerController *drawerController; // @synthesize drawerController=_drawerController;
@property(retain, nonatomic) WFEditorViewController *editorViewController; // @synthesize editorViewController=_editorViewController;
@property(retain, nonatomic) WFComposeFlowController *flowController; // @synthesize flowController=_flowController;
@property(nonatomic) unsigned long long preHideVisibility; // @synthesize preHideVisibility=_preHideVisibility;
@property(retain, nonatomic) UINavigationController *drawerNavigationController; // @synthesize drawerNavigationController=_drawerNavigationController;
@property(retain, nonatomic) UIButton *titleAccessorySettingsButton; // @synthesize titleAccessorySettingsButton=_titleAccessorySettingsButton;
@property(retain, nonatomic) UIButton *titleViewSettingsButton; // @synthesize titleViewSettingsButton=_titleViewSettingsButton;
@property(retain, nonatomic) UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(retain, nonatomic) WFActionDrawerCoordinator *drawerCoordinator; // @synthesize drawerCoordinator=_drawerCoordinator;
@property(nonatomic) _Bool isNewShortcutFlow; // @synthesize isNewShortcutFlow=_isNewShortcutFlow;
@property(retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(nonatomic) _Bool observingSharingEnabledUserDefault; // @synthesize observingSharingEnabledUserDefault=_observingSharingEnabledUserDefault;
@property(nonatomic) _Bool shouldShowShareButton; // @synthesize shouldShowShareButton=_shouldShowShareButton;
@property(retain, nonatomic) NSLayoutConstraint *bottomToolbarBottomAnchor; // @synthesize bottomToolbarBottomAnchor=_bottomToolbarBottomAnchor;
@property(retain, nonatomic) WFRunWorkflowToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(readonly, nonatomic) _Bool actionsHidden; // @synthesize actionsHidden=_actionsHidden;
@property(readonly, nonatomic) NSMutableArray *editingStates; // @synthesize editingStates=_editingStates;
@property(retain, nonatomic) WFComposeUserActivityManager *userActivityManager; // @synthesize userActivityManager=_userActivityManager;
@property(retain, nonatomic) UITraitCollection *upcomingTraitCollection; // @synthesize upcomingTraitCollection=_upcomingTraitCollection;
@property(readonly, nonatomic) NSHashTable *movedDragControllers; // @synthesize movedDragControllers=_movedDragControllers;
@property(readonly, nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) __weak UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WFComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WFComposeViewControllerPresenter> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(readonly, nonatomic) WFEditWorkflowViewController *workflowViewController; // @synthesize workflowViewController=_workflowViewController;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (long long)positionForBar:(id)arg1;
- (void)redoLastWorkflowEdit;
- (void)undoLastWorkflowEdit;
- (void)searchActions;
- (void)stopWorkflow;
- (void)runWorkflowFromKeyPress;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (id)actionDrawerCoordinator:(id)arg1 replacementActionForDescriptionOfAction:(id)arg2;
- (void)actionDrawerCoordinator:(id)arg1 didAppendAction:(id)arg2;
- (void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2;
- (void)composeFlowControllerDidFinishEditing:(id)arg1;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)settingsViewControllerWantsToKnowIfNewShortcutFlow:(id)arg1;
- (void)settingsViewControllerWantsWorkflowReload:(id)arg1;
- (id)runWorkflowToolbarForWorkflowViewController:(id)arg1;
- (void)workflowViewControllerRequestsSettings:(id)arg1;
- (_Bool)isDrawerAvailableForWorkflowViewController:(id)arg1;
- (id)workflowViewController:(id)arg1 displayableErrorForError:(id)arg2;
- (void)workflowViewControllerRequestsActionDrawer:(id)arg1;
- (void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4 continueHandler:(CDUnknownBlockType)arg5;
- (void)workflowViewControllerWillRun:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)workflowViewControllerDidRemoveAction:(id)arg1;
- (void)workflowViewControllerDidAddAction:(id)arg1;
- (void)workflowViewControllerInvalidatedSuggestions:(id)arg1;
- (void)workflowViewControllerRequestsShareWorkflow:(id)arg1 sender:(id)arg2;
- (void)workflowViewControllerRequestsDocumentation:(id)arg1 action:(id)arg2 sender:(id)arg3;
- (void)workflowViewControllerRequestsContentClassesEditor:(id)arg1 sender:(id)arg2;
- (void)workflowViewControllerRequestsTutorial:(id)arg1;
- (void)workflowViewControllerRequestsDismissal:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
- (void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) id <WFModuleDelegate> moduleDelegate;
@property(readonly, nonatomic) NSArray *scrollViewsAffectingDrag;
@property(readonly, nonatomic) NSArray *participatingViewControllers;
@property(readonly, nonatomic) UIView *containerView;
- (void)drawerController:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (id)dismissingScrollViewForDrawerController:(id)arg1;
- (void)setActionsHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateScrollsToTop;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)scrollToAction:(id)arg1;
- (void)shareWorkflowWithSender:(id)arg1;
- (void)presentSettingsViewController;
- (id)home;
- (id)myShortcutsBarButtonItem;
- (id)cancelBarButtonItem;
- (id)doneBarButtonItem;
- (void)adjustLargeTitleSize;
- (void)updateNavigationBarStateAnimated:(_Bool)arg1;
- (void)setEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateEditingStateAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)popEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pushEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long editingState;
- (void)didTapCancel:(id)arg1;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishEditingAndDismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishEditing;
- (void)beginEditing;
- (void)didTapDone;
- (void)didTapNext;
- (id)emptyStateString;
- (id)drawerViewController;
- (void)setupDrawerIfNeeded;
- (void)updateShareButtonVisibility;
- (void)updateToolbarVisibility;
- (void)updateDrawerVisibility;
- (void)updateBottomContentInsetForVisibility:(unsigned long long)arg1;
- (_Bool)shouldUseOverlaidDrawer;
- (id)workflowEditorViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
@property(nonatomic) unsigned long long visibleToolbarPlacement; // @synthesize visibleToolbarPlacement=_visibleToolbarPlacement;
- (void)updateTitleItemIfNeeded;
- (void)layoutTitleView;
- (void)updateTitleView:(id)arg1;
@property(readonly, nonatomic) unsigned long long navigationUpdateBehavior;
- (id)settingsButtonWithConfiguration:(id)arg1;
- (void)setUpToolbar;
- (void)dealloc;
- (void)loadView;
- (void)updateUserActivityState:(id)arg1;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 shouldShowShareButton:(_Bool)arg3 workflowViewControllerClass:(Class)arg4;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

