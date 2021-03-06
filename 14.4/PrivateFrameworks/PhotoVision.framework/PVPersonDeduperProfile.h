//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoVision/NSCopying-Protocol.h>

@interface PVPersonDeduperProfile : NSObject <NSCopying>
{
    _Bool _shouldRelaxThreshold;
    double _strictMaximumDistance;
    double _normalMaximumDistance;
    double _fuzzyMaximumDistance;
}

@property(nonatomic) _Bool shouldRelaxThreshold; // @synthesize shouldRelaxThreshold=_shouldRelaxThreshold;
@property(nonatomic) double fuzzyMaximumDistance; // @synthesize fuzzyMaximumDistance=_fuzzyMaximumDistance;
@property(nonatomic) double normalMaximumDistance; // @synthesize normalMaximumDistance=_normalMaximumDistance;
@property(nonatomic) double strictMaximumDistance; // @synthesize strictMaximumDistance=_strictMaximumDistance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

