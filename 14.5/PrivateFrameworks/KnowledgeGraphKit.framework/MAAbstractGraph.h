//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAAbstractGraph : NSObject
{
    NSMutableArray *_nodes;
    NSMutableArray *_edges;
}

- (void).cxx_destruct;
- (id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 didCreate:(_Bool *)arg4;
- (id)addUniqueNodeWithLabel:(id)arg1 didCreate:(_Bool *)arg2;
- (id)init;

@end

