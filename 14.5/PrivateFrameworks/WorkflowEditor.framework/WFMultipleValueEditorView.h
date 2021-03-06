//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/UITableViewDataSource-Protocol.h>
#import <WorkflowEditor/UITableViewDelegatePrivate-Protocol.h>
#import <WorkflowEditor/WFModuleSummaryEditorDelegate-Protocol.h>
#import <WorkflowEditor/WFMultipleValueEditorViewCellDelegate-Protocol.h>

@class MTVisualStylingProvider, NSArray, NSIndexPath, NSSet, NSString, UIColor, UITableView, WFModuleSummaryEditor, WFMultipleValueParameterState, WFParameter;
@protocol WFComponentNavigationContext, WFMultipleValueEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFMultipleValueEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFMultipleValueEditorViewCellDelegate, WFModuleSummaryEditorDelegate>
{
    _Bool _variablesDisabled;
    _Bool _standaloneVariablesAsContentItems;
    NSString *_localizedNewItemTypeName;
    NSString *_addNewItemCellTitle;
    UITableView *_tableView;
    WFParameter *_parameter;
    WFMultipleValueParameterState *_state;
    id <WFMultipleValueEditorViewDelegate> _delegate;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    NSString *_widgetSizeClass;
    id <WFComponentNavigationContext> _navigationContext;
    UIColor *_overridingCellBackgroundColor;
    MTVisualStylingProvider *_fillProvider;
    CDUnknownBlockType _updateBlock;
    NSArray *_items;
    WFModuleSummaryEditor *_currentEditor;
    NSIndexPath *_textEditingCellIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *textEditingCellIndexPath; // @synthesize textEditingCellIndexPath=_textEditingCellIndexPath;
@property(retain, nonatomic) WFModuleSummaryEditor *currentEditor; // @synthesize currentEditor=_currentEditor;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) MTVisualStylingProvider *fillProvider; // @synthesize fillProvider=_fillProvider;
@property(retain, nonatomic) UIColor *overridingCellBackgroundColor; // @synthesize overridingCellBackgroundColor=_overridingCellBackgroundColor;
@property(nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(copy, nonatomic) NSString *widgetSizeClass; // @synthesize widgetSizeClass=_widgetSizeClass;
@property(nonatomic) _Bool standaloneVariablesAsContentItems; // @synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(nonatomic) __weak id <WFMultipleValueEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) WFMultipleValueParameterState *state; // @synthesize state=_state;
@property(retain, nonatomic) WFParameter *parameter; // @synthesize parameter=_parameter;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)summaryEditorDidRequestTextEntry:(id)arg1;
- (void)summaryEditorDidFinish:(id)arg1 returnToKeyboard:(_Bool)arg2 withTextAttachmentToEdit:(id)arg3;
- (void)summaryEditor:(id)arg1 didCommitParameterState:(id)arg2;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)multipleValueEditorViewCellDidInvalidateSize:(id)arg1;
- (void)multipleValueEditorViewCellDidRequestEditing:(id)arg1;
- (void)multipleValueEditorViewCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)reuseIdentifierForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)addNewItemIndexPath;
- (void)beginEditingWithContext:(id)arg1;
- (void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)updateCells;
- (void)editItemAtIndexPath:(id)arg1;
- (void)addNewItemAtIndexPath:(id)arg1;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(readonly, nonatomic) NSString *addNewItemCellTitle; // @synthesize addNewItemCellTitle=_addNewItemCellTitle;
@property(copy, nonatomic) NSString *localizedNewItemTypeName; // @synthesize localizedNewItemTypeName=_localizedNewItemTypeName;
@property(nonatomic, getter=isEditable) _Bool editable;
- (void)_setState:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

