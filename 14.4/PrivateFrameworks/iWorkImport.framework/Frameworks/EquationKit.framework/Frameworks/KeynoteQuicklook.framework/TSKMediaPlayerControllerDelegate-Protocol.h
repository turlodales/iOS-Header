//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class NSError;
@protocol TSKMediaPlayerController;

@protocol TSKMediaPlayerControllerDelegate <NSObject>
- (void)playbackDidStopForPlayerController:(id <TSKMediaPlayerController>)arg1;
- (void)playerController:(id <TSKMediaPlayerController>)arg1 playbackDidFailWithError:(NSError *)arg2;
@end

