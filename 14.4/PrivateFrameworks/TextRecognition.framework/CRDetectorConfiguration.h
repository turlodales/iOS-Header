//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CRDetectorConfiguration : NSObject
{
    _Bool _cpuOnly;
    _Bool _logIntermediateResults;
    _Bool _runFullTile;
    _Bool _mergeFullTile;
    int _mergingType;
    NSURL *_customModelURL;
    double _tileOverlap;
    double _scoreMapScaleFactor;
    struct CGSize _tileSize;
    struct CGSize _minimumInputSize;
    struct CGSize _maximumInputSize;
}

- (void).cxx_destruct;
@property int mergingType; // @synthesize mergingType=_mergingType;
@property(readonly) double scoreMapScaleFactor; // @synthesize scoreMapScaleFactor=_scoreMapScaleFactor;
@property(readonly) struct CGSize maximumInputSize; // @synthesize maximumInputSize=_maximumInputSize;
@property(readonly) struct CGSize minimumInputSize; // @synthesize minimumInputSize=_minimumInputSize;
@property(readonly) double tileOverlap; // @synthesize tileOverlap=_tileOverlap;
@property(readonly) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property _Bool mergeFullTile; // @synthesize mergeFullTile=_mergeFullTile;
@property _Bool runFullTile; // @synthesize runFullTile=_runFullTile;
@property(readonly) NSURL *customModelURL; // @synthesize customModelURL=_customModelURL;
@property(readonly) _Bool logIntermediateResults; // @synthesize logIntermediateResults=_logIntermediateResults;
@property(readonly) _Bool cpuOnly; // @synthesize cpuOnly=_cpuOnly;
- (id)initV2DefaultConfig;
- (id)initV1DefaultConfig;
- (id)initWithImageReaderOptions:(id)arg1 error:(id *)arg2;

@end

