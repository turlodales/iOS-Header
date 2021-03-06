//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthRecordsUI/HRWDTableViewSectionDelegate-Protocol.h>

@class HRProfile, NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface HRWDTableViewController : HKTableViewController <HRWDTableViewSectionDelegate>
{
    NSArray *_tableSections;
    HRProfile *_profile;
}

+ (id)tableViewSectionClasses;
- (void).cxx_destruct;
@property(retain) HRProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSArray *tableSections; // @synthesize tableSections=_tableSections;
- (void)sectionAddedChildViewController:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)reloadSection:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)indexPathForCell:(id)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (id)_section:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadTable;
- (void)viewDidLoad;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)_addObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) UITableView *tableView;

@end

