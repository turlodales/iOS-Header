//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFItem, HUItemTableModuleController, HUViewControllerDismissalRequest, HUViewControllerPresentationRequest, NAFuture, NSArray, UITextField, UIViewController;

@protocol HUItemTableModuleControllerHosting <NSObject>
- (UITextField *)moduleController:(HUItemTableModuleController *)arg1 textFieldForVisibleItem:(HFItem *)arg2;
- (NAFuture *)moduleController:(HUItemTableModuleController *)arg1 dismissViewControllerForRequest:(HUViewControllerDismissalRequest *)arg2;
- (NAFuture *)moduleController:(HUItemTableModuleController *)arg1 presentViewControllerForRequest:(HUViewControllerPresentationRequest *)arg2;

@optional
- (void)reloadCellForItems:(NSArray *)arg1;
- (UIViewController *)presentingViewControllerForModuleController:(HUItemTableModuleController *)arg1;
@end

