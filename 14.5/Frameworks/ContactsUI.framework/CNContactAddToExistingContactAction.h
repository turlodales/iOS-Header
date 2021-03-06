//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

#import <ContactsUI/CNContactPickerDelegate-Protocol.h>
#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>

@class CNContact, CNContactPickerViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddToExistingContactAction : CNContactAction <CNContactPickerDelegate, CNContactViewControllerDelegate>
{
    CNContact *_chosenContact;
    CNContactPickerViewController *_contactPicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNContactPickerViewController *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain, nonatomic) CNContact *chosenContact; // @synthesize chosenContact=_chosenContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)performActionWithSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

