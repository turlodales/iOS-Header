//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NFContainerPool : NSObject
{
    _Bool _objectGraphDrainingEnabled;
    NSMutableDictionary *_singletons;
    NSMutableDictionary *_containerSingletons;
    NSMutableDictionary *_graph;
    unsigned long long _depth;
    unsigned long long _drainDepth;
    NSMutableArray *_onDrainBlocks;
    NSMutableArray *_onDrainCopyPoolObjectGraphBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks; // @synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks;
@property(retain, nonatomic) NSMutableArray *onDrainBlocks; // @synthesize onDrainBlocks=_onDrainBlocks;
@property(nonatomic, getter=isObjectGraphDrainingEnabled) _Bool objectGraphDrainingEnabled; // @synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled;
@property(nonatomic) unsigned long long drainDepth; // @synthesize drainDepth=_drainDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSMutableDictionary *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) NSMutableDictionary *containerSingletons; // @synthesize containerSingletons=_containerSingletons;
@property(retain, nonatomic) NSMutableDictionary *singletons; // @synthesize singletons=_singletons;
- (void)drain;
@property(readonly, nonatomic, getter=isPoolPreparedForLockingGraph) _Bool poolPreparedForLockingGraph;
- (void)linkDepth:(CDUnknownBlockType)arg1;
- (void)onDrainCopyPoolObjectGraph:(CDUnknownBlockType)arg1;
- (void)onDrain:(CDUnknownBlockType)arg1;
- (id)enter:(CDUnknownBlockType)arg1;
- (id)copyWithObjectGraphDrainingDisabled;
- (id)init;
- (id)initWithSingletonPool:(id)arg1;

@end

