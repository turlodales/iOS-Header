//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/SPUIRemoteSearchViewDelegate-Protocol.h>

@class NSString, SBSpotlightTransientOverlaySpotlightViewController, UIVisualEffectView;
@protocol SBSpotlightTransientOverlayViewControllerDelegate;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate>
{
    UIVisualEffectView *_blurEffectView;
    SBSpotlightTransientOverlaySpotlightViewController *_spotlightViewController;
    id <SBSpotlightTransientOverlayViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSpotlightTransientOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissSearchView;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredUnlockedGestureDismissalStyle;
- (long long)preferredLockedGestureDismissalStyle;
- (_Bool)isContentOpaque;
- (_Bool)handleHomeButtonPress;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

