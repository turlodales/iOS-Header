//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTAStarFuzzyMatchingConfig : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AStarFuzzyMatchingConfig *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_25be8a7a)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSString *delimiter;
@property(readonly, nonatomic) unsigned int word_penalty;
@property(readonly, nonatomic) unsigned int max_latency;
@property(readonly, nonatomic) unsigned int parabolic_error_min;
@property(readonly, nonatomic) float parabolic_error_bias;
@property(readonly, nonatomic) float parabolic_error_center;
@property(readonly, nonatomic) float parabolic_error_wide;
@property(readonly, nonatomic) unsigned int max_path_num_at_boundary;
@property(readonly, nonatomic) _Bool enable_word_boundary;
@property(readonly, nonatomic) unsigned int rel_pruning_threshold;
@property(readonly, nonatomic) unsigned int abs_pruning_threshold;
@property(readonly, nonatomic) unsigned int max_tm_score;
@property(readonly, nonatomic) unsigned int max_expand_paths;
@property(readonly, nonatomic) unsigned int max_results;
@property(readonly, nonatomic) _Bool enable_completion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AStarFuzzyMatchingConfig *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AStarFuzzyMatchingConfig *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

