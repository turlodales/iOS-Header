//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;

@interface VSTreeNode : NSObject
{
    id _representedObject;
    VSTreeNode *_parentNode;
    NSMutableArray *_children;
}

+ (id)keyPathsForValuesAffectingLeaf;
+ (id)keyPathsForValuesAffectingIndexPath;
+ (id)treeNodeWithRepresentedObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) __weak VSTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
- (id)descendantNodeAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *mutableChildNodes;
@property(readonly, copy, nonatomic) NSArray *childNodes;
- (void)removeChildNodesAtIndexes:(id)arg1;
- (void)insertChildNodes:(id)arg1 atIndexes:(id)arg2;
@property(readonly, nonatomic, getter=isLeaf) _Bool leaf;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_descendantNodesAtDepth:(unsigned long long)arg1;

@end

