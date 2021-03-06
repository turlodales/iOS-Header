//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCUISensorStatusView, CCUIStatusBar, SBUIChevronView;
@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView
{
    UIView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUISensorStatusView *_sensorStatusView;
    CCUIStatusBar *_statusBar;
    id <CCUIStatusBarDelegate> _statusBarDelegate;
    unsigned long long _mode;
    double _backgroundAlpha;
    UIView *_customBackgroundView;
    double _chevronAlpha;
    double _statusBarAlpha;
    double _sensorStatusViewAlpha;
    double _contentAlphaMultiplier;
    double _verticalContentTranslation;
    long long _interfaceOrientation;
    UIView *_statusLabelView;
    struct UIEdgeInsets _edgeInsets;
    struct CGAffineTransform _contentTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *statusLabelView; // @synthesize statusLabelView=_statusLabelView;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) double verticalContentTranslation; // @synthesize verticalContentTranslation=_verticalContentTranslation;
@property(nonatomic) double contentAlphaMultiplier; // @synthesize contentAlphaMultiplier=_contentAlphaMultiplier;
@property(nonatomic) double sensorStatusViewAlpha; // @synthesize sensorStatusViewAlpha=_sensorStatusViewAlpha;
@property(nonatomic) double statusBarAlpha; // @synthesize statusBarAlpha=_statusBarAlpha;
@property(nonatomic) double chevronAlpha; // @synthesize chevronAlpha=_chevronAlpha;
@property(nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) CCUISensorStatusView *sensorStatusView; // @synthesize sensorStatusView=_sensorStatusView;
@property(nonatomic) __weak id <CCUIStatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property(readonly, nonatomic) CCUIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (void)_setHeaderBackgroundView:(id)arg1;
- (id)_newDefaultBackgroundView;
- (void)_updateContentTransform;
- (void)_updateAlpha;
- (double)additionalHeightForOrientation:(long long)arg1;
@property(nonatomic) unsigned long long chevronState; // @dynamic chevronState;
@property(nonatomic) struct CGAffineTransform compactScaleTransform; // @dynamic compactScaleTransform;
@property(readonly, nonatomic) struct CGRect contentBounds; // @dynamic contentBounds;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)removeSensorStatusForSensorType:(unsigned long long)arg1;
- (void)addSensorStatusForStatusType:(unsigned long long)arg1 sensorActivityData:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

