//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AppStoreComponents/ASCLockupPresenterObserver-Protocol.h>
#import <AppStoreComponents/ASCOfferPresenterObserver-Protocol.h>

@class ASCAppearMetricsPresenter, ASCLockup, ASCLockupContentView, ASCLockupPresenter, ASCLockupRequest, ASCLockupViewGroup, ASCMetricsActivity, ASCOfferPresenter, ASCOfferTheme, NSString, UIViewController;
@protocol ASCLockupViewDelegate;

@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver>
{
    struct {
        unsigned int lockupViewDidBeginRequest:1;
        unsigned int lockupViewDidFinishRequest:1;
        unsigned int lockupViewDidFailRequestWithError:1;
        unsigned int lockupViewAppStateDidChange:1;
        unsigned int metricsActivityForLockupViewToPerformActionOfOffer:1;
        unsigned int lockupViewDidInvalidateIntrinsicContentSize:1;
    } _delegateRespondsTo;
    _Bool _automaticallyPresentsProductDetails;
    id <ASCLockupViewDelegate> _delegate;
    ASCLockupContentView *_contentView;
    ASCOfferPresenter *_offerPresenter;
    ASCAppearMetricsPresenter *_metricsPresenter;
    ASCLockupPresenter *_lockupPresenter;
    NSString *_storeSheetHostBundleID;
    NSString *_storeSheetUsageContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *storeSheetUsageContext; // @synthesize storeSheetUsageContext=_storeSheetUsageContext;
@property(retain, nonatomic) NSString *storeSheetHostBundleID; // @synthesize storeSheetHostBundleID=_storeSheetHostBundleID;
@property(readonly, nonatomic) ASCLockupPresenter *lockupPresenter; // @synthesize lockupPresenter=_lockupPresenter;
@property(readonly, nonatomic) ASCAppearMetricsPresenter *metricsPresenter; // @synthesize metricsPresenter=_metricsPresenter;
@property(readonly, nonatomic) ASCOfferPresenter *offerPresenter; // @synthesize offerPresenter=_offerPresenter;
@property(readonly, nonatomic) ASCLockupContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool automaticallyPresentsProductDetails; // @synthesize automaticallyPresentsProductDetails=_automaticallyPresentsProductDetails;
@property(nonatomic) __weak id <ASCLockupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)offerPresenterWillPerformActionOfOffer:(id)arg1 inState:(id)arg2 withActivity:(inout id *)arg3;
- (void)offerPresenterDidObserveChangeToState:(id)arg1;
- (void)lockupPresenterDidFailRequestWithError:(id)arg1;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidBeginRequest;
- (void)performLockupAction;
- (void)presentProductDetailsViewController;
@property(readonly, copy) NSString *description;
- (void)layoutSubviews;
- (void)layoutContentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
@property(copy, nonatomic) ASCOfferTheme *offerTheme;
@property(copy, nonatomic) ASCMetricsActivity *appearMetricsActivity;
@property(nonatomic) _Bool automaticallyGeneratesAppearMetrics;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(copy, nonatomic) ASCLockupRequest *request;
@property(retain, nonatomic) ASCLockupViewGroup *group;
@property(copy, nonatomic) ASCLockup *lockup;
@property(retain, nonatomic) NSString *size;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)accessibilityActivate;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setViewRenderSpanProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

