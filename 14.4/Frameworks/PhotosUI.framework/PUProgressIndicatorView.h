//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PLRoundProgressView, UIActivityIndicatorView, UILabel, UIVisualEffectView;

@interface PUProgressIndicatorView : UIView
{
    UIActivityIndicatorView *_spinnerView;
    PLRoundProgressView *_pieProgressView;
    UIVisualEffectView *_visualEffectView;
    UILabel *_messageLabel;
    NSArray *_spinnerViewConstraints;
    NSArray *_pieProgressViewConstraints;
    NSArray *_backgroundViewConstraints;
    NSArray *_messageLabelConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSArray *_labelAndPieProgressConstraints;
    _Bool _wantsImmediateHide;
    _Bool _wantsAnimatedHide;
    CDUnknownBlockType _completionHandler;
    _Bool _isDeterminate;
    _Bool _showsBackground;
    long long _style;
    double _currentProgress;
    NSString *_localizedMessage;
    long long __currentState;
    double __timestampBeganShowing;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setTimestampBeganShowing:) double _timestampBeganShowing; // @synthesize _timestampBeganShowing=__timestampBeganShowing;
@property(nonatomic, setter=_setCurrentState:) long long _currentState; // @synthesize _currentState=__currentState;
@property(nonatomic) _Bool showsBackground; // @synthesize showsBackground=_showsBackground;
@property(nonatomic, setter=setDeterminate:) _Bool isDeterminate; // @synthesize isDeterminate=_isDeterminate;
@property(copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly) _Bool isStyleDark;
@property(readonly) _Bool isStyleCompactBackground;
- (void)_endShowingProgressIfReady;
- (void)endShowingProgressImmediately:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleBeginShowingAnimated:(_Bool)arg1 wasImmediate:(_Bool)arg2;
- (void)beginShowingProgressWithDelay:(double)arg1 animated:(_Bool)arg2;
- (void)beginShowingProgressImmediately:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly) double defaultProgressIndicatorDelay;
@property(readonly, nonatomic, getter=isShowingProgress) _Bool showingProgress;
- (void)_updateSubviewsOrdering;
- (void)_updatePieProgress;
- (void)_updateProgressViewsWithAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateProgressViewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_newVisualEffectBackgroundView;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

