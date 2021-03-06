//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVVideoComposition, NSArray;

@interface PUMergedLivePhotosVideo : NSObject
{
    NSArray *_assets;
    NSArray *_startTimes;
    NSArray *_keyTimes;
    AVAsset *_mergedVideoAsset;
    AVVideoComposition *_mergedVideoComposition;
    double _videoAspectRatio;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property(readonly, nonatomic) AVVideoComposition *mergedVideoComposition; // @synthesize mergedVideoComposition=_mergedVideoComposition;
@property(readonly, nonatomic) AVAsset *mergedVideoAsset; // @synthesize mergedVideoAsset=_mergedVideoAsset;
@property(readonly, copy, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(readonly, copy, nonatomic) NSArray *startTimes; // @synthesize startTimes=_startTimes;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)debugDescription;
- (long long)_assetIndexAtTime:(CDStruct_1b6d18a9)arg1;
- (id)assetAtTime:(CDStruct_1b6d18a9)arg1 progress:(out double *)arg2;
- (id)initWithAssets:(id)arg1 startTimes:(id)arg2 keyTimes:(id)arg3 videoAsset:(id)arg4 videoComposition:(id)arg5 videoAspectRatio:(double)arg6 options:(unsigned long long)arg7;

@end

