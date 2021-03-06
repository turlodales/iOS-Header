//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform
{
}

+ (id)meshTransform;
@property _Bool replicatesEdges;
@property int subdivisionSteps;
@property(copy) NSString *depthNormalization;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeFaceAtIndex:(unsigned long long)arg1;
- (void)addFace:(struct CAMeshFace)arg1;
- (void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(struct CAMeshFace)arg2;
- (void)removeVertexAtIndex:(unsigned long long)arg1;
- (void)addVertex:(struct CAMeshVertex)arg1;
- (void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(struct CAMeshVertex)arg2;
- (id)init;

@end

