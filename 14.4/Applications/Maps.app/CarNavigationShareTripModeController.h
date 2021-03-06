//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"
#import "CarChromeModeController-Protocol.h"
#import "CarFocusOrderCollection-Protocol.h"
#import "CarShareTripContactCellDelegate-Protocol.h"
#import "MSPSharedTripServiceSendingObserver-Protocol.h"
#import "MapsUITableViewDiffableDataSourceCellProviding-Protocol.h"
#import "PassThroughViewControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CarChromeViewController, CarMapTrackingController, CarTableView, MSPSharedTripSharingIdentity, NSArray, NSMutableDictionary, NSString, NSTimer, PassThroughViewController, SharedTripSuggestionsDataSource, UILabel, UIView;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarNavigationShareTripModeController : UIViewController <PassThroughViewControllerDelegate, UITableViewDelegate, CarCardContent, CarFocusOrderCollection, MapsUITableViewDiffableDataSourceCellProviding, CarShareTripContactCellDelegate, MSPSharedTripServiceSendingObserver, CarChromeModeController>
{
    PassThroughViewController *_viewController;
    CarTableView *_tableView;
    SharedTripSuggestionsDataSource *_dataSource;
    NSTimer *_dismissTimer;
    NSMutableDictionary *_cellsByContactStringValue;
    _Bool _userInteracted;
    MSPSharedTripSharingIdentity *_sharingIdentity;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    CarChromeViewController *_chromeViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
- (int)backButtonUsageActionToMode:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_attemptToStartShareWithContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)carShareTripContactCellDidFinishRingAnimation:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;
- (void)_updateWithSharingIdentity:(id)arg1;
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;
- (void)_commitPendingShares;
- (void)_cancelDismiss;
- (void)_dismissAfterDelay;
- (void)_toggleSharingForContactAtIndexPath:(id)arg1;
- (void)_externalDeviceUpdated:(id)arg1;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (void)carCardViewCloseButtonTapped:(id)arg1;
- (void)configureCard:(id)arg1 forKey:(id)arg2;
- (id)desiredCards;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) UIView *passThroughView;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) _Bool showsMapView;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)_updateSharingFooterWithIdentity:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupTableFooterView;
- (void)_setupTableHeaderView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly, nonatomic) _Bool showsCameraToggleButton;
@property(readonly, nonatomic) _Bool showsExplicitPanButton;
@property(readonly, nonatomic) _Bool showsFloatingControls;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsMapViewForTransitions;
@property(readonly, nonatomic) _Bool showsNavPanRecenterButton;
@property(readonly, nonatomic) _Bool showsNavigationBar;
@property(readonly, nonatomic) _Bool showsReportIncidentButton;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsZoomControls;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) _Bool usesDefaultTransitions;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

