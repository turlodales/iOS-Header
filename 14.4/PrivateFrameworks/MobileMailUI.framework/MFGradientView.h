//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface MFGradientView : UIView
{
}

+ (Class)layerClass;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(retain, nonatomic) NSArray *locations;
@property(retain, nonatomic) NSArray *gradientColors;
@property(readonly, nonatomic) CAGradientLayer *gradientLayer;

@end

