//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMLevelViewModelChangeObserver-Protocol.h>

@class CAMLevelCrosshair, CAMLevelViewModel, NSString;

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver>
{
    CAMLevelViewModel *_viewModel;
    CAMLevelCrosshair *__goalCrosshair;
    CAMLevelCrosshair *__userCrosshair;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAMLevelCrosshair *_userCrosshair; // @synthesize _userCrosshair=__userCrosshair;
@property(readonly, nonatomic) CAMLevelCrosshair *_goalCrosshair; // @synthesize _goalCrosshair=__goalCrosshair;
@property(readonly, nonatomic) CAMLevelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;
- (void)_updateCrosshairAlphasWithAlpha:(double)arg1 indicatorMode:(long long)arg2;
- (void)_updateCrosshairHighlightWithOffset:(struct UIOffset)arg1;
- (void)layoutSubviews;
- (void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

