//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIKBCompatInputView : UIView
{
    UIView *_touchableView;
    UIView *_snapshotView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *touchableView; // @synthesize touchableView=_touchableView;
- (_Bool)_hasAutolayoutHeightConstraint;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)_compatibleBounds;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (void)dealloc;

@end

