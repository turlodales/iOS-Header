//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIBackdropContentView : UIView
{
    _Bool _isForcingLayout;
}

- (void)didMoveToWindow;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1;
- (void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

