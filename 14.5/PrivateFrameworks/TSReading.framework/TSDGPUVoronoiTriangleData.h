//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSDGPUVoronoiTriangleData : NSObject
{
    unsigned long long *_triangleIndexToCellIndexMappingTable;
    unsigned long long *_triangleIndexToCellTriangleIndexMappingTable;
    unsigned long long _triangleIndexToCellMappingTableCount;
    unsigned long long _triangleCount;
    NSArray *_cells;
    struct CGRect _bounds;
}

@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(readonly, nonatomic) unsigned long long triangleCount; // @synthesize triangleCount=_triangleCount;
- (unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)arg1;
- (unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)arg1;
- (id)cellFromTriangleIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long cellCount;
- (void)dealloc;
- (id)initWithPoints:(unsigned long long)arg1 clippedToRect:(struct CGRect)arg2 percentOfCellsToSplit:(double)arg3 randomGenerator:(id)arg4;
- (void)p_setupDataWithPointCount:(unsigned long long)arg1 clippedToRect:(struct CGRect)arg2 percentOfCellsToSplit:(double)arg3 randomGenerator:(id)arg4;

@end

