//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/ACUIAccountOperationsDelegate-Protocol.h>

@class ACUIAccountOperationsHelper, NSString, UIViewController;
@protocol AAUISignInOperationDelegate;

@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate>
{
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    id <AAUISignInOperationDelegate> _delegate;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <AAUISignInOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_disableDataclasses:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_alertControllerForPicker:(id)arg1;
- (void)_mainQueue_dataclassActionsForPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dataclassMergeActionPickerFromPicker:(id)arg1;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)arg1 error:(id)arg2;
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;
- (void)signInAccount:(id)arg1 enablingDataclasses:(_Bool)arg2;
- (id)initWithPresentingViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

