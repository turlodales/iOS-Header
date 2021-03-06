//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BatteryIconView, NSLayoutConstraint, NSString, UIButton, UILabel, VGVehicle;

__attribute__((visibility("hidden")))
@interface RoutePlanningOptionsBar : UIView
{
    UIButton *_button;
    UILabel *_summaryLabel;
    BatteryIconView *_batteryView;
    CDUnknownBlockType _actionHandler;
    NSLayoutConstraint *_summaryToTrailingConstraint;
    NSLayoutConstraint *_summaryToBatteryConstraint;
    NSLayoutConstraint *_batteryToTrailingConstraint;
    NSString *_summaryText;
    VGVehicle *_vehicle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VGVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
- (void)_buttonTapped;
- (void)_updateContent;
- (void)setButtonTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

