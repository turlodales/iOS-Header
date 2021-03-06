//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLScrollableContentItemViewController.h>

#import <QuickLook/QLAnimationTimerObserver-Protocol.h>

@class NSString, QLAnimatedImage, UIImageView;

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver>
{
    UIImageView *_imageView;
    QLAnimatedImage *_animatedImage;
    double _initialTimeStamp;
    double _currentPlaybackTime;
    struct CGSize _imageSize;
    _Bool _imageIsAnimated;
}

- (void).cxx_destruct;
- (id)draggableView;
- (void)animationTimerFired:(double)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (struct CGSize)imageSize;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

