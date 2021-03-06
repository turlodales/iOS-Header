//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SpotlightUIInternal/SPUISearchViewControllerSizingDelegate-Protocol.h>
#import <SpotlightUIInternal/SearchUICardViewDelegate-Protocol.h>
#import <SpotlightUIInternal/UINavigationControllerDelegate-Protocol.h>

@class NSString, SPUINavigationBar, SPUISearchViewController;
@protocol SPUINavigationControllerDelegate;

@interface SPUINavigationController : UINavigationController <UINavigationControllerDelegate, SPUISearchViewControllerSizingDelegate, SearchUICardViewDelegate>
{
    double _contentHeight;
    long long _navigationMode;
    id <SPUINavigationControllerDelegate> _sizingDelegate;
    SPUISearchViewController *_searchViewController;
}

- (void).cxx_destruct;
@property(retain) SPUISearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) __weak id <SPUINavigationControllerDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
@property(nonatomic) long long navigationMode; // @synthesize navigationMode=_navigationMode;
@property(readonly) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (_Bool)_canShowWhileLocked;
- (long long)preferredUserInterfaceStyle;
- (void)cardViewController:(id)arg1 preferredContentSizeDidChange:(struct CGSize)arg2 animated:(_Bool)arg3;
- (void)didInvalidateSizeAnimated:(_Bool)arg1;
- (void)applyCardHeightAnimated:(_Bool)arg1;
@property(nonatomic) _Bool shouldShowKeyboardInputBars;
- (double)heightOfNavigationBar;
- (double)contentHeightIncludingCardViewController;
- (double)contentHeightIncludingSearchView;
- (void)setContentHeight:(double)arg1 animated:(_Bool)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithSearchViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SPUINavigationBar *navigationBar; // @dynamic navigationBar;
@property(readonly) Class superclass;

@end

