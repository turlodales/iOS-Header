//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NUPageViewController, UIViewController;

@protocol NUPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(NUPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(NUPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
@end

