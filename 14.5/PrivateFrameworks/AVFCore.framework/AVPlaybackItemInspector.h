//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetInspector.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspector : AVAssetInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;
    NSArray *_trackIDs;
}

- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)trackIDs;
- (long long)trackCount;
- (_Bool)providesPreciseDurationAndTiming;
- (struct CGSize)naturalSize;
- (CDStruct_1b6d18a9)duration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem *playbackItem;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2;

@end

