//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <CarPlaySupport/BSInvalidatable-Protocol.h>
#import <CarPlaySupport/CPSPreferredFocusManaging-Protocol.h>

@class NSString, UIFocusGuide;
@protocol UIFocusItem;

@interface CPSOverlayViewController : UINavigationController <CPSPreferredFocusManaging, BSInvalidatable>
{
    _Bool usePreferredItemOnNextUpdate;
    UIFocusGuide *_rightHandDriveGuide;
    id <UIFocusItem> preferredFocusItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usePreferredItemOnNextUpdate; // @synthesize usePreferredItemOnNextUpdate;
@property(nonatomic) __weak id <UIFocusItem> preferredFocusItem; // @synthesize preferredFocusItem;
- (id)_linearFocusMovementSequences;
- (_Bool)_useRightHandDriveFocusGuide;
- (id)_firstFocusProvidingForViewController:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (_Bool)restoresFocusAfterTransition;
- (id)templates;
- (id)topTemplate;
- (void)dismissTemplateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)presentedTemplateViewController;
- (void)presentActionSheetTemplate:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentTemplateViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushTemplateViewController:(id)arg1 animated:(_Bool)arg2 presentationStyle:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)popTemplateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popToRootTemplateAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popToTemplate:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)viewControllerForTemplate:(id)arg1;
- (unsigned long long)indexOfTemplate:(id)arg1;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)_resetRightHandDriveGuide;
@property(readonly, nonatomic) UIFocusGuide *rightHandDriveGuide; // @synthesize rightHandDriveGuide=_rightHandDriveGuide;
- (void)viewDidLoad;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

