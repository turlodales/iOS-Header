//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVTouchIgnoringView.h>

@protocol AVContentOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface AVContentOverlayView : AVTouchIgnoringView
{
    id <AVContentOverlayViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AVContentOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;

@end

