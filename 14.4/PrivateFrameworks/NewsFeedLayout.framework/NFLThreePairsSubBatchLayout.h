//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout;

@interface NFLThreePairsSubBatchLayout : NFLSubBatchLayout
{
    NFLPairSubBatchLayout *_leftPairComponent;
    NFLPairSubBatchLayout *_centerPairComponent;
    NFLPairSubBatchLayout *_rightPairComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFLPairSubBatchLayout *rightPairComponent; // @synthesize rightPairComponent=_rightPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *centerPairComponent; // @synthesize centerPairComponent=_centerPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *leftPairComponent; // @synthesize leftPairComponent=_leftPairComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (_Bool)isValid;

@end

