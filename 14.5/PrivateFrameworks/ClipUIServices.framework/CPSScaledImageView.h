//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPSScaledImageView : UIImageView
{
    struct CGSize _scaledImageSize;
    _Bool _needsUpdateScaledImageSize;
    NSString *_textStyleForScaling;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *textStyleForScaling; // @synthesize textStyleForScaling=_textStyleForScaling;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;

@end

