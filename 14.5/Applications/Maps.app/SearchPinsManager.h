//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "POIShapeLoading-Protocol.h"
#import "VenueChangeObserver-Protocol.h"

@class CustomPOIsController, MKMapView, MapCameraController, MapSelectionManager, NSHashTable, NSString, PlaceCardLinkedPlacesItemSource, RouteStartEndItemSource, SearchPinsManagerShowSearchResultsAnimation, SearchResult, SearchResultsDebugOverlay, SearchResultsItemSource, VKLabelMarker, VenuesManager;
@protocol POIShape, SearchPinsManagerDelegate;

__attribute__((visibility("hidden")))
@interface SearchPinsManager : NSObject <POIShapeLoading, VenueChangeObserver>
{
    SearchResult *_hiddenStartPin;
    SearchPinsManagerShowSearchResultsAnimation *_showSearchResultsAnimation;
    VKLabelMarker *_selectedLabelMarker;
    id <POIShape> _startPOIShape;
    id <POIShape> _endPOIShape;
    NSHashTable *_poiShapeLoadingObservers;
    _Bool _useAlternateDirectionsPins;
    _Bool _hasAutoSelectedResult;
    SearchResult *_startPin;
    SearchResult *_endPin;
    SearchResult *_droppedPin;
    SearchResultsItemSource *_searchResultsItemSource;
    SearchResultsItemSource *_droppedPinsItemSource;
    SearchResultsItemSource *_collectionPinsItemSource;
    SearchResultsItemSource *_singleSearchResultItemSource;
    id <SearchPinsManagerDelegate> _delegate;
    RouteStartEndItemSource *_routeStartEndItemSource;
    PlaceCardLinkedPlacesItemSource *_placeCardLinkedPlacesItemSource;
    MapCameraController *_mapCameraController;
    CustomPOIsController *_customPOIsController;
    MapSelectionManager *_mapSelectionManager;
    VenuesManager *_venuesManager;
    SearchResultsDebugOverlay *_searchResultsDebugOverlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SearchResultsDebugOverlay *searchResultsDebugOverlay; // @synthesize searchResultsDebugOverlay=_searchResultsDebugOverlay;
@property(nonatomic) __weak VenuesManager *venuesManager; // @synthesize venuesManager=_venuesManager;
@property(nonatomic) __weak MapSelectionManager *mapSelectionManager; // @synthesize mapSelectionManager=_mapSelectionManager;
@property(nonatomic) __weak CustomPOIsController *customPOIsController; // @synthesize customPOIsController=_customPOIsController;
@property(retain, nonatomic) MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(readonly, nonatomic) PlaceCardLinkedPlacesItemSource *placeCardLinkedPlacesItemSource; // @synthesize placeCardLinkedPlacesItemSource=_placeCardLinkedPlacesItemSource;
@property(readonly, nonatomic) RouteStartEndItemSource *routeStartEndItemSource; // @synthesize routeStartEndItemSource=_routeStartEndItemSource;
@property(nonatomic) __weak id <SearchPinsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SearchResultsItemSource *singleSearchResultItemSource; // @synthesize singleSearchResultItemSource=_singleSearchResultItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *collectionPinsItemSource; // @synthesize collectionPinsItemSource=_collectionPinsItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *droppedPinsItemSource; // @synthesize droppedPinsItemSource=_droppedPinsItemSource;
@property(readonly, nonatomic) SearchResultsItemSource *searchResultsItemSource; // @synthesize searchResultsItemSource=_searchResultsItemSource;
@property(readonly, nonatomic) _Bool hasAutoSelectedResult; // @synthesize hasAutoSelectedResult=_hasAutoSelectedResult;
@property(readonly, nonatomic) _Bool useAlternateDirectionsPins; // @synthesize useAlternateDirectionsPins=_useAlternateDirectionsPins;
@property(readonly, nonatomic) SearchResult *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(readonly, nonatomic) SearchResult *endPin; // @synthesize endPin=_endPin;
@property(readonly, nonatomic) SearchResult *startPin; // @synthesize startPin=_startPin;
- (_Bool)_canDroppedPinBeVisibleInVenue;
- (void)_updateDroppedPinVisibility;
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;
- (void)_setPOIShape:(id)arg1 forStartOrEnd:(_Bool)arg2;
- (void)_startLoadingNewPOIShapeForStartOrEnd:(_Bool)arg1;
- (void)_startLoadingNewEndPOIShape;
- (void)_startLoadingNewStartPOIShape;
- (void)_notifyDidLoadStartPOIShape:(id)arg1 endPOIShape:(id)arg2;
- (void)_setEndPOIShape:(id)arg1;
- (void)_setStartPOIShape:(id)arg1;
- (void)removePOIShapeLoadingObserver:(id)arg1;
- (void)addPOIShapeLoadingObserver:(id)arg1;
@property(readonly, nonatomic) id <POIShape> endPOIShapeIfLoaded;
@property(readonly, nonatomic) id <POIShape> startPOIShapeIfLoaded;
- (void)clearLinkedPlacesAndPolygon;
- (void)showLinkedPlacesAndPolygonForPlaceCardItem:(id)arg1;
- (void)mapSelectionManagerDidDeselectSearchResult:(id)arg1;
- (void)selectAndShowSearchResult:(id)arg1 animated:(_Bool)arg2;
- (void)dropPinsForSearchResults:(id)arg1 animate:(_Bool)arg2;
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(_Bool)arg3 itemSource:(id)arg4;
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(_Bool)arg3;
- (void)selectLabelMarkerForSearchResult:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets carRecommendedMapPadding;
- (void)_completeShowSearchResultsAnimation;
- (void)_clearShowSearchResultsAnimation;
- (void)mapViewDidBecomeFullyDrawn;
- (void)_animateShowingSearchResults:(id)arg1 selectedSearchResult:(id)arg2 suggestedMapRegion:(id)arg3 minZoom:(id)arg4 maxZoom:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4 itemSource:(id)arg5;
- (void)setSearchPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4;
- (void)setCollectionsPinsFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4;
- (void)setSingleSearchPinFromSearchInfo:(id)arg1 scrollToResults:(_Bool)arg2 displayPlaceCardForResult:(id)arg3 animated:(_Bool)arg4;
- (_Bool)_isShowingDirectionsPins;
- (void)clearCollectionPins;
- (void)clearSingleResultPins;
- (void)clearDroppedPin;
- (void)clearSearchPins;
- (void)clearDirectionsPins;
- (void)_clearEndPin;
- (void)_clearStartPin;
- (_Bool)canSelectPin:(id)arg1;
- (void)selectDroppedPinIsAnimated:(_Bool)arg1;
- (void)setDroppedPin:(id)arg1 animated:(_Bool)arg2 shouldSelect:(_Bool)arg3;
- (void)setStartPin:(id)arg1 endPin:(id)arg2 useAlternateDirectionsPins:(_Bool)arg3;
- (void)setStartPin:(id)arg1 endPin:(id)arg2;
- (void)setSearchPins:(id)arg1 selectedPin:(id)arg2 animated:(_Bool)arg3;
- (id)_setOfPinsForPinType:(unsigned long long)arg1;
@property(readonly, nonatomic) MKMapView *mapView;
- (void)dealloc;
- (id)initWithMapViewCameraController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

