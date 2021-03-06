//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUITableViewController.h>

#import <SearchUI/SearchUIShowMoreSectionsDelegate-Protocol.h>
#import <SearchUI/SearchUITableHeaderViewDelegate-Protocol.h>
#import <SearchUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface SearchUIResultsTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIShowMoreSectionsDelegate>
{
    _Bool _shortenTopFloatingHeader;
    NSString *_queryString;
    NSMutableSet *_expandedSections;
    NSMutableSet *_sectionsThatHaveBeenExpanded;
    NSArray *_hiddenSections;
    NSMutableSet *_potentiallyVisibleCells;
    NSMutableOrderedSet *_latestVisibleResultsAccountedForInFeedback;
    unsigned long long _lastVisibleResultsFeedbackEvent;
    NSMutableOrderedSet *_potentiallyVisibleHeaders;
    NSArray *_latestVisibleHeadersAccountedForInFeedback;
    double _cachedHeaderHeight;
}

+ (void)fetchContactsIfNeededForTableModel:(id)arg1;
+ (id)hiddenSectionsFromSections:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double cachedHeaderHeight; // @synthesize cachedHeaderHeight=_cachedHeaderHeight;
@property(retain, nonatomic) NSArray *latestVisibleHeadersAccountedForInFeedback; // @synthesize latestVisibleHeadersAccountedForInFeedback=_latestVisibleHeadersAccountedForInFeedback;
@property(retain, nonatomic) NSMutableOrderedSet *potentiallyVisibleHeaders; // @synthesize potentiallyVisibleHeaders=_potentiallyVisibleHeaders;
@property(nonatomic) unsigned long long lastVisibleResultsFeedbackEvent; // @synthesize lastVisibleResultsFeedbackEvent=_lastVisibleResultsFeedbackEvent;
@property(retain, nonatomic) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback; // @synthesize latestVisibleResultsAccountedForInFeedback=_latestVisibleResultsAccountedForInFeedback;
@property(retain, nonatomic) NSMutableSet *potentiallyVisibleCells; // @synthesize potentiallyVisibleCells=_potentiallyVisibleCells;
@property(retain, nonatomic) NSArray *hiddenSections; // @synthesize hiddenSections=_hiddenSections;
@property(retain, nonatomic) NSMutableSet *sectionsThatHaveBeenExpanded; // @synthesize sectionsThatHaveBeenExpanded=_sectionsThatHaveBeenExpanded;
@property(retain, nonatomic) NSMutableSet *expandedSections; // @synthesize expandedSections=_expandedSections;
@property(nonatomic) _Bool shortenTopFloatingHeader; // @synthesize shortenTopFloatingHeader=_shortenTopFloatingHeader;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (_Bool)view:(id)arg1 isVisibleInBounds:(struct CGRect)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)sendVisibleFeedbackIfNecessary;
- (id)visibleResultsWithinRegion:(struct CGRect)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)modalViewControllerClosed;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setShouldUseInsetRoundedSections:(_Bool)arg1;
- (void)showMoreSectionsWithShowMoreButtonRowModel:(id)arg1;
- (void)performExpansion:(_Bool)arg1 withSectionIndex:(unsigned long long)arg2;
- (void)expandCellsIfNeeded;
- (void)viewWillAppear:(_Bool)arg1;
- (void)toggleExpansionForSection:(id)arg1;
- (double)offScreenContentScrollDistance;
@property(readonly, nonatomic) double headerHeight;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didEngageResult:(id)arg1;
- (id)commandEnvironment;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;
- (_Bool)sectionShouldBeExpanded:(id)arg1;
- (void)highlightResult:(id)arg1;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (void)scrollSectionToTop:(unsigned long long)arg1 animate:(_Bool)arg2;
- (_Bool)updateMustAccountForLayout;
- (void)scrollTableToTop;
- (void)purgeMemory;
- (void)updateWithResultSections:(id)arg1 scrollToTop:(_Bool)arg2;
- (void)purgeAndResetTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

