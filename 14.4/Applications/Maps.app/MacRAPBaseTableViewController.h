//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MacRAPBaseViewController.h"

#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface MacRAPBaseTableViewController : MacRAPBaseViewController <UITableViewDelegate>
{
    UITableView *_tableView;
    UIView *_tableViewFooter;
}

- (void).cxx_destruct;
@property(nonatomic) UIView *tableViewFooter; // @synthesize tableViewFooter=_tableViewFooter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 withTableViewFooter:(id)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

