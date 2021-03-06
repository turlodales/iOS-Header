//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSceneViewController.h>

#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>

@class NSString, SBAppStatusBarSettings, SBApplicationSceneHandle, SBApplicationSceneView, UIView;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling>
{
    _Bool __applicationStatusBarHidden;
    id <SBApplicationSceneViewControllingStatusBarDelegate> _applicationSceneStatusBarDelegate;
    SBAppStatusBarSettings *_overrideStatusBarSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:) SBAppStatusBarSettings *overrideStatusBarSettings; // @synthesize overrideStatusBarSettings=_overrideStatusBarSettings;
@property(readonly, nonatomic, getter=_isApplicationStatusBarHidden) _Bool _applicationStatusBarHidden; // @synthesize _applicationStatusBarHidden=__applicationStatusBarHidden;
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; // @synthesize applicationSceneStatusBarDelegate=_applicationSceneStatusBarDelegate;
- (double)_applicationStatusBarAlpha;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(readonly, nonatomic) double statusBarAlpha;
- (id)initWithSceneHandle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property(readonly, nonatomic, getter=_sceneView) SBApplicationSceneView *sceneView; // @dynamic sceneView;
@property(readonly) Class superclass;

@end

