//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactPickerDelegate-Protocol.h>

@class CNContactPickerViewController, UIViewController;

@protocol CNContactPickerPrivateDelegate <CNContactPickerDelegate>

@optional
- (UIViewController *)contactPickerPresentedViewController:(CNContactPickerViewController *)arg1;
- (void)pickerDidSelectAddNewContact:(CNContactPickerViewController *)arg1;
@end

