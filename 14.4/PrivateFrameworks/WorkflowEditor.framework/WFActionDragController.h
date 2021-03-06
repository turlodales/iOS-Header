//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/WFComponentDragController.h>

#import <WorkflowEditor/CKComponentHostingViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSString, WFAction, WFModuleModel;

@interface WFActionDragController : WFComponentDragController <CKComponentHostingViewDelegate>
{
    struct CGSize _initialSize;
    struct CGPoint _initialLocation;
    NSArray *_actions;
    WFAction *_sourceAction;
    CDUnknownBlockType _actionGenerator;
    NSHashTable *_viewControllers;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(copy, nonatomic) CDUnknownBlockType actionGenerator; // @synthesize actionGenerator=_actionGenerator;
@property(retain, nonatomic) WFAction *sourceAction; // @synthesize sourceAction=_sourceAction;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)reset;
- (void)updateCurrentViewControllers;
- (void)updateView;
- (void)loadView;
- (long long)sizeRangeFlexibility;
- (id)actions;
- (id)initWithGestureRecognizer:(id)arg1 actionGenerator:(CDUnknownBlockType)arg2;
- (id)initWithGestureRecognizer:(id)arg1 sourceAction:(id)arg2;
- (id)initWithGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WFModuleModel *model; // @dynamic model;
@property(readonly) Class superclass;

@end

