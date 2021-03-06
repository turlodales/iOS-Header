//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import <EventKitUI/EKEditItemViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKTravelRouteEstimationControllerDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKCalendarItem, EKEventStore, EKStructuredLocation, EKTravelRouteEstimationController, NSDate, NSIndexPath, NSString, UISwitch, UITableView, UIView;

@interface EKEventTravelTimeEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKTravelRouteEstimationControllerDelegate, EKEditItemViewControllerDelegate>
{
    struct CGRect _initFrame;
    EKCalendarItem *_calendarItem;
    EKEventStore *_eventStore;
    UITableView *_table;
    NSIndexPath *_checkedItem;
    UISwitch *_switchControl;
    long long _travelTimeSelectedChoice;
    double _customTravelTimeDuration;
    _Bool _estimationGroupIsShowing;
    _Bool _customTimesGroupIsShowing;
    _Bool _externallySetValueGroupIsShowing;
    _Bool _isAnimatingTableSections;
    _Bool _pendingReloadData;
    NSString *_routeEstimationErrorMessage;
    _Bool _isOriginSelectionVisible;
    _Bool _suppressErrors;
    _Bool _estimatedRowIsChecked;
    EKTravelRouteEstimationController *_routeEstimationControler;
    long long _selectedRoutingMode;
    long long _originalSelectedRoutingMode;
    double _originalSelectedTravelTime;
    UIView *_shadowView;
    double _selectedTravelTime;
    NSDate *_arrivalDate;
    EKStructuredLocation *_originStructuredLocation;
    EKStructuredLocation *_destinationStructuredLocation;
}

+ (id)_directionsCouldNotBeFoundLocalizedString;
+ (id)_okLocalizedString;
+ (id)_cannotProvideDirectionsLocalizedString;
+ (id)_startingLocationLocalizedString;
+ (id)_travelTimeLocalizedString;
- (void).cxx_destruct;
@property(retain, nonatomic) EKStructuredLocation *destinationStructuredLocation; // @synthesize destinationStructuredLocation=_destinationStructuredLocation;
@property(retain, nonatomic) EKStructuredLocation *originStructuredLocation; // @synthesize originStructuredLocation=_originStructuredLocation;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(nonatomic) double selectedTravelTime; // @synthesize selectedTravelTime=_selectedTravelTime;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setCell:(id)arg1 checked:(_Bool)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)_numberOfEstimatedTravelTimeResultRows;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (unsigned long long)_externallySetValueTravelTimeSection;
- (unsigned long long)_customTravelTimeSection;
- (unsigned long long)_estimatedTravelTimeSection;
- (unsigned long long)_toggleSwitchSection;
- (id)_indexPathForSelectedTravelTime;
- (long long)travelTimeSelectedChoice;
- (void)setTravelTimeSelectedChoice:(long long)arg1;
- (_Bool)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(unsigned long long)arg1;
- (void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;
- (void)_checkItemAtIndexPath:(id)arg1;
- (id)_errorStringForMapKitErrorCode:(unsigned long long)arg1;
- (void)_handleEstimationControllerTravelTimeLookupErrors;
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg1;
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg1;
- (void)_travelTimeActivationSwitchChanged:(id)arg1;
- (void)_setEstimationActive:(_Bool)arg1;
- (void)_showRouteEstimationAlert;
- (id)_routeEstimationControler;
- (void)_handleOriginLocationErrorsWithAlert:(_Bool)arg1;
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg1;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (void)_locationsChanged;
- (void)_originLocationButtonWasTapped;
- (id)_stringForOriginLocation;
@property(nonatomic) long long selectedRoutingMode;
- (void)_updateTableView;
- (void)_autoselectFromAvailableChoices;
- (void)_updateVisibleSections;
- (_Bool)_showingOptions;
- (_Bool)_showingOptionsInitialState;
- (_Bool)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;
- (void)_layoutShadowView;
- (void)_contentCategorySizeChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

