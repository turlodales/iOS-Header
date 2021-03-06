//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSOperationQueue, SKUIClientContext, SKUIGift, SKUIGiftComposeViewController, SKUIGiftConfiguration, UIViewController;
@protocol SKUIGiftViewControllerDelegate;

@interface SKUIGiftViewController : UINavigationController
{
    SKUIClientContext *_clientContext;
    SKUIGift *_gift;
    id <SKUIGiftViewControllerDelegate> _giftDelegate;
    SKUIGiftConfiguration *_giftConfiguration;
    NSOperationQueue *_operationQueue;
    long long _initialBarStyle;
    UIViewController *_placeholderViewController;
    SKUIGiftComposeViewController *_rootViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKUIGiftViewControllerDelegate> giftDelegate; // @synthesize giftDelegate=_giftDelegate;
@property(readonly, copy, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (id)_localizedString:(id)arg1;
- (void)_loadGiftConfiguration;
- (void)_finishGiftingWithResult:(_Bool)arg1;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)_configurationDidLoadWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGSize)preferredContentSize;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)initWithGift:(id)arg1;

@end

