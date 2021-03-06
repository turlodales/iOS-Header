//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTrafficFeature.h>

@class NSString;

@interface VKTrafficCameraFeature : VKTrafficFeature
{
    long long _type;
    _Bool _isAboveSpeedThreshold;
    unsigned int _speedLimit;
    NSString *_speedLimitText;
    unsigned int _speedThreshold;
}

+ (id)stringForTrafficCameraType:(long long)arg1;
@property(readonly, nonatomic) NSString *speedLimitText; // @synthesize speedLimitText=_speedLimitText;
@property(nonatomic) _Bool isAboveSpeedThreshold; // @synthesize isAboveSpeedThreshold=_isAboveSpeedThreshold;
@property(readonly, nonatomic) unsigned int speedThreshold; // @synthesize speedThreshold=_speedThreshold;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)populateDebugNode:(struct DebugTreeNode *)arg1;
- (_Bool)isSpeedLimitCamera;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTrafficCamera:(id)arg1 onRoute:(id)arg2;
- (id)initWithTrafficCameraType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 onRoute:(id)arg4;

@end

