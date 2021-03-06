//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PrototypeToolsUI/PTModuleObserver-Protocol.h>

@class NSString, PTModule, PTSettings;

@interface PTUIModuleController : UITableViewController <PTModuleObserver>
{
    PTModule *_module;
    NSString *_title;
    NSString *_rowTitle;
}

- (void).cxx_destruct;
- (void)showActionsForRowTableViewCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)moduleDidReload:(id)arg1;
- (void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3;
- (void)_updateTitle;
- (void)_reloadWithModule:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
@property(readonly, nonatomic) PTSettings *settings;
- (void)viewDidLayoutSubviews;
- (id)_initWithModule:(id)arg1 presentingRow:(id)arg2;
- (id)initWithSettings:(id)arg1 presentingRow:(id)arg2;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

