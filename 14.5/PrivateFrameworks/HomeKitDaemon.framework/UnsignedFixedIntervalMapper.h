//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDIntervalMapper.h>

@class NSArray;

@interface UnsignedFixedIntervalMapper : HMDIntervalMapper
{
    NSArray *_intervals;
    CDUnknownBlockType _creationBlock;
    CDUnknownBlockType _comparisonBlock;
}

- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
@property(readonly) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly) NSArray *intervals; // @synthesize intervals=_intervals;
- (id)intervalForValue:(unsigned long long)arg1;
- (id)intervalIndexForValue:(unsigned long long)arg1;
- (id)initWithBins:(id)arg1 intervalCreationBlock:(CDUnknownBlockType)arg2 valueComparisonBlock:(CDUnknownBlockType)arg3;

@end

