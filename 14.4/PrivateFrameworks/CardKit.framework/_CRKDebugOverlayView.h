//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/_CRKHitTestPassThroughView.h>

@class NSString, UIColor, UILabel;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView
{
    UILabel *_label;
    UIColor *_color;
    NSString *_debugText;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *debugText; // @synthesize debugText=_debugText;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

