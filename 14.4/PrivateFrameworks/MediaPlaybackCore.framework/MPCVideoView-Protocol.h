//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class AVPlayerLayer, NSString;

@protocol MPCVideoView <NSObject>
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(copy, nonatomic) NSString *videoGravity;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@end

