//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PLPublishingMedia : NSObject
{
    _Bool _isVideo;
    _Bool _isHDVideo;
    id _asset;
    NSString *_pathForVideoFile;
    NSURL *_assetURL;
    double _duration;
}

+ (_Bool)isValidPublishingMedia:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isHDVideo; // @synthesize isHDVideo=_isHDVideo;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain, nonatomic) NSString *pathForVideoFile; // @synthesize pathForVideoFile=_pathForVideoFile;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAVURLAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

