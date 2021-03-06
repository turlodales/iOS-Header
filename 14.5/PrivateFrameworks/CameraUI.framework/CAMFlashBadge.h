//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/CEKBadgeView.h>

@class NSString, UIImage;

@interface CAMFlashBadge : CEKBadgeView
{
    UIImage *__contentImage;
    NSString *__contentSizeCategory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *_contentSizeCategory; // @synthesize _contentSizeCategory=__contentSizeCategory;
@property(retain, nonatomic) UIImage *_contentImage; // @synthesize _contentImage=__contentImage;
- (void)updateToContentSize:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)_maskImage;
- (struct UIEdgeInsets)_imageInsets;
- (struct CGSize)_imageSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

