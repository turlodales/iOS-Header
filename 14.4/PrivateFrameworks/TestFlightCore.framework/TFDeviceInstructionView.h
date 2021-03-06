//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface TFDeviceInstructionView : UIView
{
    UIImageView *_deviceImageView;
}

+ (struct UIEdgeInsets)imageLayoutInsets;
+ (id)backgroundColor;
+ (double)cornerRadius;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
- (void)layoutSubviews;
- (void)updateCurrentDeviceImageToOrientation:(long long)arg1;
- (void)displayDeviceImage:(id)arg1 inOrientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

