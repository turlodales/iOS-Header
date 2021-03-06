//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>

@class NSString, SBLogoutDebugBlockingViewController, SBLogoutProgressView, SBMultiUserDefaults, SBPlatformController, SBTransientOverlayWallpaperEffectView, UMUser;
@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate;

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding>
{
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
    SBMultiUserDefaults *_multiUserDefaults;
    SBPlatformController *_platformController;
    SBLogoutProgressView *_progressView;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
    id <SBLogoutProgressDataSource> _dataSource;
    UMUser *_user;
    id <SBLogoutProgressDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBLogoutProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UMUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <SBLogoutProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateData;
- (void)_updateLegibility;
- (id)_legibilitySettings;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize)arg1;
- (_Bool)_supportsDebugUI;
@property(readonly, nonatomic) long long proximityDetectionMode;
- (long long)idleWarnMode;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)conformsToCSExternalBehaviorProviding;
- (void)conformsToCSBehaviorProviding;
- (void)setContainerOrientation:(long long)arg1;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (_Bool)isContentOpaque;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForRestart;
- (void)refreshData;
- (id)initWithUserAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

