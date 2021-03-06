//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <CoverSheet/SBFLegibilitySettingsProviderDelegate-Protocol.h>

@class CSTodayViewController, NSString, SBUISpotlightBarNavigationController, SPUISearchBarController;

@interface CSTodayContentViewController : CSCoverSheetViewControllerBase <SBFLegibilitySettingsProviderDelegate>
{
    _Bool _bouncing;
    CSTodayViewController *_todayViewController;
    SBUISpotlightBarNavigationController *_spotlightNavigationController;
    SPUISearchBarController *_spotlightSearchBarViewController;
}

+ (Class)viewClass;
- (void).cxx_destruct;
@property(retain, nonatomic) SPUISearchBarController *spotlightSearchBarViewController; // @synthesize spotlightSearchBarViewController=_spotlightSearchBarViewController;
@property(retain, nonatomic) SBUISpotlightBarNavigationController *spotlightNavigationController; // @synthesize spotlightNavigationController=_spotlightNavigationController;
@property(nonatomic, getter=isBouncing) _Bool bouncing; // @synthesize bouncing=_bouncing;
@property(retain, nonatomic) CSTodayViewController *todayViewController; // @synthesize todayViewController=_todayViewController;
- (void)_updateSpotlightLegibility;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)_todayContentView;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

