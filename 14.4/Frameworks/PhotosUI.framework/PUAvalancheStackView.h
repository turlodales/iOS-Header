//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PUAvalancheStackView : UIView
{
    CALayer *_imageLayer;
    CALayer *_stackLayer0;
    CALayer *_stackLayer1;
    long long _contentMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) CALayer *stackLayer1; // @synthesize stackLayer1=_stackLayer1;
@property(retain, nonatomic) CALayer *stackLayer0; // @synthesize stackLayer0=_stackLayer0;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (struct CGRect)_imageContentFrame;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (id)init;

@end

