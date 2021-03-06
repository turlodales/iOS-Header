//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSString, UITextView;
@protocol ExtensionTextInputViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ExtensionTextInputViewController : UITableViewController
{
    id <ExtensionTextInputViewControllerDelegate> _inputDelegate;
    NSString *_titleText;
    NSString *_placeholderText;
    NSString *_initializedText;
    UITextView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *initializedText; // @synthesize initializedText=_initializedText;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) __weak id <ExtensionTextInputViewControllerDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(readonly, nonatomic) NSString *text;
- (void)doneButtonTapped:(id)arg1;
- (void)configureTextView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)configureTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 placeholderText:(id)arg2 text:(id)arg3;

@end

