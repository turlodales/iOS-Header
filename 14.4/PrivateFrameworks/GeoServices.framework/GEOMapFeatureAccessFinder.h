//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureAccessFinder : NSObject
{
    _Bool _allowNetwork;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool allowNetwork; // @synthesize allowNetwork=_allowNetwork;
- (id)init;
- (_Bool)_boundingCircle:(const Sphere_37dc312c *)arg1 intersectsPoints:(CDStruct_6e3f967a *)arg2 pointCount:(unsigned long long)arg3;
- (_Bool)_boundingCircle:(const Sphere_37dc312c *)arg1 intersectsTransitLink:(CDStruct_32d7d945 *)arg2;
- (_Bool)_boundingCircle:(const Sphere_37dc312c *)arg1 intersectsFeature:(CDStruct_4da79865 *)arg2;
- (Sphere_37dc312c)_boundingCircleWithCenter:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 inTile:(struct _GEOTileKey)arg3;
- (_Bool)_featureHasValidGeometry:(CDStruct_4da79865 *)arg1;

@end

