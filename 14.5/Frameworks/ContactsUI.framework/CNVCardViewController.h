//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactNavigationControllerDelegate-Protocol.h>

@class CNContactNavigationController, NSArray, NSString;
@protocol CNVCardViewControllerDelegate;

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate>
{
    id <CNVCardViewControllerDelegate> _delegate;
    NSArray *_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak id <CNVCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CNContactNavigationController *contactNavigationController;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3;
- (void)viewDidLoad;
- (id)initWithVCardData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

