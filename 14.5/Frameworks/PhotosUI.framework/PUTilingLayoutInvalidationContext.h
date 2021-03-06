//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface PUTilingLayoutInvalidationContext : NSObject
{
    NSMutableSet *_invalidatedTileKinds;
    _Bool _invalidatedAllTiles;
    _Bool _invalidatedContentBounds;
    _Bool _invalidatedAnyTile;
    NSMutableDictionary *__invalidatedIndexPathsByTileKind;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *_invalidatedIndexPathsByTileKind; // @synthesize _invalidatedIndexPathsByTileKind=__invalidatedIndexPathsByTileKind;
@property(nonatomic) _Bool invalidatedAnyTile; // @synthesize invalidatedAnyTile=_invalidatedAnyTile;
@property(readonly, nonatomic) _Bool invalidatedContentBounds; // @synthesize invalidatedContentBounds=_invalidatedContentBounds;
@property(nonatomic) _Bool invalidatedAllTiles; // @synthesize invalidatedAllTiles=_invalidatedAllTiles;
@property(readonly, nonatomic) NSSet *invalidatedTileKinds; // @synthesize invalidatedTileKinds=_invalidatedTileKinds;
- (void)enumerateInvalidatedTilesUsingBlock:(CDUnknownBlockType)arg1;
- (void)invalidateContentBounds;
- (void)invalidateAllTiles;
- (void)invalidateAllTilesWithKind:(id)arg1;
- (void)invalidateTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)init;

@end

