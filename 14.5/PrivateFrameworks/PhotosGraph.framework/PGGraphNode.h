//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MANode.h>

#import <PhotosGraph/PGGraphElement-Protocol.h>

@class NSString, PGGraph;

@interface PGGraphNode : MANode <PGGraphElement>
{
}

+ (id)filter;
- (unsigned long long)propertiesCount;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setWeight:(float)arg1;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 shouldStop:(_Bool *)arg4 block:(CDUnknownBlockType)arg5;
- (void)_enumerateDeepNeighborsWithLabel:(id)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(id)arg4 shouldStop:(_Bool *)arg5 block:(CDUnknownBlockType)arg6;
- (void)enumerateDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3 andBlock:(CDUnknownBlockType)arg4;
- (id)deepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfDeepNeighborsWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)firstDeepNeighborWithLabel:(id)arg1 usingOutEdges:(_Bool)arg2 inDomain:(unsigned short)arg3;
- (id)keywordDescription;
- (id)UUID;
- (id)name;
- (void)concreteNodeSuperAccess_setPropertyValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) PGGraph *graph;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

