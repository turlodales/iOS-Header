//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, UIColor;

@interface NTKColorCurveElement : NSObject
{
    float _fraction;
    UIColor *_color;
    CAMediaTimingFunction *_timingFunction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float fraction; // @synthesize fraction=_fraction;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)description;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;

@end

