//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSNumber, UIMovieScrubberTrackView;

@protocol UIMovieScrubberTrackViewDataSource <NSObject>
- (void)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 requestThumbnailImageForTimestamp:(NSNumber *)arg2 isSummaryThumbnail:(_Bool)arg3;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(UIMovieScrubberTrackView *)arg1;
- (NSArray *)movieScrubberTrackView:(UIMovieScrubberTrackView *)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(NSNumber *)arg3 endingAt:(NSNumber *)arg4;
- (double)movieScrubberTrackViewDuration:(UIMovieScrubberTrackView *)arg1;
@end

