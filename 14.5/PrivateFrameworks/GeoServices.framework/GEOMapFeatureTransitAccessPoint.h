//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapFeatureTransitAccessPoint : NSObject
{
    CDStruct_bc67eba8 *_feature;
    CDStruct_2c43369c _coordinate;
}

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) double radiusMeters;
@property(readonly, nonatomic) _Bool isExit;
@property(readonly, nonatomic) _Bool isEntrance;
- (void)dealloc;
- (id)initWithFeature:(CDStruct_bc67eba8 *)arg1;
@property(readonly, nonatomic) CDStruct_bc67eba8 *feature;

@end

