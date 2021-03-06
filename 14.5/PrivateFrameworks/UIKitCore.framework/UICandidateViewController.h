//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIPredictiveViewController-Protocol.h>

@class NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface UICandidateViewController : UIViewController <UIPredictiveViewController>
{
    UIView *_candidateView;
}

+ (double)preferredCandidateBarHeightForTraitCollection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *candidateView; // @synthesize candidateView=_candidateView;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (_Bool)hidesExpandableButton;
- (double)preferredHeightForTraitCollection:(id)arg1;
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

