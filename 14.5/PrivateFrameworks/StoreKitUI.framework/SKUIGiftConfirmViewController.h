//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController
{
    SKUIGiftConfirmView *_confirmView;
    _Bool _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}

- (void).cxx_destruct;
- (id)_confirmButtonTitle;
- (id)_buyButtonTitle;
- (id)_newBuyBarButtonItemWithTitle:(id)arg1;
- (void)_showSuccessPage;
- (void)_setShowingConfirmation:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removeCancelGestureRecognizer;
- (void)_purchaseGift;
- (void)_finishPurchaseWithResult:(_Bool)arg1 errorMessage:(id)arg2;
- (void)_termsButtonAction:(id)arg1;
- (void)_cancelBuyConfirmation:(id)arg1;
- (void)_buyButtonAction:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;

@end

