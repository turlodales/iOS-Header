//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WKVideoLayerRemote : CALayer
{
    struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> _mediaPlayerPrivateRemote;
    struct RetainPtr<CAContext> _context;
    struct unique_ptr<WebCore::Timer, std::__1::default_delete<WebCore::Timer>> _resolveBoundsTimer;
    _Bool _shouldRestartWhenTimerFires;
    struct Seconds _delay;
    struct CGRect _videoLayerFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect videoLayerFrame; // @synthesize videoLayerFrame=_videoLayerFrame;
- (void)resolveBounds;
- (void)layoutSublayers;
@property(nonatomic) struct MediaPlayerPrivateRemote *mediaPlayerPrivateRemote;
- (id)init;

@end

