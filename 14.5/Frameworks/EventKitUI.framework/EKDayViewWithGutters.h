//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class EKDayAllDayView, EKDayView;

@interface EKDayViewWithGutters : UIView
{
    EKDayAllDayView *_leftAllDayView;
    EKDayAllDayView *_rightAllDayView;
    long long _targetSizeClass;
    UIView *_leftGutter;
    UIView *_rightGutter;
    EKDayView *_dayView;
    double _gutterWidth;
    double _allDayHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double allDayHeight; // @synthesize allDayHeight=_allDayHeight;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(retain, nonatomic) EKDayView *dayView; // @synthesize dayView=_dayView;
@property(readonly, nonatomic) UIView *rightGutter; // @synthesize rightGutter=_rightGutter;
@property(readonly, nonatomic) UIView *leftGutter; // @synthesize leftGutter=_leftGutter;
- (id)_createAllDayView;
- (id)initWithFrame:(struct CGRect)arg1 dayView:(id)arg2 sizeClass:(long long)arg3;

@end

