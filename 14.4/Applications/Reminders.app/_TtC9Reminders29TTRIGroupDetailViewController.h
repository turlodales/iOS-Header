//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MISSING_TYPE, NSUndoManager, UIBarButtonItem, UITableViewCell, UITextField;

@interface _TtC9Reminders29TTRIGroupDetailViewController : UITableViewController
{
    MISSING_TYPE *nameTextField;
    MISSING_TYPE *doneBarButtonItem;
    MISSING_TYPE *includeCell;
    MISSING_TYPE *presenter;
    MISSING_TYPE *style;
    MISSING_TYPE *localUndoManager;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)nameTextFieldDidChange:(id)arg1;
- (void)didTapCreate:(id)arg1;
- (void)didTapCancel:(id)arg1;
@property(nonatomic) __weak UITableViewCell *includeCell; // @synthesize includeCell;
@property(nonatomic) __weak UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem;
@property(nonatomic) __weak UITextField *nameTextField; // @synthesize nameTextField;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;

@end

