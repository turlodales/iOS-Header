//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIEvent, UIView;

@protocol PassThroughViewDelegate <NSObject>
@property(readonly, nonatomic) UIView *passThroughView;

@optional
- (_Bool)shouldPassPoint:(struct CGPoint)arg1 withEvent:(UIEvent *)arg2 inView:(UIView *)arg3;
@end

