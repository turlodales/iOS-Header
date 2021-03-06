//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FROfflineAwareViewControllerTransitionConductorDataSource-Protocol.h"
#import "FRViewControllerTransitionAnimationDataSource-Protocol.h"
#import "TSPresentable-Protocol.h"

@class FROfflineAwareViewControllerTransitionConductor, FRSearchResultsViewController, NSString, UISearchController;
@protocol FRFeldsparContext;

@interface FRSearchViewController : UIViewController <FROfflineAwareViewControllerTransitionConductorDataSource, FRViewControllerTransitionAnimationDataSource, TSPresentable>
{
    FRSearchResultsViewController *_searchResultsViewController;
    UISearchController *_searchController;
    FROfflineAwareViewControllerTransitionConductor *_transitionConductor;
    id <FRFeldsparContext> _context;
}

+ (id)searchViewControllerWithContext:(id)arg1 searchResultsPresenter:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FRFeldsparContext> context; // @synthesize context=_context;
@property(retain, nonatomic) FROfflineAwareViewControllerTransitionConductor *transitionConductor; // @synthesize transitionConductor=_transitionConductor;
@property(nonatomic) __weak UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) FRSearchResultsViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
- (void)presenterDidDisappear:(id)arg1;
- (void)presenterWillDisappear:(id)arg1;
- (void)presenterDidAppear:(id)arg1;
- (void)presenterWillAppear:(id)arg1;
- (id)offlineAwareViewControllerTransitionConductor:(id)arg1 offlineViewControllerForContentViewController:(id)arg2 offlineReason:(long long)arg3;
- (id)viewControllerTransitionConductor:(id)arg1 animationParametersForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)performSearch:(id)arg1;
- (void)setContext:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

