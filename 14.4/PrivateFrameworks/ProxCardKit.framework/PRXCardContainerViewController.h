//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ProxCardKit/PRXCardContainerViewDelegate-Protocol.h>
#import <ProxCardKit/PRXPullDismissalProvider-Protocol.h>
#import <ProxCardKit/UINavigationControllerDelegate-Protocol.h>

@class NSString, PRXCardContainerView, PRXFlowConfiguration, PRXPullDismissalInteractionDriver, PRXTransitioningController, UINavigationController;
@protocol PRXFlowDelegate;

@interface PRXCardContainerViewController : UIViewController <PRXPullDismissalProvider, PRXCardContainerViewDelegate, UINavigationControllerDelegate>
{
    PRXTransitioningController *_transitionController;
    PRXCardContainerView *_container;
    UINavigationController *_mainNavigationController;
    struct NSDirectionalEdgeInsets _containerLayoutMargins;
    _Bool _legacyCard;
    PRXPullDismissalInteractionDriver *_pullDismissalInteractionDriver;
    PRXFlowConfiguration *_configuration;
    UIViewController *_contentViewController;
    id <PRXFlowDelegate> _flowDelegate;
    CDUnknownBlockType _didShowViewController;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didShowViewController; // @synthesize didShowViewController=_didShowViewController;
@property(nonatomic) __weak id <PRXFlowDelegate> flowDelegate; // @synthesize flowDelegate=_flowDelegate;
@property(readonly, nonatomic) UINavigationController *mainNavigationController; // @synthesize mainNavigationController=_mainNavigationController;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) PRXFlowConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver; // @synthesize pullDismissalInteractionDriver=_pullDismissalInteractionDriver;
- (void)backgroundTapped:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)_canShowWhileLocked;
- (_Bool)_shouldLayoutViewControllerBeforeCalculatingSize:(id)arg1;
- (void)_updateContainerPreferredContentSize;
- (void)_updatePreferredContentSizeForViewController:(id)arg1 containerSize:(struct CGSize)arg2;
- (void)_updateCardSizeClassForContainerSize:(struct CGSize)arg1;
- (long long)_cardStyleForContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize)_maximumCardSizeForContainerSize:(struct CGSize)arg1;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initAsSingleCardWithContentViewController:(id)arg1 containerLayoutMargins:(struct NSDirectionalEdgeInsets)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

