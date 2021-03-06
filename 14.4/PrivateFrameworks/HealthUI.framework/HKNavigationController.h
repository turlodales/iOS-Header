//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <HealthUI/HKTabBarTapObserver-Protocol.h>
#import <HealthUI/UINavigationControllerDelegate-Protocol.h>

@class HKProfileBarButtonItem, NSString;

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate>
{
    HKProfileBarButtonItem *_commonProfileBarButtonItem;
}

- (void).cxx_destruct;
- (void)didChangeToAnotherTab;
- (void)didTapTabBarIcon;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)commonProfileBarButtonItem;
- (id)initWithRootViewController:(id)arg1;
- (id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

