//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientProductPageViewController-Protocol.h>

@class NSString, SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController>
{
    SKStoreProductViewController *_productViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;
- (void)promptForStarRating;
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)didReceiveTitle:(id)arg1;
- (void)didFinishWithResult:(id)arg1;
- (void)didFinishDismissal;
- (void)didFinish;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

