//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

@class UIBarButtonItemGroup;

__attribute__((visibility("hidden")))
@interface UIExpandedBarItemsTableViewController : UITableViewController
{
    UIBarButtonItemGroup *_barButtonGroup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIBarButtonItemGroup *barButtonGroup; // @synthesize barButtonGroup=_barButtonGroup;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (id)_displayTitleForBarButtonItem:(id)arg1;
- (unsigned long long)_numberOfItems;
- (id)_visibleItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBarButtonGroup:(id)arg1;

@end

