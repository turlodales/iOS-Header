//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/NSObject-Protocol.h>

@class DTSColorWheel, UIColor;

@protocol DTSColorWheelDelegate <NSObject>

@optional
- (void)colorWheel:(DTSColorWheel *)arg1 pickerColorChanged:(UIColor *)arg2;
- (void)colorWheel:(DTSColorWheel *)arg1 didPickColor:(UIColor *)arg2;
- (void)colorWheel:(DTSColorWheel *)arg1 willPickColor:(UIColor *)arg2;
@end

