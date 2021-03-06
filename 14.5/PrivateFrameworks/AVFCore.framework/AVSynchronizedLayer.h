//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerItem, AVSynchronizedLayerInternal;

@interface AVSynchronizedLayer : CALayer
{
    AVSynchronizedLayerInternal *_syncLayer;
}

+ (id)synchronizedLayerWithPlayerItem:(id)arg1;
- (void)dealloc;
- (void)layerDidBecomeVisible:(_Bool)arg1;
@property(retain, nonatomic) AVPlayerItem *playerItem;
- (void)_removeSelfFromPlayerItem;
- (id)init;

@end

