//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView
{
    UIBezierPath *_path;
    UIColor *_fillColor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (id)shapeLayer;

@end

