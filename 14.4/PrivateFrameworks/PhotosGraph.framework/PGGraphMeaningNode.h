//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphPropertylessNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphPortraitTopic-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport>
{
    NSString *_label;
    long long _isVeryMeaningfulCachedValue;
}

+ (id)momentOfMeaning;
+ (id)eventOfMeaning;
+ (id)submeaningOfMeaning;
+ (id)meaningLabelsForMeaningNodes:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long isVeryMeaningfulCachedValue; // @synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue;
- (id)label;
- (id)associatedNodesForRemoval;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
- (id)_localizationKeyForMeaningLabel:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic, getter=isVeryMeaningful) _Bool veryMeaningful;
@property(readonly) PGGraphMeaningNode *parentMeaningNode;
- (void)traverseParentMeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)traverseSubmeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubmeaningsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningfulEventsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)highlightNodes;
- (unsigned short)domain;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)initWithLabel:(id)arg1;
@property(readonly, nonatomic) NSString *pg_topic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

