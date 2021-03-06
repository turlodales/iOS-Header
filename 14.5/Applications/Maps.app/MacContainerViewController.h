//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ControlContainerViewController.h"

#import "MKMapViewDelegatePrivate-Protocol.h"
#import "MacMenuPresentationControllerObserver-Protocol.h"
#import "MacPopoverPresentationControllerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SupplementalStackViewController, UIViewController;
@protocol ContaineeContentInjection, ContaineeProtocol;

__attribute__((visibility("hidden")))
@interface MacContainerViewController : ControlContainerViewController <MacPopoverPresentationControllerDelegate, MacMenuPresentationControllerObserver, MKMapViewDelegatePrivate>
{
    UIViewController<ContaineeProtocol> *_currentMenuViewController;
    UIViewController<ContaineeProtocol> *_currentPopoverViewController;
    UIViewController<ContaineeProtocol> *_deferredPopoverViewController;
    SupplementalStackViewController *_paletteViewController;
    NSLayoutConstraint *_paletteWidthConstraint;
    long long _deferMapPopoverCount;
    id <ContaineeContentInjection> _sidebarContentInjector;
}

+ (Class)actionCoordinatorClass;
- (void).cxx_destruct;
@property(retain, nonatomic) id <ContaineeContentInjection> sidebarContentInjector; // @synthesize sidebarContentInjector=_sidebarContentInjector;
- (void)deferPresentingMapPopoversInsideBlock:(CDUnknownBlockType)arg1;
- (_Bool)_isDeferringMapPopovers;
- (void)macPopoverPresentationControllerDidDismiss:(id)arg1;
- (void)macPopoverPresentationControllerWillDismiss:(id)arg1;
- (void)_popoverDismissDidFinish;
- (void)_popCurrentPopoverViewControllerAnimated:(_Bool)arg1;
- (void)_dismissPopoverViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentCurrentPopoverAnimated:(_Bool)arg1;
- (void)_presentPopoverViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)macMenuPresentationControllerDidDismiss:(id)arg1;
- (void)macMenuPresentationControllerWillDismiss:(id)arg1;
- (void)_dismissCurrentMenuViewControllerAnimated:(_Bool)arg1;
- (void)_dismissMenuViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_presentCurrentMenuViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentMenuViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)leftSafeOffset;
- (double)rightSafeOffset;
- (void)_popPalette:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_pushPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (unsigned long long)originalLayoutForViewController:(id)arg1;
- (id)topSidebarController_forTests;
- (void)shareFromMenuDidSelect:(id)arg1;
- (id)currentViewController;
- (_Bool)_isInspectorEmpty;
- (void)updateMapEdgeInsets;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_mapViewIfCurrent;
- (void)popLastViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;
- (void)replaceCurrentWithController:(id)arg1 moveToContaineeLayout:(unsigned long long)arg2;
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setChromeViewController:(id)arg1;
- (_Bool)supportsEmptyStack;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (id)initWithPlatformController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

