//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ExtensionsStackViewController.h"

#import "BannerContaineeProtocol-Protocol.h"
#import "HeaderViewDelegate-Protocol.h"
#import "RideBookingRequestRideOptionProxyDelegate-Protocol.h"

@class CardPresentationController, ContainerHeaderView, ExtensionsActionsFooterView, ExtensionsPayView, ExtensionsPrimaryDetailsView, ExtensionsSecondaryDetailsView, MacMenuPresentationController, MacPopoverPresentationController, NSArray, NSString, ProminentActionButton, RideBookingRequestRideOptionProxy, RideBookingRequestRideStatus, RidesharingCoordinator, RouteFromToView, TopBannerItem;
@protocol BannerContainerProtocol;

__attribute__((visibility("hidden")))
@interface RidesharingDetailsPickingViewController : ExtensionsStackViewController <HeaderViewDelegate, RideBookingRequestRideOptionProxyDelegate, BannerContaineeProtocol>
{
    ContainerHeaderView *_containerHeaderView;
    RouteFromToView *_routeFromToView;
    ExtensionsPrimaryDetailsView *_primaryDetailsView;
    ExtensionsPayView *_payView;
    ExtensionsSecondaryDetailsView *_secondaryDetailsView;
    ExtensionsActionsFooterView *_openAppView;
    ProminentActionButton *_requestButton;
    TopBannerItem *_moveMapPromptItem;
    _Bool _finishedPickingDetails;
    NSArray *_topBannerItems;
    id <BannerContainerProtocol> _bannerContainer;
    RidesharingCoordinator *_coordinator;
    RideBookingRequestRideStatus *_requestRideStatus;
    RideBookingRequestRideOptionProxy *_requestRideOptionProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RideBookingRequestRideOptionProxy *requestRideOptionProxy; // @synthesize requestRideOptionProxy=_requestRideOptionProxy;
@property(retain, nonatomic) RideBookingRequestRideStatus *requestRideStatus; // @synthesize requestRideStatus=_requestRideStatus;
@property(nonatomic) __weak RidesharingCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <BannerContainerProtocol> bannerContainer; // @synthesize bannerContainer=_bannerContainer;
- (void)_openApp;
- (void)_requestRide;
- (void)setRequestingRide:(_Bool)arg1;
- (void)_request;
- (void)_selectPaymentType;
- (void)headerViewButtonTapped:(id)arg1;
- (void)_showExpirationAlert;
- (void)requestRideStatusDidChange:(id)arg1;
- (void)_updateFromRequestRideStatus:(id)arg1;
- (_Bool)_isPresented;
- (double)heightForLayout:(unsigned long long)arg1;
- (id)stackedViews;
@property(readonly, nonatomic) NSArray *topBannerItems; // @synthesize topBannerItems=_topBannerItems;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(nonatomic) unsigned long long preferredPresentationStyle;
@property(readonly) Class superclass;

@end

