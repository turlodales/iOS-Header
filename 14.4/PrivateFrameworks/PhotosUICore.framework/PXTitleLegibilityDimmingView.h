//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class CABackdropLayer, CALayer, NSString;
@protocol NSCopying;

@interface PXTitleLegibilityDimmingView : UIView <PXGReusableView>
{
    CALayer *_filterLayer;
    CABackdropLayer *_backdropLayer;
    id <NSCopying> _userData;
    NSString *_gradientImageName;
    struct CGRect _clippingRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *gradientImageName; // @synthesize gradientImageName=_gradientImageName;
@property(copy, nonatomic) id <NSCopying> userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

