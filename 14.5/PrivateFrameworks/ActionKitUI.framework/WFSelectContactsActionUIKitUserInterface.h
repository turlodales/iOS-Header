//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/CNContactPickerDelegate-Protocol.h>
#import <ActionKitUI/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <ActionKitUI/WFSelectContactsActionUserInterface-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WFSelectContactsActionUIKitUserInterface : WFActionUserInterface <WFSelectContactsActionUserInterface, CNContactPickerDelegate, UIAdaptivePresentationControllerDelegate>
{
    _Bool _selectMultiple;
    CDUnknownBlockType _completionHandler;
    NSArray *_contactProperties;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contactProperties; // @synthesize contactProperties=_contactProperties;
@property(nonatomic) _Bool selectMultiple; // @synthesize selectMultiple=_selectMultiple;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperties:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)finishWithContacts:(id)arg1 error:(id)arg2;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithProperties:(id)arg1 selectMultiple:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

