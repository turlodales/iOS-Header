//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUSoftwareUpdateItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>

@class HUSoftwareUpdateItemModuleController, HUSoftwareUpdateStandaloneItemManager, NAFuture, NSString;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate>
{
    _Bool _showDoneButtonInNavBar;
    _Bool _allowRefresh;
    HUSoftwareUpdateItemModuleController *_softwareUpdateItemModuleController;
    NAFuture *_softwareUpdateFetchFuture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowRefresh; // @synthesize allowRefresh=_allowRefresh;
@property(retain, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;
@property(retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController; // @synthesize softwareUpdateItemModuleController=_softwareUpdateItemModuleController;
@property(nonatomic) _Bool showDoneButtonInNavBar; // @synthesize showDoneButtonInNavBar=_showDoneButtonInNavBar;
- (id)keyCommands;
- (void)_kickoffSoftwareUpdate;
- (void)_triggerRefresh:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)doneButtonPressed:(id)arg1;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)itemModuleControllers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUSoftwareUpdateStandaloneItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

