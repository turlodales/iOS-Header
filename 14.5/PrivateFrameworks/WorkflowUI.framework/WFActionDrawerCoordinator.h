//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class NSString, UINavigationController, UIViewController, WFActionDrawerResults, WFActionDrawerResultsController, WFActionDrawerSiriSuggestionsViewController, WFActionDrawerState, WFActionDrawerViewController, WFDrawerController;
@protocol WFActionDrawerCoordinatorDelegate, WFActionDrawerResultsControlling;

@interface WFActionDrawerCoordinator : NSObject <UIPopoverPresentationControllerDelegate, WFActionDrawerStateConfigurable, WFActionDrawerStateRepresentable>
{
    id <WFActionDrawerCoordinatorDelegate> _delegate;
    WFActionDrawerResultsController *_resultsController;
    WFActionDrawerViewController *_drawerViewController;
    WFDrawerController *_drawerController;
    UINavigationController *_navigationController;
    WFActionDrawerResults *_siriSuggestionsResults;
    WFActionDrawerResults *_siriSuggestionsByIntentResults;
    WFActionDrawerSiriSuggestionsViewController *_siriSuggestionsViewController;
    id <WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
    UIViewController *_documentationPopoverViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *documentationPopoverViewController; // @synthesize documentationPopoverViewController=_documentationPopoverViewController;
@property(nonatomic) __weak id <WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate; // @synthesize actionDrawerResultsControllingDelegate=_actionDrawerResultsControllingDelegate;
@property(nonatomic) __weak WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController; // @synthesize siriSuggestionsViewController=_siriSuggestionsViewController;
@property(retain, nonatomic) WFActionDrawerResults *siriSuggestionsByIntentResults; // @synthesize siriSuggestionsByIntentResults=_siriSuggestionsByIntentResults;
@property(retain, nonatomic) WFActionDrawerResults *siriSuggestionsResults; // @synthesize siriSuggestionsResults=_siriSuggestionsResults;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak WFDrawerController *drawerController; // @synthesize drawerController=_drawerController;
@property(readonly, nonatomic) WFActionDrawerViewController *drawerViewController; // @synthesize drawerViewController=_drawerViewController;
@property(readonly, nonatomic) WFActionDrawerResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(nonatomic) __weak id <WFActionDrawerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
@property(readonly, nonatomic) WFActionDrawerState *state;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)responderDidBeginEditing:(id)arg1;
- (void)subscribeForTextEditingNotifications;
- (void)dismissDocumentationIfPresentedInPopoverAnimated:(_Bool)arg1;
- (void)presentResultsViewController:(id)arg1 visibility:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)presentResultsForAppWithBundleIdentifier:(id)arg1;
- (void)presentFavoritesViewControllerAnimated:(_Bool)arg1;
- (void)presentAppsViewControllerAnimated:(_Bool)arg1;
- (id)presentResultsViewControllerWithTitle:(id)arg1 results:(id)arg2 visibility:(unsigned long long)arg3 animated:(_Bool)arg4;
- (id)presentDescriptionForAction:(id)arg1 fromViewController:(id)arg2 view:(id)arg3 animated:(_Bool)arg4;
- (void)appendAction:(id)arg1;
- (void)reloadSiriSuggestions;
- (void)configureForDisplayingNavigationController:(id)arg1 withViewControllers:(id)arg2;
- (void)configureForDisplayingDrawerController:(id)arg1 withViewControllers:(id)arg2;
- (void)dealloc;
- (id)initWithResultsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

