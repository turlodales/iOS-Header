//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SafariServices/UITextFieldDelegate-Protocol.h>

@class NSString, SFEditableTableViewCell, UIBarButtonItem;
@protocol SFAddPasswordViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFAddPasswordViewController : UITableViewController <UITextFieldDelegate>
{
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    id <SFAddPasswordViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SFAddPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_savePasswordAndDismiss;
- (void)_textFieldChanged:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

