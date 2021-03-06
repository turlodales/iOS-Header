//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"
#import "CarKeyboardResultsProviding-Protocol.h"
#import "CarShareTripContactCellDelegate-Protocol.h"
#import "MSPSharedTripServiceSendingObserver-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CarKeyboardModeController, CarTableView, MSPSharedTripSharingIdentity, NSArray, NSMutableDictionary, NSOrderedSet, NSSet, NSString, NSTimer, SharedTripSuggestionsDataSource;

__attribute__((visibility("hidden")))
@interface CarShareTripKeyboardSearchController : UIViewController <UITableViewDelegate, UITableViewDataSource, MSPSharedTripServiceSendingObserver, CarShareTripContactCellDelegate, CarCardContent, CarKeyboardResultsProviding>
{
    CarTableView *_tableView;
    NSString *_inputText;
    NSOrderedSet *_matches;
    MSPSharedTripSharingIdentity *_sharingIdentity;
    NSSet *_alreadySharingHandles;
    SharedTripSuggestionsDataSource *_dataSource;
    NSTimer *_dismissTimer;
    NSMutableDictionary *_cellsByContactStringValue;
    _Bool _userInteracted;
    CDUnknownBlockType _searchHandler;
    CarKeyboardModeController *_keyboardMode;
    CDUnknownBlockType _dismissHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) __weak CarKeyboardModeController *keyboardMode; // @synthesize keyboardMode=_keyboardMode;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_attemptToStartShareWithContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)_commitShareForCellAtIndexPath:(id)arg1;
- (void)carShareTripContactCellDidFinishRingAnimation:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_commitPendingShares;
- (void)_cancelDismiss;
- (void)_dismissAfterDelay;
- (void)_toggleSharingForContactAtIndexPath:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)handleCancelButtonPressed;
- (void)handleSearchButtonPressedWithText:(id)arg1;
- (void)handleSearchTextDidChange:(id)arg1;
- (void)updateForInteractionModel:(unsigned long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContactSearchResults:(id)arg1 dataSource:(id)arg2 searchHandler:(CDUnknownBlockType)arg3;
- (id)initWithContactSearchResults:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end

