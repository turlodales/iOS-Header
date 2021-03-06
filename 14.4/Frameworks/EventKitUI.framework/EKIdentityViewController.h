//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class CNContactStore, CNContactViewController;
@protocol EKEditItemViewControllerDelegate, EKIdentityProtocol;

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol>
{
    id <EKIdentityProtocol> _identity;
    CNContactViewController *_personViewController;
    CNContactStore *_store;
}

- (void).cxx_destruct;
- (void)setIdentity:(id)arg1;
- (void)loadView;
- (void)updateControllerWithContact:(id)arg1 isNew:(_Bool)arg2;
- (id)contactForIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (Class)_CNLabeledValueClass;
- (Class)_CNContactViewControllerClass;
- (Class)_CNMutableContactClass;
- (Class)_CNContactClass;
- (Class)_CNContactStoreClass;
- (id)CNLabelWork;
- (id)CNContactPhoneNumbersKey;
- (id)CNContactEmailAddressesKey;

// Remaining properties
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;
@property(nonatomic) _Bool useCustomBackButton;

@end

