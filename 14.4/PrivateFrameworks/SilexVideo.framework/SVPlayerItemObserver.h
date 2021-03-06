//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemObserving-Protocol.h>

@class AVPlayer, AVPlayerItem, NSString, SVKeyValueObserver;

@interface SVPlayerItemObserver : NSObject <SVPlayerItemObserving>
{
    CDUnknownBlockType _changeBlock;
    AVPlayerItem *_item;
    AVPlayer *_player;
    SVKeyValueObserver *_observer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SVKeyValueObserver *observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak AVPlayerItem *item; // @synthesize item=_item;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

