//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry
{
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isSameTypeOfEffect:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;

@end

