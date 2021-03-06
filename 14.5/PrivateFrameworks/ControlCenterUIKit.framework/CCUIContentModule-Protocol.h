//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/NSObject-Protocol.h>

@class CCUIContentModuleContext, CCUIContentModulePresentationContext, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@protocol CCUIContentModule <NSObject>

@optional
@property(readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property(readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
- (void)setContentModuleContext:(CCUIContentModuleContext *)arg1;
- (UIViewController<CCUIContentModuleBackgroundViewController> *)backgroundViewControllerForContext:(CCUIContentModulePresentationContext *)arg1;
- (UIViewController<CCUIContentModuleContentViewController> *)contentViewControllerForContext:(CCUIContentModulePresentationContext *)arg1;
@end

