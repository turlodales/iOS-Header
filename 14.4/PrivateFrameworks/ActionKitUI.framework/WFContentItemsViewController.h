//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFContentItemsViewController : UITableViewController
{
    _Bool _allowsCoercion;
    NSArray *_contentItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsCoercion; // @synthesize allowsCoercion=_allowsCoercion;
@property(retain, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

