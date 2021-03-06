//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NFLFeedTileLayoutInfo, NSArray, NSIndexPath, NSSet, NSString;

@protocol FRFeedCollectionViewLayoutCacheType <NSObject, NSCopying>
- (NSArray *)sectionsIDsIntersectingWithRect:(struct CGRect)arg1;
- (NSArray *)allGapLayoutTileInfos;
- (NFLFeedTileLayoutInfo *)findClosestGapToLayoutInfoID:(NSString *)arg1 searchUnderlyingTileInfos:(_Bool)arg2 withInDistance:(double)arg3;
- (NSArray *)allLayoutTileInfos;
- (NSString *)layoutTileInfoIDOfAdInOrder:(unsigned long long)arg1 relativeToLayoutTileInfoID:(NSString *)arg2;
- (NSSet *)allLayoutTileInfoIDs;
- (long long)yOriginOfLayoutTileInfoID:(NSString *)arg1 searchUnderlyingTileInfos:(_Bool)arg2;
- (NSIndexPath *)indexPathForLayoutTileInfoID:(NSString *)arg1 searchUnderlyingTileInfos:(_Bool)arg2;
- (NFLFeedTileLayoutInfo *)layoutTileInfoForID:(NSString *)arg1 searchUnderlyingTileInfos:(_Bool)arg2;
- (unsigned long long)groupDisplayRankForSectionID:(NSString *)arg1;
- (unsigned long long)rankForLayoutTileInfoID:(NSString *)arg1;
- (NFLFeedTileLayoutInfo *)layoutTileInfoForIndexPath:(NSIndexPath *)arg1;
- (NSArray *)layoutTileInfosInRect:(struct CGRect)arg1;
- (NSArray *)supplimentaryLayoutAttributesForSectionID:(NSString *)arg1;
- (NSArray *)layoutAttributesInRect:(struct CGRect)arg1;
@end

