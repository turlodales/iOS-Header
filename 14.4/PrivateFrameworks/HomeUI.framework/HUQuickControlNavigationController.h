//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <HomeUI/HUViewControllerCustomDismissing-Protocol.h>

@class NSString;

@interface HUQuickControlNavigationController : UINavigationController <HUViewControllerCustomDismissing>
{
}

- (id)hu_prepareForDismissalAnimated:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

