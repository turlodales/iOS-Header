//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLVolumeGrid : NSObject
{
    struct unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree>> _octree;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long *)trianglesIntersectingRayWithOrigin:(unsigned long long *)arg1 direction:count: /* Error: Ran out of types for this method. */;
- (id)meshWithStyle:(unsigned long long)arg1;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorWidth:(float)arg3 exteriorWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2;
- (id)initWithObject:(id)arg1 divisions:(int)arg2;

@end

