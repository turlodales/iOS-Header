//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSSignalModel-Protocol.h>

@class NSString;

@interface CLSMediaAnalysisModel : NSObject <CLSSignalModel>
{
    unsigned long long _version;
    unsigned long long _minimumSupportedVersion;
    double _videoScoreThresholdToBeInteresting;
    double _videoScoreThresholdToNotBeJunk;
    double _autoplaySuggestionScoreThresholdToBeInteresting;
    double _autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
}

+ (unsigned long long)latestVersion;
+ (unsigned long long)currentAnalyzerVersion;
+ (id)name;
+ (id)modelWithVersion:(unsigned long long)arg1;
@property(readonly) double autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset; // @synthesize autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset=_autoplaySuggestionScoreExclusiveThresholdForVideoKeyAsset;
@property(readonly) double autoplaySuggestionScoreThresholdToBeInteresting; // @synthesize autoplaySuggestionScoreThresholdToBeInteresting=_autoplaySuggestionScoreThresholdToBeInteresting;
@property(readonly) double videoScoreThresholdToNotBeJunk; // @synthesize videoScoreThresholdToNotBeJunk=_videoScoreThresholdToNotBeJunk;
@property(readonly) double videoScoreThresholdToBeInteresting; // @synthesize videoScoreThresholdToBeInteresting=_videoScoreThresholdToBeInteresting;
@property(readonly) unsigned long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property(readonly) unsigned long long version; // @synthesize version=_version;
- (void)setupVersion33;
- (id)initWithVersion:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

