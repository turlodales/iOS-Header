//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSpotlightMultiplexingViewController.h>

@class FBDisplayLayoutElement;
@protocol SBHomeScreenSpotlightDismissalDelegate;

@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController
{
    id <SBHomeScreenSpotlightDismissalDelegate> _homescreenSpotlightDelegate;
    FBDisplayLayoutElement *_displayLayoutElement;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement; // @synthesize displayLayoutElement=_displayLayoutElement;
@property(readonly, nonatomic) __weak id <SBHomeScreenSpotlightDismissalDelegate> homescreenSpotlightDelegate; // @synthesize homescreenSpotlightDelegate=_homescreenSpotlightDelegate;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)level;
- (id)initWithDelegate:(id)arg1;

@end

