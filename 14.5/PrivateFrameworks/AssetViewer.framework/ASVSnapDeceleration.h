//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVDeceleration.h>

@interface ASVSnapDeceleration : ASVDeceleration
{
    float _currentOffset;
    float _minOffset;
    float _maxOffset;
}

@property(nonatomic) float maxOffset; // @synthesize maxOffset=_maxOffset;
@property(nonatomic) float minOffset; // @synthesize minOffset=_minOffset;
@property(nonatomic) float currentOffset; // @synthesize currentOffset=_currentOffset;
- (float)decelerationDelta;
- (void)calculateSnapFromStartingOffset:(float)arg1 startingVelocity:(float)arg2 deltaTime:(float)arg3 outOffset:(float *)arg4 outVelocity:(float *)arg5;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 startingOffset:(float)arg3 minOffset:(float)arg4 maxOffset:(float)arg5;

@end

