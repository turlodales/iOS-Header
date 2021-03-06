//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SpringBoardUIServices/UINavigationControllerDelegate-Protocol.h>

@class NSString, SBSearchBar, UIViewController, _UILegibilitySettings;
@protocol SBUISearchBarControlling;

@interface SBUISpotlightBarNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    _Bool _pullingToSearch;
    UIViewController<SBUISearchBarControlling> *_searchBarViewController;
    _UILegibilitySettings *_legibilitySettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic, getter=isPullingToSearch) _Bool pullingToSearch; // @synthesize pullingToSearch=_pullingToSearch;
@property(retain, nonatomic) UIViewController<SBUISearchBarControlling> *searchBarViewController; // @synthesize searchBarViewController=_searchBarViewController;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(getter=isNavigationBarBottomTrailingCornerRounded) _Bool navigationBarBottomTrailingCornerRounded;
- (void)setNavigationBarBlurProgress:(double)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 searchBarViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) SBSearchBar *navigationBar; // @dynamic navigationBar;
@property(readonly) Class superclass;

@end

