//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAPackage, CAStateController, CCUICAPackageDescription;

@interface CCUICAPackageView : UIView
{
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
    CAPackage *_package;
    CCUICAPackageDescription *_packageDescription;
    double _scale;
}

- (void).cxx_destruct;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) CCUICAPackageDescription *packageDescription; // @synthesize packageDescription=_packageDescription;
@property(retain, nonatomic) CAPackage *package; // @synthesize package=_package;
- (void)_setPackage:(id)arg1;
- (void)setStateName:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

