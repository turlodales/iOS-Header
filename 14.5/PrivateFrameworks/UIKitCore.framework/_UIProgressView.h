//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSProgress, _UICircleProgressView;

__attribute__((visibility("hidden")))
@interface _UIProgressView : UIView
{
    _UICircleProgressView *_progressView;
    NSProgress *_trackedProgress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSProgress *trackedProgress; // @synthesize trackedProgress=_trackedProgress;
- (void)_updateProgressValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

