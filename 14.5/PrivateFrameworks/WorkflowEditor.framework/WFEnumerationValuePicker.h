//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <WorkflowEditor/WFParameterEventObserver-Protocol.h>
#import <WorkflowEditor/WFParameterValuePickerViewControllerDelegate-Protocol.h>

@class NSArray, NSString, WFEnumerationParameter, WFParameterValuePickerViewController, WFTextTokenChooser, WFVariableSubstitutableParameterState;

@interface WFEnumerationValuePicker : NSObject <WFParameterEventObserver, WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    WFVariableSubstitutableParameterState *_currentState;
    CDUnknownBlockType _cancelHandler;
    WFEnumerationParameter *_parameter;
    NSArray *_parameterStates;
    CDUnknownBlockType _completionHandler;
    WFParameterValuePickerViewController *_parameterValuePickerViewController;
    WFTextTokenChooser *_textTokenChooser;
    long long _editingSlotArrayIndex;
}

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 editingSlotArrayIndex:(long long)arg3 initialCollection:(id)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 processing:(_Bool)arg7 sourceView:(id)arg8 sourceRect:(struct CGRect)arg9 viewController:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void).cxx_destruct;
@property(nonatomic) long long editingSlotArrayIndex; // @synthesize editingSlotArrayIndex=_editingSlotArrayIndex;
@property(retain, nonatomic) WFTextTokenChooser *textTokenChooser; // @synthesize textTokenChooser=_textTokenChooser;
@property(retain, nonatomic) WFParameterValuePickerViewController *parameterValuePickerViewController; // @synthesize parameterValuePickerViewController=_parameterValuePickerViewController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSArray *parameterStates; // @synthesize parameterStates=_parameterStates;
@property(retain, nonatomic) WFEnumerationParameter *parameter; // @synthesize parameter=_parameter;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) WFVariableSubstitutableParameterState *currentState; // @synthesize currentState=_currentState;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)arg1;
- (void)parameterValuePickerViewControllerDidCancel:(id)arg1;
- (void)parameterValuePickerViewController:(id)arg1 didFinishWithObject:(id)arg2;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)cancelOperation;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updatePossibleStates;
- (void)updateAdditionalButtons;
- (void)updateCurrentState;
- (void)dealloc;
- (id)initWithParameter:(id)arg1 currentState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

