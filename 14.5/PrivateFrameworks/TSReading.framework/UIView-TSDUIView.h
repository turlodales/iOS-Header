//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UIView (TSDUIView)
@property(copy, nonatomic) UIColor *tsdBackgroundColor;
@property(nonatomic) double tsdAlpha;
- (id)ts_windowForView;
- (id)childAtPoint:(struct CGPoint)arg1;
- (void)translateToView:(id)arg1 belowSubview:(id)arg2;
- (void)translateToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateToView:(id)arg1;
- (void)translateAndScaleToView:(id)arg1 belowSubview:(id)arg2;
- (void)translateAndScaleToView:(id)arg1 aboveSubview:(id)arg2;
- (void)translateAndScaleToView:(id)arg1;
- (void)p_translateToView:(id)arg1 above:(_Bool)arg2 siblingView:(id)arg3 shouldScale:(_Bool)arg4;
@end

