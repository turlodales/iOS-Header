//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarFocusableBlurControl.h"

@class NSLayoutConstraint, UIImageView;

__attribute__((visibility("hidden")))
@interface CarFocusableImageButton : CarFocusableBlurControl
{
    UIImageView *_imageView;
    NSLayoutConstraint *_heightConstraint;
    long long _semanticContentAttributeForImage;
}

- (void).cxx_destruct;
@property(nonatomic) long long semanticContentAttributeForImage; // @synthesize semanticContentAttributeForImage=_semanticContentAttributeForImage;
- (void)setImage:(id)arg1;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (_Bool)needsContinuousRoundedCorners;
- (id)initWithImage:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

