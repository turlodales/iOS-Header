//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class LAUIPhysicalButtonViewAnimation, NSString, UILabel;
@protocol UICoordinateSpace;

@interface LAUIPhysicalButtonView : UIView
{
    id <UICoordinateSpace> _fixedCoordinateSpace;
    id <UICoordinateSpace> _coordinateSpace;
    unsigned int _edge;
    _Bool _onScreen;
    UIView *_containerView;
    UILabel *_instructionLabel;
    UIView *_buttonView;
    _Bool _animating;
    LAUIPhysicalButtonViewAnimation *_animation;
    long long _style;
    long long _animationStyle;
    NSString *_instruction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
@property(readonly, nonatomic) unsigned int edge; // @synthesize edge=_edge;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_setOnScreen:(_Bool)arg1;
- (id)_colorForStyle:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_physicalButtonNormalizedFrame;
- (void)updateFrame;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

