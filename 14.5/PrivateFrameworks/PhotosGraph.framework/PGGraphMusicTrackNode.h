//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSSet, NSString;

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode
{
    NSString *_title;
    double _durationInSeconds;
}

+ (id)musicTrackTitleSortDescriptors;
- (void).cxx_destruct;
@property(readonly) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
@property(readonly, nonatomic) NSSet *artistNodes;
@property(readonly, nonatomic) NSSet *genreNodes;
@property(readonly, nonatomic) NSSet *albumNodes;
- (void)enumerateArtistNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGenreNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAlbumNodesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned short)domain;
- (id)label;
- (id)propertyDictionary;
- (_Bool)hasProperties:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)init;

@end

