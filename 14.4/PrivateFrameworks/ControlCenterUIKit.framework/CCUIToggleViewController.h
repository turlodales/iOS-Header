//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

#import <ControlCenterUIKit/CCUIContentModuleContentViewController-Protocol.h>

@class CCUICAPackageDescription, CCUIToggleModule, NSString, UIColor, UIImage, UIImageView, UIViewPropertyAnimator;

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController>
{
    UIImageView *_glyphImageView;
    UIImage *_glyphImage;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedColor;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    CCUIToggleModule *_module;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CCUIToggleModule *module; // @synthesize module=_module;
- (_Bool)shouldFinishTransitionToExpandedContentModule;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (void)reconfigureView;
- (_Bool)_canShowWhileLocked;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshState;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly, nonatomic) _Bool shouldPerformClickInteraction;
@property(readonly, nonatomic) _Bool shouldPerformHoverInteraction;
@property(readonly) Class superclass;

@end

