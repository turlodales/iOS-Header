//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView
{
    UIImage *_value;
    UIImage *_alternate;
    UIImage *_landscapeValue;
    UIImage *_landscapeAlternate;
    _Bool _showAlternate;
    _Bool _showLandscape;
}

- (void).cxx_destruct;
- (void)setLandscape:(_Bool)arg1;
- (void)setImage:(id)arg1;
- (void)setAlternateImage:(id)arg1;
- (void)showAlternateImage:(_Bool)arg1;
- (void)setCurrentImage;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_selectedCompactImage;
- (id)_selectedImage;
- (id)_unselectedCompactImage;
- (id)_unselectedImage;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4;

@end

