//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface GVGraph : NSObject
{
    NSMutableOrderedSet *nodes;
    NSMutableOrderedSet *edges;
}

@property(retain, nonatomic) NSMutableOrderedSet *edges; // @synthesize edges;
@property(retain, nonatomic) NSMutableOrderedSet *nodes; // @synthesize nodes;
- (id)description;
- (void)iterateOverAllNodes:(CDUnknownBlockType)arg1;
- (void)iterateOverAllEdges:(CDUnknownBlockType)arg1;
- (_Bool)render:(id)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)connectedSubgraphs;
- (void)undoReverseEdge:(id)arg1;
- (void)reverseEdge:(id)arg1;
- (void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(_Bool)arg3;
- (void)removeEdgeFrom:(id)arg1 to:(id)arg2;
- (void)addEdgeFrom:(id)arg1 to:(id)arg2;
- (_Bool)hasEdgeFrom:(id)arg1 to:(id)arg2;
- (id)edgeFrom:(id)arg1 to:(id)arg2;
- (id)allEdges;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (_Bool)hasNode:(id)arg1;
- (id)allNodes;
- (void)dealloc;
- (id)init;

@end

