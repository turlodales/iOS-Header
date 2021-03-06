//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MainViewController.h"

#import "EKEventViewDelegate-Protocol.h"
#import "EKEventViewDelegatePrivate-Protocol.h"
#import "ListTableViewDelegate-Protocol.h"
#import "MainViewControllerOptionalMethods-Protocol.h"
#import "UIContextMenuInteractionDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CalendarModel, EKCalendarDate, EKEvent, EKUIRecurrenceAlertController, ListTableView, NSDate, NSIndexPath, NSString, NSTimer, NSUserActivity, UITableView, UITargetedPreview, UITraitCollection;
@protocol ListViewControllerDelegate, UIInteraction;

@interface ListViewController : MainViewController <UITableViewDataSource, ListTableViewDelegate, EKEventViewDelegatePrivate, EKEventViewDelegate, UIContextMenuInteractionDelegate, MainViewControllerOptionalMethods, UISearchBarDelegate, UITableViewDelegate>
{
    NSDate *_currentYearStart;
    NSDate *_currentYearEnd;
    NSIndexPath *_swipedRow;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    NSUserActivity *_userActivity;
    _Bool _needsRefresh;
    _Bool _isVisible;
    EKCalendarDate *_dateToShowWhenVisible;
    _Bool _editorDismissedFromDelete;
    _Bool _needsTableReload;
    NSTimer *_selectionTimer;
    NSDate *_firstVisibleDate;
    id <UIInteraction> _contextMenuInteraction;
    UITargetedPreview *_targetedPreview;
    _Bool _allowExtendedHeightCells;
    _Bool _preventRotation;
    _Bool _preventScrollingForNextViewAppear;
    _Bool _overrideExtendedEdges;
    _Bool _showFilteredData;
    _Bool _occurrenceCacheIsUnavailable;
    CalendarModel *_model;
    id <ListViewControllerDelegate> _delegate;
    unsigned long long _destination;
    EKEvent *_currentSelectedEvent;
    ListTableView *_tableView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool occurrenceCacheIsUnavailable; // @synthesize occurrenceCacheIsUnavailable=_occurrenceCacheIsUnavailable;
@property(nonatomic) _Bool showFilteredData; // @synthesize showFilteredData=_showFilteredData;
@property(retain, nonatomic) ListTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) EKEvent *currentSelectedEvent; // @synthesize currentSelectedEvent=_currentSelectedEvent;
@property(nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id <ListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool overrideExtendedEdges; // @synthesize overrideExtendedEdges=_overrideExtendedEdges;
@property(nonatomic) _Bool preventScrollingForNextViewAppear; // @synthesize preventScrollingForNextViewAppear=_preventScrollingForNextViewAppear;
@property(nonatomic) _Bool preventRotation; // @synthesize preventRotation=_preventRotation;
@property(nonatomic) _Bool allowExtendedHeightCells; // @synthesize allowExtendedHeightCells=_allowExtendedHeightCells;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)_deleteEventAtIndexPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_clearSwipedRow;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)_eventForRowAtIndexPath:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(_Bool)arg3;
- (void)eventViewControllerWillDisappear:(id)arg1;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)_stringForHeaderDate:(id)arg1;
- (_Bool)_isDateInCurrentYear:(id)arg1;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (id)formattedTemplateCellsWithReuseIdentifier:(id)arg1 hasTravelTime:(_Bool)arg2 isInvitation:(_Bool)arg3;
- (_Bool)_rowDrawsBackground:(id)arg1;
- (void)_updateSeparatorVisibilityForOccurrenceCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateSeparatorVisibilityForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_contentCategorySizeChangedNotification:(id)arg1;
- (void)_updateEstimatedTableHeightsForContentSizeCategory;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)_receivedSelectedDateChangeNotification:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_timeChangedSignificantly:(id)arg1;
- (void)_eventStoreChanged:(id)arg1;
- (void)_removeAllObservers;
- (void)_addAllObservers;
- (id)noContentStringForListTableView:(id)arg1;
- (void)updateSeparatorVisibiltyForSelectionChangeForRowAtIndexPath:(id)arg1;
- (id)_indexPathForEvent:(id)arg1;
- (void)selectEvent:(id)arg1 animated:(_Bool)arg2;
- (id)defaultEventForSelectedDate;
- (_Bool)_processScrollingMessagesOnEveryFrameFromListViewController;
- (void)_setTopVisibleDateAsSelectedDateAndUpdateBackButton;
- (double)contentInset;
- (void)_updateBackButtonOnBackViewControllerToDate:(id)arg1;
- (void)_setTopVisibleDateAsSelectedDate;
- (_Bool)shouldUpdateModelSelectedDate;
- (id)_indexPathForDate:(id)arg1;
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToTodayAnimated:(_Bool)arg1;
- (void)scrollToSelectedDateAnimated:(_Bool)arg1;
- (id)_dateForFirstTableRow;
- (id)_dateForFirstVisibleRow;
- (_Bool)_selectedDateIsVisible;
- (void)setNeedsRefresh:(_Bool)arg1;
- (void)refreshIfNeeded;
- (_Bool)_isVisible;
- (void)refresh;
@property(readonly, nonatomic) UITableView *tableViewForTesting;
- (_Bool)shouldPreserveDateAcrossRefresh;
- (_Bool)shouldAutoScrollToSelectedDateAfterFirstRefresh;
- (id)sceneTitle;
- (_Bool)showEventDetailsWhenNewEventAdded;
- (id)bestDateForNewEvent;
- (void)_selectTodayDate;
- (void)selectDate:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isTodayVisible;
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;
- (id)backButtonTitleForEventDetails;
- (void)_showEvent:(id)arg1 viewController:(id)arg2 animated:(_Bool)arg3 showComments:(_Bool)arg4;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 showComments:(_Bool)arg4 context:(id)arg5;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 showDetails:(_Bool)arg3 context:(id)arg4;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2 context:(id)arg3;
- (_Bool)allowsOverriddenToolbarItems;
- (_Bool)allowsOverriddenRightNavigationBarItems;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setUpViewConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 window:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UITraitCollection *futureTraitCollection;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransitioningTraitCollection;
@property(nonatomic) _Bool isWaitingForBackgroundLoadingOfSelectedEventOccurrenceView;
@property(readonly, nonatomic) _Bool shouldAdaptEventViewControllers;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

