//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarChromeModeController-Protocol.h"
#import "CarSearchResultsCardDataSource-Protocol.h"
#import "CarSearchResultsCardDelegate-Protocol.h"
#import "CuratedCollectionResolverDelegate-Protocol.h"
#import "MKLocationManagerObserver-Protocol.h"
#import "SearchSessionObserver-Protocol.h"

@class BrowseCategory, BrowseManager, CLLocation, CarChromeViewController, CarMapTrackingController, CarSearchResultsCardViewController, CuratedCollectionResolver, CustomPOIsController, NSArray, NSString, PassThroughViewController, PersonalizedItemManager, SearchInfo, SearchPinsManager, SearchSession, UIViewController;
@protocol MapSelectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CarSearchResultsModeController : NSObject <SearchSessionObserver, CarSearchResultsCardDelegate, CarSearchResultsCardDataSource, CuratedCollectionResolverDelegate, MKLocationManagerObserver, CarChromeModeController>
{
    PassThroughViewController *_viewController;
    NSArray *_fullSearchResults;
    CLLocation *_lastFetchedFromLocation;
    NSArray *_visibleIndexPaths;
    NSArray *_lastFramedIndexPaths;
    _Bool _updatingVisibleResults;
    SearchPinsManager *_searchPinsManager;
    CustomPOIsController *_customPOIsController;
    PersonalizedItemManager *_itemManager;
    CuratedCollectionResolver *_curatedCollectionResolver;
    CarChromeViewController *_chromeViewController;
    NSArray *_searchResults;
    SearchInfo *_searchInfo;
    SearchSession *_searchSession;
    BrowseCategory *_category;
    BrowseManager *_browseManager;
    NSString *_cardTitle;
    CarSearchResultsCardViewController *_searchResultsCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CarSearchResultsCardViewController *searchResultsCard; // @synthesize searchResultsCard=_searchResultsCard;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(retain, nonatomic) BrowseManager *browseManager; // @synthesize browseManager=_browseManager;
@property(retain, nonatomic) BrowseCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) SearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(retain, nonatomic) SearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
- (int)backButtonUsageActionToMode:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (_Bool)_contentNeedsRefreshingForUpdatedLocation:(id)arg1;
- (void)_reloadContentIfNeededForUpdatedLocation:(id)arg1;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
- (void)didFailToResolveCollectionWithError:(id)arg1 withFetchedCollection:(id)arg2;
- (void)didResolveCollection:(id)arg1 collectionItems:(id)arg2;
- (void)searchSessionDidInvalidate:(id)arg1;
- (void)searchSessionDidFail:(id)arg1;
- (void)searchSessionDidChangeSearchResults:(id)arg1;
- (void)searchSessionWillPerformSearch:(id)arg1;
- (void)searchSessionDidChangeSearchFieldItem:(id)arg1;
- (void)searchResultsCard:(id)arg1 didSelectSearchResult:(id)arg2;
- (void)searchResultsCard:(id)arg1 didFocusSearchResult:(id)arg2 atIndexPath:(id)arg3;
- (void)searchResultsCardDidUpdateVisibleCells:(id)arg1;
- (void)_updateVisibleSearchResults;
- (void)_cardDidUpdateVisibleCells;
- (void)_highlightSearchResult:(id)arg1;
- (void)_fetchCategoryResults;
- (void)carCardViewCloseButtonTapped:(id)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeAnimated:(_Bool)arg1 fromMode:(id)arg2;
- (void)configureCard:(id)arg1 forKey:(id)arg2;
- (id)desiredCards;
- (void)configureFocusContainerGuideController:(id)arg1;
@property(readonly, nonatomic) _Bool showsMapView;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)_setup;
- (void)_setupForCuratedCollection:(id)arg1;
- (void)_setupForUserCollection:(id)arg1;
- (id)initWithCollection:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (id)initWithSearchResults:(id)arg1;
- (id)initWithSearchInfo:(id)arg1;
- (id)initWithSearchSession:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) id <MapSelectionManagerDelegate> mapSelectionManagerDelegate;
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) _Bool navigationTransitionShouldOccurImmediately;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
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

