//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/UISearchControllerDelegate-Protocol.h>

@class NSArray, NSString, NSTimeZone, UISearchController;
@protocol EKTimeZoneViewControllerDelegate;

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate>
{
    UISearchController *_searchController;
    int _style;
    int _chooserStyle;
    id <EKTimeZoneViewControllerDelegate> _delegate;
    NSTimeZone *_timeZone;
    NSArray *_cities;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(readonly, nonatomic) int chooserStyle; // @synthesize chooserStyle=_chooserStyle;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) __weak id <EKTimeZoneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)willDismissSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithChooserStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

