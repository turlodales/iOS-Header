//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGLongTailAdditionalOptions : NSObject
{
    unsigned long long _qualityPercentile;
    unsigned long long _verifiedPersonScoreValue;
    unsigned long long _topTierAestheticScoreValue;
}

@property(nonatomic) unsigned long long topTierAestheticScoreValue; // @synthesize topTierAestheticScoreValue=_topTierAestheticScoreValue;
@property(nonatomic) unsigned long long verifiedPersonScoreValue; // @synthesize verifiedPersonScoreValue=_verifiedPersonScoreValue;
@property(nonatomic) unsigned long long qualityPercentile; // @synthesize qualityPercentile=_qualityPercentile;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

