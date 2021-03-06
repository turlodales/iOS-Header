//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVOperation.h>

@class AVAssetWriterInputPassDescription;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _trackID;
    AVAssetWriterInputPassDescription *_nextPassDescription;
}

@property(readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass; // @synthesize descriptionForNextPass=_nextPassDescription;
- (void)_notifyWhetherMorePassesAreNeeded:(_Bool)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;
- (void)start;
- (_Bool)isAsynchronous;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 trackID:(int)arg2;
- (id)init;

@end

