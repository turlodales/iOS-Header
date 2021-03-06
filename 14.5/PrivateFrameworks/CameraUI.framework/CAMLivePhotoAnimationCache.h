//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CAMLivePhotoAnimationCache : NSObject
{
    _Bool _automaticModeAllowed;
    NSDictionary *__animationFramesByColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setAnimationFramesByColor:) NSDictionary *_animationFramesByColor; // @synthesize _animationFramesByColor=__animationFramesByColor;
@property(readonly, nonatomic) _Bool automaticModeAllowed; // @synthesize automaticModeAllowed=_automaticModeAllowed;
- (id)_actuallyLoadEnablingAnimationImagesForColors:(id)arg1 scale:(double)arg2;
- (id)_colors;
- (id)_tintColorForMode:(long long)arg1;
@property(readonly, nonatomic, getter=_isEmpty) _Bool _empty;
- (id)framesForLivePhotoMode:(long long)arg1;
- (void)preloadFramesIfNeeded;
- (id)initWithAutomaticModeAllowed:(_Bool)arg1;

@end

