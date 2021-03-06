//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFComposeViewControllerPresenter-Protocol.h>
#import <WorkflowUI/WFDragCoordinator-Protocol.h>

@class NSArray, NSString, UIView, WFComposeViewController;
@protocol WFModuleDelegate;

@interface WFComposePresentingViewController : UIViewController <WFComposeViewControllerPresenter, WFDragCoordinator>
{
    WFComposeViewController *_composeViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFComposeViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
@property(readonly, nonatomic) id <WFModuleDelegate> moduleDelegate;
@property(readonly, nonatomic) NSArray *scrollViewsAffectingDrag;
@property(readonly, nonatomic) NSArray *participatingViewControllers;
@property(readonly, nonatomic) UIView *containerView;
- (id)presentingViewControllerForComposeViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithComposeViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

