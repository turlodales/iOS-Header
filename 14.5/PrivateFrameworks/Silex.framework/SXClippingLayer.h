//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXLayer.h>

@class CALayer;

@interface SXClippingLayer : SXLayer
{
    CALayer *_contentLayer;
    unsigned long long _clippingMode;
    struct CGRect _contentFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
- (void)layoutForMasking;
- (void)layoutForContentsRect;
- (void)layoutSublayers;

@end

