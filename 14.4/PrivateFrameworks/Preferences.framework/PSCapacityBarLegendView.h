//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PSLegendColorView, UIColor, UILabel;

@interface PSCapacityBarLegendView : UIView
{
    PSLegendColorView *_legendColor;
    UILabel *_legendLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *textColor;
- (void)createConstraints;
- (id)initWithCapacityBarCategory:(id)arg1;

@end

