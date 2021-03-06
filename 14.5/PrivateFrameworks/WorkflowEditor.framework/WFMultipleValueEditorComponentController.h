//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/CKStatefulViewComponentController.h>

#import <WorkflowEditor/WFMultipleValueEditorViewDelegate-Protocol.h>

@class NSString, WFMultipleValueEditingContext, WFMultipleValueEditorView;

@interface WFMultipleValueEditorComponentController : CKStatefulViewComponentController <WFMultipleValueEditorViewDelegate>
{
    WFMultipleValueEditorView *_viewForSizing;
    WFMultipleValueEditingContext *_editingContext;
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WFMultipleValueEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (void)multipleValueEditorView:(id)arg1 needsConfirmationForDeletion:(id)arg2;
- (void)multipleValueEditorView:(id)arg1 didUpdateWithItem:(id)arg2;
- (void)componentTreeDidDisappear;
- (void)componentTreeWillAppear;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)didAcquireStatefulView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forComponent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

