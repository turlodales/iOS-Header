//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImageView, UITouch, UIView;

@interface HUDTouchInfo : NSObject
{
    UITouch *_touch;
    UIImageView *_dot;
    UIView *_bar;
    struct CGPoint _plottedLocation;
    struct CGPoint _locationInHUD;
    CDStruct_d4d9707c _stockValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) UIImageView *dot; // @synthesize dot=_dot;
@property(nonatomic) __weak UITouch *touch; // @synthesize touch=_touch;
@property(nonatomic) struct CGPoint locationInHUD; // @synthesize locationInHUD=_locationInHUD;
@property(nonatomic) struct CGPoint plottedLocation; // @synthesize plottedLocation=_plottedLocation;
@property(nonatomic) CDStruct_d4d9707c stockValue; // @synthesize stockValue=_stockValue;
- (id)description;

@end

