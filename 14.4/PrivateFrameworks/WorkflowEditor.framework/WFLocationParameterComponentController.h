//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKComponentController.h>

#import <WorkflowEditor/WFLocationPickerViewControllerDelegate-Protocol.h>

@class NSString;

@interface WFLocationParameterComponentController : CKComponentController <WFLocationPickerViewControllerDelegate>
{
}

- (void)locationPickerDidCancel:(id)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)buttonTapped:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

